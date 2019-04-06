#ifndef ROTATIONS
#define ROTATIONS

#include <Eigen/Core>

namespace tools
{
  Eigen::Vector3d Quaternion2Euler(const Eigen::Vector4d& e);
  Eigen::Vector4d Euler2Quaternion(const Eigen::Vector3d& euler);
  Eigen::Matrix3d Quaternion2Rotation(const Eigen::Vector4d& e);
  Eigen::Matrix3d Euler2Rotation(const Eigen::Vector3d& e);
}
#endif
