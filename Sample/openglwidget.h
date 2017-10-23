/*使用openglwidget加载3d模型*/
#ifndef OPENGLWIDGET_H
#define OPENGLWIDGET_H

#include <QGLWidget>
#include <QPoint>
#include <QMouseEvent>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <QTimerEvent>
#include "meshModel.h"

extern int mWindowWidth;
extern int mWindowHeight;

class OpenGlWidget : public QGLWidget
{
public:
    OpenGlWidget();
protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();

 // void mousePressEvent(QMouseEvent *e);
    void timerEvent(QTimerEvent *event);
private:
    QMatrix4x4 matrix;
    cMeshModel *m_chanche1;
    float rTri;
};

#endif // OPENGLWIDGET_H
