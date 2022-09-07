/****************************************************************************
 *
 * Copyright 2017 Proyectos y Sistemas de Mantenimiento SL (eProsima).
 * Copyright (c) 2018-2021 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

#include <fastcdr/Cdr.h>
#include <condition_variable>
#include <queue>
#include <type_traits>

#include "microRTPS_timesync.h"

#include "Timesync_Publisher.h"
#include "SensorCombined_Publisher.h"
#include "VehicleAttitude_Publisher.h"
#include "VehicleLocalPosition_Publisher.h"
#include "TimesyncStatus_Publisher.h"
#include "VehicleStatus_Publisher.h"
#include "BatteryStatus_Publisher.h"
#include "Timesync_Subscriber.h"
#include "OffboardControlMode_Subscriber.h"
#include "VehicleLocalPositionSetpoint_Subscriber.h"
#include "VehicleCommand_Subscriber.h"
#include "VehicleAttitudeSetpoint_Subscriber.h"
#include "VehicleRatesSetpoint_Subscriber.h"
#include "VehicleOdometry_Subscriber.h"
#include "SensorGps_Subscriber.h"
#include "ManualControlSetpoint_Subscriber.h"
#include "GpsInjectData_Subscriber.h"
#include "ExternalController_Subscriber.h"
#include "TrajectorySetpoint_Subscriber.h"
#include "VehicleVisualOdometry_Subscriber.h"


using Timesync_msg_t = px4_msgs::msg::Timesync;
using OffboardControlMode_msg_t = px4_msgs::msg::OffboardControlMode;
using VehicleLocalPositionSetpoint_msg_t = px4_msgs::msg::VehicleLocalPositionSetpoint;
using VehicleCommand_msg_t = px4_msgs::msg::VehicleCommand;
using VehicleAttitudeSetpoint_msg_t = px4_msgs::msg::VehicleAttitudeSetpoint;
using VehicleRatesSetpoint_msg_t = px4_msgs::msg::VehicleRatesSetpoint;
using VehicleOdometry_msg_t = px4_msgs::msg::VehicleOdometry;
using SensorGps_msg_t = px4_msgs::msg::SensorGps;
using ManualControlSetpoint_msg_t = px4_msgs::msg::ManualControlSetpoint;
using GpsInjectData_msg_t = px4_msgs::msg::GpsInjectData;
using ExternalController_msg_t = px4_msgs::msg::ExternalController;
using TrajectorySetpoint_msg_t = px4_msgs::msg::TrajectorySetpoint;
using VehicleVisualOdometry_msg_t = px4_msgs::msg::VehicleVisualOdometry;
using Timesync_msg_t = px4_msgs::msg::Timesync;
using SensorCombined_msg_t = px4_msgs::msg::SensorCombined;
using VehicleAttitude_msg_t = px4_msgs::msg::VehicleAttitude;
using VehicleLocalPosition_msg_t = px4_msgs::msg::VehicleLocalPosition;
using TimesyncStatus_msg_t = px4_msgs::msg::TimesyncStatus;
using VehicleStatus_msg_t = px4_msgs::msg::VehicleStatus;
using BatteryStatus_msg_t = px4_msgs::msg::BatteryStatus;

class RtpsTopics
{
public:
	bool init(std::condition_variable *t_send_queue_cv, std::mutex *t_send_queue_mutex, std::queue<uint8_t> *t_send_queue,
		  const std::string &ns);
	void set_timesync(const std::shared_ptr<TimeSync> &timesync) { _timesync = timesync; };
	template <typename T>
	void sync_timestamp_of_incoming_data(T &msg);
	void publish(const uint8_t topic_ID, char data_buffer[], size_t len);
	template <typename T>
	void sync_timestamp_of_outgoing_data(T &msg);
	bool getMsg(const uint8_t topic_ID, eprosima::fastcdr::Cdr &scdr);

private:
	/** Publishers **/
	Timesync_Publisher _Timesync_pub;
	Timesync_Publisher _Timesync_fmu_in_pub;
	SensorCombined_Publisher _SensorCombined_pub;
	VehicleAttitude_Publisher _VehicleAttitude_pub;
	VehicleLocalPosition_Publisher _VehicleLocalPosition_pub;
	TimesyncStatus_Publisher _TimesyncStatus_pub;
	VehicleStatus_Publisher _VehicleStatus_pub;
	BatteryStatus_Publisher _BatteryStatus_pub;

	/** Subscribers **/
	Timesync_Subscriber _Timesync_sub;
	OffboardControlMode_Subscriber _OffboardControlMode_sub;
	VehicleLocalPositionSetpoint_Subscriber _VehicleLocalPositionSetpoint_sub;
	VehicleCommand_Subscriber _VehicleCommand_sub;
	VehicleAttitudeSetpoint_Subscriber _VehicleAttitudeSetpoint_sub;
	VehicleRatesSetpoint_Subscriber _VehicleRatesSetpoint_sub;
	VehicleOdometry_Subscriber _VehicleOdometry_sub;
	SensorGps_Subscriber _SensorGps_sub;
	ManualControlSetpoint_Subscriber _ManualControlSetpoint_sub;
	GpsInjectData_Subscriber _GpsInjectData_sub;
	ExternalController_Subscriber _ExternalController_sub;
	TrajectorySetpoint_Subscriber _TrajectorySetpoint_sub;
	VehicleVisualOdometry_Subscriber _VehicleVisualOdometry_sub;

	// SFINAE
	template<typename T> struct hasTimestampSample{
	private:
		template<typename U,
            typename = decltype(std::declval<U>().timestamp_sample(int64_t()))>
		static std::true_type detect(int);
		template<typename U>
		static std::false_type detect(...);
	public:
		static constexpr bool value = decltype(detect<T>(0))::value;
  };

	template<typename T>
	inline typename std::enable_if < !hasTimestampSample<T>::value, uint64_t >::type
	getMsgTimestampSample_impl(const T *) { return 0; }

	/** Msg metada Getters **/
	template <class T>
	inline uint64_t getMsgTimestamp(const T *msg) { return msg->timestamp(); }

	template<typename T>
	inline typename std::enable_if<hasTimestampSample<T>::value, uint64_t>::type
	getMsgTimestampSample_impl(const T *msg) { return msg->timestamp_sample(); }

	template <class T>
	inline uint8_t getMsgSysID(const T *msg) { return msg->sys_id(); }

	template <class T>
	inline uint8_t getMsgSeq(const T *msg) { return msg->seq(); }

	template <class T>
	inline uint64_t getMsgTimestampSample(const T *msg) { return getMsgTimestampSample_impl(msg); }

	template<typename T>
	inline typename std::enable_if <!hasTimestampSample<T>::value, void>::type
	setMsgTimestampSample_impl(T *, const uint64_t &) {}

	/** Msg metadata Setters **/
	template <class T>
	inline void setMsgTimestamp(T *msg, const uint64_t &timestamp) { msg->timestamp() = timestamp; }

	template <class T>
	inline typename std::enable_if<hasTimestampSample<T>::value, void>::type
	setMsgTimestampSample_impl(T *msg, const uint64_t &timestamp_sample) { msg->timestamp_sample() = timestamp_sample; }

	template <class T>
	inline void setMsgSysID(T *msg, const uint8_t &sys_id) { msg->sys_id() = sys_id; }

	template <class T>
	inline void setMsgSeq(T *msg, const uint8_t &seq) { msg->seq() = seq; }

	template <class T>
	inline void setMsgTimestampSample(T *msg, const uint64_t &timestamp_sample) { setMsgTimestampSample_impl(msg, timestamp_sample); }

	/**
	 * @brief Timesync object ptr.
	 *         This object is used to compuyte and apply the time offsets to the
	 *         messages timestamps.
	 */
	std::shared_ptr<TimeSync> _timesync;
};
