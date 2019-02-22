#pragma once

#include "ros/ros.h"
#include "rplidar_driver_serial.h"
#include <i2c_service/I2CWriteByte.h>

namespace rp { namespace standalone{ namespace rplidar {

class RPlidarDriverUART : public RPlidarDriverSerial
{
public:

    RPlidarDriverUART();
    virtual u_result setMotorPWM(_u16 pwm);
    virtual u_result checkMotorCtrlSupport(bool & support, _u32 timeout = DEFAULT_TIMEOUT);

private:
	ros::NodeHandle nh_;
	ros::ServiceClient i2c_client_;
};

}}};