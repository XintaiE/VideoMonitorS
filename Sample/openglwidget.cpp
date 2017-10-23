#include "openglwidget.h"
#include <vector>
#include <math.h>

OpenGlWidget::OpenGlWidget()
{
    rTri = 0.0;
    startTimer(100);
}

void OpenGlWidget :: initializeGL()
{
    glClearColor(0.0f,0.0f,0.0,0.0f);
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
    glShadeModel(GL_SMOOTH);

    matrix.perspective(45.0f,(GLfloat)mWindowWidth/(GLfloat)mWindowHeight,0.1f,100.0f);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_TEXTURE_2D);
    m_chanche1 = new cMeshModel(QString("taji.3DS"));
}

void OpenGlWidget :: paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);   
    glLoadIdentity();

    QMatrix4x4 ccMatrix1 = matrix;
    ccMatrix1.translate(QVector3D(0.0, -20.0, -50.0f));
    ccMatrix1.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix1);
#if 0
    QMatrix4x4 ccMatrix2 = matrix;
    ccMatrix2.translate(QVector3D(-25.0, -20.0, -50.0f));
    ccMatrix2.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix2);

    QMatrix4x4 ccMatrix3 = matrix;
    ccMatrix3.translate(QVector3D(-20.0, -20.0, -50.0f));
    ccMatrix3.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix3);

    QMatrix4x4 ccMatrix4 = matrix;
    ccMatrix4.translate(QVector3D(-15.0, -20.0, -50.0f));
    ccMatrix4.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix4);

    QMatrix4x4 ccMatrix5 = matrix;
    ccMatrix5.translate(QVector3D(-10.0, -20.0, -50.0f));
    ccMatrix5.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix5);

    QMatrix4x4 ccMatrix6 = matrix;
    ccMatrix6.translate(QVector3D(-5.0, -20.0, -50.0f));
    ccMatrix6.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix6);

    QMatrix4x4 ccMatrix7 = matrix;
    ccMatrix7.translate(QVector3D(0.0, -20.0, -50.0f));
    ccMatrix7.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix7);

    QMatrix4x4 ccMatrix8 = matrix;
    ccMatrix8.translate(QVector3D(5.0, -20.0, -50.0f));
    ccMatrix8.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix8);

    QMatrix4x4 ccMatrix9 = matrix;
    ccMatrix9.translate(QVector3D(10.0, -20.0, -50.0f));
    ccMatrix9.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix9);

    QMatrix4x4 ccMatrix10 = matrix;
    ccMatrix10.translate(QVector3D(15.0, -20.0, -50.0f));
    ccMatrix10.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix10);

    QMatrix4x4 ccMatrix11 = matrix;
    ccMatrix11.translate(QVector3D(20.0, -20.0, -50.0f));
    ccMatrix11.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix11);

    QMatrix4x4 ccMatrix12 = matrix;
    ccMatrix12.translate(QVector3D(25.0, -20.0, -50.0f));
    ccMatrix12.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix12);

    QMatrix4x4 ccMatrix13 = matrix;
    ccMatrix13.translate(QVector3D(30.0, -20.0, -50.0f));
    ccMatrix13.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix13);

    QMatrix4x4 ccMatrix14 = matrix;
    ccMatrix14.translate(QVector3D(-35.0, -20.0, -100.0f));
    ccMatrix14.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix14);

    QMatrix4x4 ccMatrix15 = matrix;
    ccMatrix15.translate(QVector3D(-25.0, -20.0, -100.0f));
    ccMatrix15.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix15);

    QMatrix4x4 ccMatrix16 = matrix;
    ccMatrix16.translate(QVector3D(-20.0, -20.0, -100.0f));
    ccMatrix16.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix16);

    QMatrix4x4 ccMatrix17 = matrix;
    ccMatrix17.translate(QVector3D(-15.0, -20.0, -100.0f));
    ccMatrix17.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix17);

    QMatrix4x4 ccMatrix18 = matrix;
    ccMatrix18.translate(QVector3D(-10.0, -20.0, -100.0f));
    ccMatrix18.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix18);


    QMatrix4x4 ccMatrix19 = matrix;
    ccMatrix19.translate(QVector3D(-5.0, -20.0, -100.0f));
    ccMatrix19.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix19);

    QMatrix4x4 ccMatrix20 = matrix;
    ccMatrix20.translate(QVector3D(0.0, -20.0, -100.0f));
    ccMatrix20.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix20);

    QMatrix4x4 ccMatrix21 = matrix;
    ccMatrix21.translate(QVector3D(5.0, -20.0, -100.0f));
    ccMatrix21.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix21);

    QMatrix4x4 ccMatrix22 = matrix;
    ccMatrix22.translate(QVector3D(10.0, -20.0, -100.0f));
    ccMatrix22.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix22);

    QMatrix4x4 ccMatrix23 = matrix;
    ccMatrix23.translate(QVector3D(15.0, -20.0, -100.0f));
    ccMatrix23.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix23);


    QMatrix4x4 ccMatrix24 = matrix;
    ccMatrix24.translate(QVector3D(20.0, -20.0, -100.0f));
    ccMatrix24.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix24);

    QMatrix4x4 ccMatrix25= matrix;
    ccMatrix25.translate(QVector3D(25.0, -20.0, -100.0f));
    ccMatrix25.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix25);

    QMatrix4x4 ccMatrix26 = matrix;
    ccMatrix26.translate(QVector3D(30.0, -20.0, -100.0f));
    ccMatrix26.rotate(rTri,QVector3D(0,1,0));
    m_chanche1->Render(ccMatrix26);
#endif

    glLoadIdentity();
}

void OpenGlWidget :: resizeGL(int w, int h)
{
    mWindowWidth = w;
    mWindowHeight = (h==0)?1:h;
    glViewport(0, 0, (GLint)mWindowWidth, (GLint)mWindowHeight);

    glMatrixMode(GL_PROJECTION);//选择投影矩阵
    glLoadIdentity();//重置投影矩阵
    glLoadIdentity();//重置模型观察矩阵
}

#if 0
void OpenGlWidget :: mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton){
        rTri += 15;
    }else if(e->button() == Qt::RightButton){
        rTri -= 15;
    }
    updateGL();
}
#endif

void OpenGlWidget :: timerEvent(QTimerEvent *event)
{
    rTri += 15;
    updateGL();
}
