#include "myglwidget.h"

MyGLWidget::MyGLWidget(QWidget *parent) : QWidget(parent)
{

}

void MyGLWidget::initializeGL() {
    glClearColor(0.1, 0.1, 0.1, 1);
}

void MyGLWidget::paintGL() {
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex3f(-0.5, -0.5, 0);
    glColor3f(0,1,0);
    glVertex3f( 0.5,-0.5,  0);
    glColor3f(0,0,1);
    glVertex3f( 0, 0.5, 0);
    glEnd();
}

void MyGLWidget::resizeGL(int w, int h) {
}
