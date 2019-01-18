#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H

#include <QWidget>
#include <QOpenGLWidget>

class MyGLWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MyGLWidget(QWidget *parent = nullptr);
protected:
    virtual void initializeGL();
    virtual void resizeGL(int w, int h);
    virtual void paintGL();

signals:

public slots:
};

#endif // MYGLWIDGET_H
