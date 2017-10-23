#ifndef CAMERA_H
#define CAMERA_H
#include <QtCore/qvector.h>
#include <eigen3/Eigen/Dense>
#include <eigen3/Eigen/LU>
#include <eigen3/Eigen/Core>
#include <GL/glu.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>

using namespace Eigen;
class Camera
{
public:
    Camera();
    Camera(const Vector3d &pos, const Vector3d &target, const Vector3d &up);
    ~Camera();
    void setModelViewMatrix();//加载当前mv矩阵
    void setShape(float viewAngle, float aspect, float Near, float far);//设置摄像机的视角
    void slide(float du, float dv, float dn);
   //n,v,u轴的旋转
    void roll(float angle);
    void yaw(float angle);
    void pitch(float angle);
    float getDist();
private:
    Vector3d m_pos;
    Vector3d m_target;
    Vector3d m_up;
    Vector3d u, v, n;//n:相机注视的向量；v:相机上方向的向量；u:相机右方向的向量
};

#endif // CAMERA_H
