// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file SensorGps.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "SensorGps.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

px4_msgs::msg::SensorGps::SensorGps()
{
    // m_timestamp com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1786f9d5
    m_timestamp = 0;
    // m_device_id com.eprosima.idl.parser.typecode.PrimitiveTypeCode@704d6e83
    m_device_id = 0;
    // m_lat com.eprosima.idl.parser.typecode.PrimitiveTypeCode@43a0cee9
    m_lat = 0;
    // m_lon com.eprosima.idl.parser.typecode.PrimitiveTypeCode@eb21112
    m_lon = 0;
    // m_alt com.eprosima.idl.parser.typecode.PrimitiveTypeCode@2eda0940
    m_alt = 0;
    // m_alt_ellipsoid com.eprosima.idl.parser.typecode.PrimitiveTypeCode@3578436e
    m_alt_ellipsoid = 0;
    // m_s_variance_m_s com.eprosima.idl.parser.typecode.PrimitiveTypeCode@706a04ae
    m_s_variance_m_s = 0.0;
    // m_c_variance_rad com.eprosima.idl.parser.typecode.PrimitiveTypeCode@6eceb130
    m_c_variance_rad = 0.0;
    // m_fix_type com.eprosima.idl.parser.typecode.PrimitiveTypeCode@10a035a0
    m_fix_type = 0;
    // m_eph com.eprosima.idl.parser.typecode.PrimitiveTypeCode@67b467e9
    m_eph = 0.0;
    // m_epv com.eprosima.idl.parser.typecode.PrimitiveTypeCode@47db50c5
    m_epv = 0.0;
    // m_hdop com.eprosima.idl.parser.typecode.PrimitiveTypeCode@5c072e3f
    m_hdop = 0.0;
    // m_vdop com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4d1b0d2a
    m_vdop = 0.0;
    // m_noise_per_ms com.eprosima.idl.parser.typecode.PrimitiveTypeCode@954b04f
    m_noise_per_ms = 0;
    // m_automatic_gain_control com.eprosima.idl.parser.typecode.PrimitiveTypeCode@149494d8
    m_automatic_gain_control = 0;
    // m_jamming_indicator com.eprosima.idl.parser.typecode.PrimitiveTypeCode@710726a3
    m_jamming_indicator = 0;
    // m_jamming_state com.eprosima.idl.parser.typecode.PrimitiveTypeCode@646007f4
    m_jamming_state = 0;
    // m_vel_m_s com.eprosima.idl.parser.typecode.PrimitiveTypeCode@481a15ff
    m_vel_m_s = 0.0;
    // m_vel_n_m_s com.eprosima.idl.parser.typecode.PrimitiveTypeCode@78186a70
    m_vel_n_m_s = 0.0;
    // m_vel_e_m_s com.eprosima.idl.parser.typecode.PrimitiveTypeCode@306279ee
    m_vel_e_m_s = 0.0;
    // m_vel_d_m_s com.eprosima.idl.parser.typecode.PrimitiveTypeCode@545997b1
    m_vel_d_m_s = 0.0;
    // m_cog_rad com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4cf4d528
    m_cog_rad = 0.0;
    // m_vel_ned_valid com.eprosima.idl.parser.typecode.PrimitiveTypeCode@77846d2c
    m_vel_ned_valid = false;
    // m_timestamp_time_relative com.eprosima.idl.parser.typecode.PrimitiveTypeCode@548ad73b
    m_timestamp_time_relative = 0;
    // m_time_utc_usec com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4c762604
    m_time_utc_usec = 0;
    // m_satellites_used com.eprosima.idl.parser.typecode.PrimitiveTypeCode@2641e737
    m_satellites_used = 0;
    // m_heading com.eprosima.idl.parser.typecode.PrimitiveTypeCode@727803de
    m_heading = 0.0;
    // m_heading_offset com.eprosima.idl.parser.typecode.PrimitiveTypeCode@704921a5
    m_heading_offset = 0.0;
    // m_heading_accuracy com.eprosima.idl.parser.typecode.PrimitiveTypeCode@df27fae
    m_heading_accuracy = 0.0;

}

px4_msgs::msg::SensorGps::~SensorGps()
{





























}

