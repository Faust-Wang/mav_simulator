#include "dynamics/mav_dynamics.h"

int main(int argc, char** argv)
{
  ros::init(argc, argv, "mav_dynamics");
  ros::NodeHandle nh;

  dyn::Dynamics mav;

  ros::spin();
  return 0;
}