#include <thread>
#include "DASCRobots.hpp"


int main(int argc, char* argv[]) {
	std::cout << "Starting offboard control node..." << std::endl;
	setvbuf(stdout, NULL, _IONBF, BUFSIZ);
	rclcpp::init(argc, argv);

    auto rover = std::make_shared<DASCRobot>("drone1", 1);
    
    rover->init();
    
    rclcpp::executors::MultiThreadedExecutor server_exec;
    server_exec.add_node(rover);
    
    auto server_spin_exec = [&server_exec]() {
        server_exec.spin();
    };
    std::thread server_exec_thread(server_spin_exec);
    std::cout << "Node init" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    std::cout << "Node start" << std::endl;

    rover->setCmdMode(DASCRobot::ControlMode::kVelocityMode);
   
    for (int i = 0; i < 100; i++) {
	rover->cmdWorldVelocity(0, 0, 0.0, 0, 0.0);
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
    
    rover->cmdOffboardMode();
    rover->useExternalController(true);
    rover->arm();
    
    std::cout << "Arm" << std::endl;
    std::cout << "in loop" << std::endl;

    auto start = rover->get_current_timestamp_us();

    while(rclcpp::ok()) {

	std::array<double, 3> des_pos {0.0, 0.0, 0.0};

	//rover->cmdWorldPosition(0,0,0.5,0,0);
	auto now = rover->get_current_timestamp_us();

        auto elapsed = now - start;

	if (elapsed <= 10000*1000) {
		des_pos[2] = 0.5;
	}
	else if (elapsed <= 15000*1000) {
		des_pos[2] = 0.0;
	}
	else{
		break;
	}

	// feedback control
	double kp = 2.0;
        std::array<double, 3> current_pos = rover->getWorldPosition();
	std::array<double, 3> des_vel { 0,0,0};
	
	//std::cout << "current_pos: ";
	for (int i=0; i < 3 ; i++ ){
		des_vel[i] = - kp * (current_pos[i] - des_pos[i]);
		//std::cout << current_pos[i] << " ";
	}
	//std::cout << "\n";

	// send the command
        rover->cmdWorldVelocity(des_vel[0], des_vel[1], des_vel[2], 0, 0);
        std::cout << "Elapsed " << elapsed << "; CMD: " << des_pos[2] << std::endl;

        rover->useExternalController(true);
	std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }

    // disarm
    std::cout << "before DISARM" << std::endl;
    rover->disarm();
    std::cout << "after disarm" << std::endl;


    server_exec_thread.join();
    std::cout << "after .join() " << std::endl;

    rclcpp::shutdown();
    std::cout << "after shutdown" << std::endl;

    return 0;
}