px4_msgs::msg::SensorGps::SensorGps(const SensorGps &x)
{
    m_timestamp = x.m_timestamp;
    m_device_id = x.m_device_id;
    m_lat = x.m_lat;
    m_lon = x.m_lon;
    m_alt = x.m_alt;
    m_alt_ellipsoid = x.m_alt_ellipsoid;
    m_s_variance_m_s = x.m_s_variance_m_s;
    m_c_variance_rad = x.m_c_variance_rad;
    m_fix_type = x.m_fix_type;
    m_eph = x.m_eph;
    m_epv = x.m_epv;
    m_hdop = x.m_hdop;
    m_vdop = x.m_vdop;
    m_noise_per_ms = x.m_noise_per_ms;
    m_automatic_gain_control = x.m_automatic_gain_control;
    m_jamming_indicator = x.m_jamming_indicator;
    m_jamming_state = x.m_jamming_state;
    m_vel_m_s = x.m_vel_m_s;
    m_vel_n_m_s = x.m_vel_n_m_s;
    m_vel_e_m_s = x.m_vel_e_m_s;
    m_vel_d_m_s = x.m_vel_d_m_s;
    m_cog_rad = x.m_cog_rad;
    m_vel_ned_valid = x.m_vel_ned_valid;
    m_timestamp_time_relative = x.m_timestamp_time_relative;
    m_time_utc_usec = x.m_time_utc_usec;
    m_satellites_used = x.m_satellites_used;
    m_heading = x.m_heading;
    m_heading_offset = x.m_heading_offset;
    m_heading_accuracy = x.m_heading_accuracy;
}

px4_msgs::msg::SensorGps::SensorGps(SensorGps &&x)
{
    m_timestamp = x.m_timestamp;
    m_device_id = x.m_device_id;
    m_lat = x.m_lat;
    m_lon = x.m_lon;
    m_alt = x.m_alt;
    m_alt_ellipsoid = x.m_alt_ellipsoid;
    m_s_variance_m_s = x.m_s_variance_m_s;
    m_c_variance_rad = x.m_c_variance_rad;
    m_fix_type = x.m_fix_type;
    m_eph = x.m_eph;
    m_epv = x.m_epv;
    m_hdop = x.m_hdop;
    m_vdop = x.m_vdop;
    m_noise_per_ms = x.m_noise_per_ms;
    m_automatic_gain_control = x.m_automatic_gain_control;
    m_jamming_indicator = x.m_jamming_indicator;
    m_jamming_state = x.m_jamming_state;
    m_vel_m_s = x.m_vel_m_s;
    m_vel_n_m_s = x.m_vel_n_m_s;
    m_vel_e_m_s = x.m_vel_e_m_s;
    m_vel_d_m_s = x.m_vel_d_m_s;
    m_cog_rad = x.m_cog_rad;
    m_vel_ned_valid = x.m_vel_ned_valid;
    m_timestamp_time_relative = x.m_timestamp_time_relative;
    m_time_utc_usec = x.m_time_utc_usec;
    m_satellites_used = x.m_satellites_used;
    m_heading = x.m_heading;
    m_heading_offset = x.m_heading_offset;
    m_heading_accuracy = x.m_heading_accuracy;
}

px4_msgs::msg::SensorGps& px4_msgs::msg::SensorGps::operator=(const SensorGps &x)
{

    m_timestamp = x.m_timestamp;
    m_device_id = x.m_device_id;
    m_lat = x.m_lat;
    m_lon = x.m_lon;
    m_alt = x.m_alt;
    m_alt_ellipsoid = x.m_alt_ellipsoid;
    m_s_variance_m_s = x.m_s_variance_m_s;
    m_c_variance_rad = x.m_c_variance_rad;
    m_fix_type = x.m_fix_type;
    m_eph = x.m_eph;
    m_epv = x.m_epv;
    m_hdop = x.m_hdop;
    m_vdop = x.m_vdop;
    m_noise_per_ms = x.m_noise_per_ms;
    m_automatic_gain_control = x.m_automatic_gain_control;
    m_jamming_indicator = x.m_jamming_indicator;
    m_jamming_state = x.m_jamming_state;
    m_vel_m_s = x.m_vel_m_s;
    m_vel_n_m_s = x.m_vel_n_m_s;
    m_vel_e_m_s = x.m_vel_e_m_s;
    m_vel_d_m_s = x.m_vel_d_m_s;
    m_cog_rad = x.m_cog_rad;
    m_vel_ned_valid = x.m_vel_ned_valid;
    m_timestamp_time_relative = x.m_timestamp_time_relative;
    m_time_utc_usec = x.m_time_utc_usec;
    m_satellites_used = x.m_satellites_used;
    m_heading = x.m_heading;
    m_heading_offset = x.m_heading_offset;
    m_heading_accuracy = x.m_heading_accuracy;

    return *this;
}

