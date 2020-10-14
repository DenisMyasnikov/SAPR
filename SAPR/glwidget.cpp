include "glwidget.h"

GLWidget::GLWidget(QWidget *parent): QGLWidget(parent)
{

}

void GLWidget::initializeGL()
{
   glClearColor(1,1,1,1);
   glEnable(GL_DEPTH_TEST);
   glEnable(GL_LIGHT0);
   glEnable(GL_LIGHTING);
   glEnable(GL_COLOR_MATERIAL);
}

void GLWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT);

}

void GLWidget::resizeGL(int w, int h)
{

}
