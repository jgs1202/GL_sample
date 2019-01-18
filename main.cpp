#include "mainwindow.h"
#include "myglwidget.h"
#include <QApplication>
#include <QSurfaceFormat>

int main(int argc, char *argv[])
{

    QSurfaceFormat fmt;
    fmt.setVersion(4,1);//versionを指定
    fmt.setProfile(QSurfaceFormat::CoreProfile);//coreProfileを使う
    QSurfaceFormat::setDefaultFormat(fmt);//以上の設定を適応



    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    MyGLWidget widget;
    widget.show();

    return a.exec();
}