px4_msgs::msg::SensorGps& px4_msgs::msg::SensorGps::operator=(SensorGps &&x)
{

    m_timestamp = x.m_timestamp;
    m_device_id = x.m_device_id;
    m_lat = x.m_lat;
    m_lon = x.m_lon;
    m_alt = x.m_alt;
    m_alt_ellipsoid = x.m_alt_ellipsoid;
    m_s_variance_m_s = x.m_s_variance_m_s;
    m_c_variance_rad = x.m_c_variance_rad;
    m_fix_type = x.m_fix_type;
    m_eph = x.m_eph;
    m_epv = x.m_epv;
    m_hdop = x.m_hdop;
    m_vdop = x.m_vdop;
    m_noise_per_ms = x.m_noise_per_ms;
    m_automatic_gain_control = x.m_automatic_gain_control;
    m_jamming_indicator = x.m_jamming_indicator;
    m_jamming_state = x.m_jamming_state;
    m_vel_m_s = x.m_vel_m_s;
    m_vel_n_m_s = x.m_vel_n_m_s;
    m_vel_e_m_s = x.m_vel_e_m_s;
    m_vel_d_m_s = x.m_vel_d_m_s;
    m_cog_rad = x.m_cog_rad;
    m_vel_ned_valid = x.m_vel_ned_valid;
    m_timestamp_time_relative = x.m_timestamp_time_relative;
    m_time_utc_usec = x.m_time_utc_usec;
    m_satellites_used = x.m_satellites_used;
    m_heading = x.m_heading;
    m_heading_offset = x.m_heading_offset;
    m_heading_accuracy = x.m_heading_accuracy;

    return *this;
}

size_t px4_msgs::msg::SensorGps::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

size_t px4_msgs::msg::SensorGps::getCdrSerializedSize(const px4_msgs::msg::SensorGps& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void px4_msgs::msg::SensorGps::serialize(eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_timestamp;
    scdr << m_device_id;
    scdr << m_lat;
    scdr << m_lon;
    scdr << m_alt;
    scdr << m_alt_ellipsoid;
    scdr << m_s_variance_m_s;
    scdr << m_c_variance_rad;
    scdr << m_fix_type;
    scdr << m_eph;
    scdr << m_epv;
    scdr << m_hdop;
    scdr << m_vdop;
    scdr << m_noise_per_ms;
    scdr << m_automatic_gain_control;
    scdr << m_jamming_indicator;
    scdr << m_jamming_state;
    scdr << m_vel_m_s;
    scdr << m_vel_n_m_s;
    scdr << m_vel_e_m_s;
    scdr << m_vel_d_m_s;
    scdr << m_cog_rad;
    scdr << m_vel_ned_valid;
    scdr << m_timestamp_time_relative;
    scdr << m_time_utc_usec;
    scdr << m_satellites_used;
    scdr << m_heading;
    scdr << m_heading_offset;
    scdr << m_heading_accuracy;
}

void px4_msgs::msg::SensorGps::deserialize(eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_timestamp;
    dcdr >> m_device_id;
    dcdr >> m_lat;
    dcdr >> m_lon;
    dcdr >> m_alt;
    dcdr >> m_alt_ellipsoid;
    dcdr >> m_s_variance_m_s;
    dcdr >> m_c_variance_rad;
    dcdr >> m_fix_type;
    dcdr >> m_eph;
    dcdr >> m_epv;
    dcdr >> m_hdop;
    dcdr >> m_vdop;
    dcdr >> m_noise_per_ms;
    dcdr >> m_automatic_gain_control;
    dcdr >> m_jamming_indicator;
    dcdr >> m_jamming_state;
    dcdr >> m_vel_m_s;
    dcdr >> m_vel_n_m_s;
    dcdr >> m_vel_e_m_s;
    dcdr >> m_vel_d_m_s;
    dcdr >> m_cog_rad;
    dcdr >> m_vel_ned_valid;
    dcdr >> m_timestamp_time_relative;
    dcdr >> m_time_utc_usec;
    dcdr >> m_satellites_used;
    dcdr >> m_heading;
    dcdr >> m_heading_offset;
    dcdr >> m_heading_accuracy;
}

/*!
 * @brief This function sets a value in member timestamp
 * @param _timestamp New value for member timestamp
 */
void px4_msgs::msg::SensorGps::timestamp(uint64_t _timestamp)
{
m_timestamp = _timestamp;
}

/*!
 * @brief This function returns the value of member timestamp
 * @return Value of member timestamp
 */
uint64_t px4_msgs::msg::SensorGps::timestamp() const
{
    return m_timestamp;
}

/*!
 * @brief This function returns a reference to member timestamp
 * @return Reference to member timestamp
 */
uint64_t& px4_msgs::msg::SensorGps::timestamp()
{
    return m_timestamp;
}

/*!
 * @brief This function sets a value in member device_id
 * @param _device_id New value for member device_id
 */
void px4_msgs::msg::SensorGps::device_id(uint32_t _device_id)
{
m_device_id = _device_id;
}

/*!
 * @brief This function returns the value of member device_id
 * @return Value of member device_id
 */
uint32_t px4_msgs::msg::SensorGps::device_id() const
{
    return m_device_id;
}

/*!
 * @brief This function returns a reference to member device_id
 * @return Reference to member device_id
 */
uint32_t& px4_msgs::msg::SensorGps::device_id()
{
    return m_device_id;
}

/*!
 * @brief This function sets a value in member lat
 * @param _lat New value for member lat
 */
void px4_msgs::msg::SensorGps::lat(int32_t _lat)
{
m_lat = _lat;
}

/*!
 * @brief This function returns the value of member lat
 * @return Value of member lat
 */
int32_t px4_msgs::msg::SensorGps::lat() const
{
    return m_lat;
}

/*!
 * @brief This function returns a reference to member lat
 * @return Reference to member lat
 */
int32_t& px4_msgs::msg::SensorGps::lat()
{
    return m_lat;
}

/*!
 * @brief This function sets a value in member lon
 * @param _lon New value for member lon
 */
void px4_msgs::msg::SensorGps::lon(int32_t _lon)
{
m_lon = _lon;
}

/*!
 * @brief This function returns the value of member lon
 * @return Value of member lon
 */
int32_t px4_msgs::msg::SensorGps::lon() const
{
    return m_lon;
}

/*!
 * @brief This function returns a reference to member lon
 * @return Reference to member lon
 */
int32_t& px4_msgs::msg::SensorGps::lon()
{
    return m_lon;
}

/*!
 * @brief This function sets a value in member alt
 * @param _alt New value for member alt
 */
void px4_msgs::msg::SensorGps::alt(int32_t _alt)
{
m_alt = _alt;
}

/*!
 * @brief This function returns the value of member alt
 * @return Value of member alt
 */
int32_t px4_msgs::msg::SensorGps::alt() const
{
    return m_alt;
}

/*!
 * @brief This function returns a reference to member alt
 * @return Reference to member alt
 */
int32_t& px4_msgs::msg::SensorGps::alt()
{
    return m_alt;
}

/*!
 * @brief This function sets a value in member alt_ellipsoid
 * @param _alt_ellipsoid New value for member alt_ellipsoid
 */
void px4_msgs::msg::SensorGps::alt_ellipsoid(int32_t _alt_ellipsoid)
{
m_alt_ellipsoid = _alt_ellipsoid;
}

/*!
 * @brief This function returns the value of member alt_ellipsoid
 * @return Value of member alt_ellipsoid
 */
int32_t px4_msgs::msg::SensorGps::alt_ellipsoid() const
{
    return m_alt_ellipsoid;
}

/*!
 * @brief This function returns a reference to member alt_ellipsoid
 * @return Reference to member alt_ellipsoid
 */
int32_t& px4_msgs::msg::SensorGps::alt_ellipsoid()
{
    return m_alt_ellipsoid;
}

/*!
 * @brief This function sets a value in member s_variance_m_s
 * @param _s_variance_m_s New value for member s_variance_m_s
 */
void px4_msgs::msg::SensorGps::s_variance_m_s(float _s_variance_m_s)
{
m_s_variance_m_s = _s_variance_m_s;
}

/*!
 * @brief This function returns the value of member s_variance_m_s
 * @return Value of member s_variance_m_s
 */
float px4_msgs::msg::SensorGps::s_variance_m_s() const
{
    return m_s_variance_m_s;
}

/*!
 * @brief This function returns a reference to member s_variance_m_s
 * @return Reference to member s_variance_m_s
 */
float& px4_msgs::msg::SensorGps::s_variance_m_s()
{
    return m_s_variance_m_s;
}

/*!
 * @brief This function sets a value in member c_variance_rad
 * @param _c_variance_rad New value for member c_variance_rad
 */
void px4_msgs::msg::SensorGps::c_variance_rad(float _c_variance_rad)
{
m_c_variance_rad = _c_variance_rad;
}

/*!
 * @brief This function returns the value of member c_variance_rad
 * @return Value of member c_variance_rad
 */
float px4_msgs::msg::SensorGps::c_variance_rad() const
{
    return m_c_variance_rad;
}

/*!
 * @brief This function returns a reference to member c_variance_rad
 * @return Reference to member c_variance_rad
 */
float& px4_msgs::msg::SensorGps::c_variance_rad()
{
    return m_c_variance_rad;
}

/*!
 * @brief This function sets a value in member fix_type
 * @param _fix_type New value for member fix_type
 */
void px4_msgs::msg::SensorGps::fix_type(uint8_t _fix_type)
{
m_fix_type = _fix_type;
}

/*!
 * @brief This function returns the value of member fix_type
 * @return Value of member fix_type
 */
uint8_t px4_msgs::msg::SensorGps::fix_type() const
{
    return m_fix_type;
}

/*!
 * @brief This function returns a reference to member fix_type
 * @return Reference to member fix_type
 */
uint8_t& px4_msgs::msg::SensorGps::fix_type()
{
    return m_fix_type;
}

/*!
 * @brief This function sets a value in member eph
 * @param _eph New value for member eph
 */
void px4_msgs::msg::SensorGps::eph(float _eph)
{
m_eph = _eph;
}

/*!
 * @brief This function returns the value of member eph
 * @return Value of member eph
 */
float px4_msgs::msg::SensorGps::eph() const
{
    return m_eph;
}

/*!
 * @brief This function returns a reference to member eph
 * @return Reference to member eph
 */
float& px4_msgs::msg::SensorGps::eph()
{
    return m_eph;
}

/*!
 * @brief This function sets a value in member epv
 * @param _epv New value for member epv
 */
void px4_msgs::msg::SensorGps::epv(float _epv)
{
m_epv = _epv;
}

/*!
 * @brief This function returns the value of member epv
 * @return Value of member epv
 */
float px4_msgs::msg::SensorGps::epv() const
{
    return m_epv;
}

/*!
 * @brief This function returns a reference to member epv
 * @return Reference to member epv
 */
float& px4_msgs::msg::SensorGps::epv()
{
    return m_epv;
}

/*!
 * @brief This function sets a value in member hdop
 * @param _hdop New value for member hdop
 */
void px4_msgs::msg::SensorGps::hdop(float _hdop)
{
m_hdop = _hdop;
}

/*!
 * @brief This function returns the value of member hdop
 * @return Value of member hdop
 */
float px4_msgs::msg::SensorGps::hdop() const
{
    return m_hdop;
}

/*!
 * @brief This function returns a reference to member hdop
 * @return Reference to member hdop
 */
float& px4_msgs::msg::SensorGps::hdop()
{
    return m_hdop;
}

/*!
 * @brief This function sets a value in member vdop
 * @param _vdop New value for member vdop
 */
void px4_msgs::msg::SensorGps::vdop(float _vdop)
{
m_vdop = _vdop;
}

/*!
 * @brief This function returns the value of member vdop
 * @return Value of member vdop
 */
float px4_msgs::msg::SensorGps::vdop() const
{
    return m_vdop;
}

/*!
 * @brief This function returns a reference to member vdop
 * @return Reference to member vdop
 */
float& px4_msgs::msg::SensorGps::vdop()
{
    return m_vdop;
}

/*!
 * @brief This function sets a value in member noise_per_ms
 * @param _noise_per_ms New value for member noise_per_ms
 */
void px4_msgs::msg::SensorGps::noise_per_ms(int32_t _noise_per_ms)
{
m_noise_per_ms = _noise_per_ms;
}

/*!
 * @brief This function returns the value of member noise_per_ms
 * @return Value of member noise_per_ms
 */
int32_t px4_msgs::msg::SensorGps::noise_per_ms() const
{
    return m_noise_per_ms;
}

/*!
 * @brief This function returns a reference to member noise_per_ms
 * @return Reference to member noise_per_ms
 */
int32_t& px4_msgs::msg::SensorGps::noise_per_ms()
{
    return m_noise_per_ms;
}

/*!
 * @brief This function sets a value in member automatic_gain_control
 * @param _automatic_gain_control New value for member automatic_gain_control
 */
void px4_msgs::msg::SensorGps::automatic_gain_control(uint16_t _automatic_gain_control)
{
m_automatic_gain_control = _automatic_gain_control;
}

/*!
 * @brief This function returns the value of member automatic_gain_control
 * @return Value of member automatic_gain_control
 */
uint16_t px4_msgs::msg::SensorGps::automatic_gain_control() const
{
    return m_automatic_gain_control;
}

/*!
 * @brief This function returns a reference to member automatic_gain_control
 * @return Reference to member automatic_gain_control
 */
uint16_t& px4_msgs::msg::SensorGps::automatic_gain_control()
{
    return m_automatic_gain_control;
}

/*!
 * @brief This function sets a value in member jamming_indicator
 * @param _jamming_indicator New value for member jamming_indicator
 */
void px4_msgs::msg::SensorGps::jamming_indicator(int32_t _jamming_indicator)
{
m_jamming_indicator = _jamming_indicator;
}

/*!
 * @brief This function returns the value of member jamming_indicator
 * @return Value of member jamming_indicator
 */
int32_t px4_msgs::msg::SensorGps::jamming_indicator() const
{
    return m_jamming_indicator;
}

/*!
 * @brief This function returns a reference to member jamming_indicator
 * @return Reference to member jamming_indicator
 */
int32_t& px4_msgs::msg::SensorGps::jamming_indicator()
{
    return m_jamming_indicator;
}

/*!
 * @brief This function sets a value in member jamming_state
 * @param _jamming_state New value for member jamming_state
 */
void px4_msgs::msg::SensorGps::jamming_state(uint8_t _jamming_state)
{
m_jamming_state = _jamming_state;
}

/*!
 * @brief This function returns the value of member jamming_state
 * @return Value of member jamming_state
 */
uint8_t px4_msgs::msg::SensorGps::jamming_state() const
{
    return m_jamming_state;
}

/*!
 * @brief This function returns a reference to member jamming_state
 * @return Reference to member jamming_state
 */
uint8_t& px4_msgs::msg::SensorGps::jamming_state()
{
    return m_jamming_state;
}

/*!
 * @brief This function sets a value in member vel_m_s
 * @param _vel_m_s New value for member vel_m_s
 */
void px4_msgs::msg::SensorGps::vel_m_s(float _vel_m_s)
{
m_vel_m_s = _vel_m_s;
}

/*!
 * @brief This function returns the value of member vel_m_s
 * @return Value of member vel_m_s
 */
float px4_msgs::msg::SensorGps::vel_m_s() const
{
    return m_vel_m_s;
}

/*!
 * @brief This function returns a reference to member vel_m_s
 * @return Reference to member vel_m_s
 */
float& px4_msgs::msg::SensorGps::vel_m_s()
{
    return m_vel_m_s;
}

/*!
 * @brief This function sets a value in member vel_n_m_s
 * @param _vel_n_m_s New value for member vel_n_m_s
 */
void px4_msgs::msg::SensorGps::vel_n_m_s(float _vel_n_m_s)
{
m_vel_n_m_s = _vel_n_m_s;
}

/*!
 * @brief This function returns the value of member vel_n_m_s
 * @return Value of member vel_n_m_s
 */
float px4_msgs::msg::SensorGps::vel_n_m_s() const
{
    return m_vel_n_m_s;
}

/*!
 * @brief This function returns a reference to member vel_n_m_s
 * @return Reference to member vel_n_m_s
 */
float& px4_msgs::msg::SensorGps::vel_n_m_s()
{
    return m_vel_n_m_s;
}

/*!
 * @brief This function sets a value in member vel_e_m_s
 * @param _vel_e_m_s New value for member vel_e_m_s
 */
void px4_msgs::msg::SensorGps::vel_e_m_s(float _vel_e_m_s)
{
m_vel_e_m_s = _vel_e_m_s;
}

/*!
 * @brief This function returns the value of member vel_e_m_s
 * @return Value of member vel_e_m_s
 */
float px4_msgs::msg::SensorGps::vel_e_m_s() const
{
    return m_vel_e_m_s;
}

/*!
 * @brief This function returns a reference to member vel_e_m_s
 * @return Reference to member vel_e_m_s
 */
float& px4_msgs::msg::SensorGps::vel_e_m_s()
{
    return m_vel_e_m_s;
}

/*!
 * @brief This function sets a value in member vel_d_m_s
 * @param _vel_d_m_s New value for member vel_d_m_s
 */
void px4_msgs::msg::SensorGps::vel_d_m_s(float _vel_d_m_s)
{
m_vel_d_m_s = _vel_d_m_s;
}

/*!
 * @brief This function returns the value of member vel_d_m_s
 * @return Value of member vel_d_m_s
 */
float px4_msgs::msg::SensorGps::vel_d_m_s() const
{
    return m_vel_d_m_s;
}

/*!
 * @brief This function returns a reference to member vel_d_m_s
 * @return Reference to member vel_d_m_s
 */
float& px4_msgs::msg::SensorGps::vel_d_m_s()
{
    return m_vel_d_m_s;
}

/*!
 * @brief This function sets a value in member cog_rad
 * @param _cog_rad New value for member cog_rad
 */
void px4_msgs::msg::SensorGps::cog_rad(float _cog_rad)
{
m_cog_rad = _cog_rad;
}

/*!
 * @brief This function returns the value of member cog_rad
 * @return Value of member cog_rad
 */
float px4_msgs::msg::SensorGps::cog_rad() const
{
    return m_cog_rad;
}

/*!
 * @brief This function returns a reference to member cog_rad
 * @return Reference to member cog_rad
 */
float& px4_msgs::msg::SensorGps::cog_rad()
{
    return m_cog_rad;
}

/*!
 * @brief This function sets a value in member vel_ned_valid
 * @param _vel_ned_valid New value for member vel_ned_valid
 */
void px4_msgs::msg::SensorGps::vel_ned_valid(bool _vel_ned_valid)
{
m_vel_ned_valid = _vel_ned_valid;
}

/*!
 * @brief This function returns the value of member vel_ned_valid
 * @return Value of member vel_ned_valid
 */
bool px4_msgs::msg::SensorGps::vel_ned_valid() const
{
    return m_vel_ned_valid;
}

/*!
 * @brief This function returns a reference to member vel_ned_valid
 * @return Reference to member vel_ned_valid
 */
bool& px4_msgs::msg::SensorGps::vel_ned_valid()
{
    return m_vel_ned_valid;
}

/*!
 * @brief This function sets a value in member timestamp_time_relative
 * @param _timestamp_time_relative New value for member timestamp_time_relative
 */
void px4_msgs::msg::SensorGps::timestamp_time_relative(int32_t _timestamp_time_relative)
{
m_timestamp_time_relative = _timestamp_time_relative;
}

/*!
 * @brief This function returns the value of member timestamp_time_relative
 * @return Value of member timestamp_time_relative
 */
int32_t px4_msgs::msg::SensorGps::timestamp_time_relative() const
{
    return m_timestamp_time_relative;
}

/*!
 * @brief This function returns a reference to member timestamp_time_relative
 * @return Reference to member timestamp_time_relative
 */
int32_t& px4_msgs::msg::SensorGps::timestamp_time_relative()
{
    return m_timestamp_time_relative;
}

/*!
 * @brief This function sets a value in member time_utc_usec
 * @param _time_utc_usec New value for member time_utc_usec
 */
void px4_msgs::msg::SensorGps::time_utc_usec(uint64_t _time_utc_usec)
{
m_time_utc_usec = _time_utc_usec;
}

/*!
 * @brief This function returns the value of member time_utc_usec
 * @return Value of member time_utc_usec
 */
uint64_t px4_msgs::msg::SensorGps::time_utc_usec() const
{
    return m_time_utc_usec;
}

/*!
 * @brief This function returns a reference to member time_utc_usec
 * @return Reference to member time_utc_usec
 */
uint64_t& px4_msgs::msg::SensorGps::time_utc_usec()
{
    return m_time_utc_usec;
}

/*!
 * @brief This function sets a value in member satellites_used
 * @param _satellites_used New value for member satellites_used
 */
void px4_msgs::msg::SensorGps::satellites_used(uint8_t _satellites_used)
{
m_satellites_used = _satellites_used;
}

/*!
 * @brief This function returns the value of member satellites_used
 * @return Value of member satellites_used
 */
uint8_t px4_msgs::msg::SensorGps::satellites_used() const
{
    return m_satellites_used;
}

/*!
 * @brief This function returns a reference to member satellites_used
 * @return Reference to member satellites_used
 */
uint8_t& px4_msgs::msg::SensorGps::satellites_used()
{
    return m_satellites_used;
}

/*!
 * @brief This function sets a value in member heading
 * @param _heading New value for member heading
 */
void px4_msgs::msg::SensorGps::heading(float _heading)
{
m_heading = _heading;
}

/*!
 * @brief This function returns the value of member heading
 * @return Value of member heading
 */
float px4_msgs::msg::SensorGps::heading() const
{
    return m_heading;
}

/*!
 * @brief This function returns a reference to member heading
 * @return Reference to member heading
 */
float& px4_msgs::msg::SensorGps::heading()
{
    return m_heading;
}

/*!
 * @brief This function sets a value in member heading_offset
 * @param _heading_offset New value for member heading_offset
 */
void px4_msgs::msg::SensorGps::heading_offset(float _heading_offset)
{
m_heading_offset = _heading_offset;
}

/*!
 * @brief This function returns the value of member heading_offset
 * @return Value of member heading_offset
 */
float px4_msgs::msg::SensorGps::heading_offset() const
{
    return m_heading_offset;
}

/*!
 * @brief This function returns a reference to member heading_offset
 * @return Reference to member heading_offset
 */
float& px4_msgs::msg::SensorGps::heading_offset()
{
    return m_heading_offset;
}

/*!
 * @brief This function sets a value in member heading_accuracy
 * @param _heading_accuracy New value for member heading_accuracy
 */
void px4_msgs::msg::SensorGps::heading_accuracy(float _heading_accuracy)
{
m_heading_accuracy = _heading_accuracy;
}

/*!
 * @brief This function returns the value of member heading_accuracy
 * @return Value of member heading_accuracy
 */
float px4_msgs::msg::SensorGps::heading_accuracy() const
{
    return m_heading_accuracy;
}

/*!
 * @brief This function returns a reference to member heading_accuracy
 * @return Reference to member heading_accuracy
 */
float& px4_msgs::msg::SensorGps::heading_accuracy()
{
    return m_heading_accuracy;
}


size_t px4_msgs::msg::SensorGps::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
    size_t current_align = current_alignment;
































    return current_align;
}

bool px4_msgs::msg::SensorGps::isKeyDefined()
{
   return false;
}

void px4_msgs::msg::SensorGps::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
    (void) scdr;
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
}


