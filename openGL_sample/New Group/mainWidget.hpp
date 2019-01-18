//
//  mainWidget.hpp
//  openGL_sample
//
//  Created by Nozomi on 2019/01/17.
//  Copyright © 2019 Nozomi. All rights reserved.
//

#ifndef mainWidget_hpp
#define mainWidget_hpp

#include <stdio.h>
#include <openGL/gl.h>
#include <GLUT/glut.h>
#include <unistd.h>
#include <math.h>
//#include <earth.hpp>

#define space 10
#define VertexCount  ((90 / space) * (360 / space) * 4)
#define PI (3.14159265)


//typedef struct
//{
//    int X;
//    int Y;
//    int Z;
//    double U;
//    double V;
//}VERTICES;

//extern VERTICES VERTEX[VertexCount];
//extern double angle;
//extern GLuint texture[1];

class mainWidget
{
public:
    static mainWidget* widget;
    void init(int argc, char **argv);
//    void reshape(int w, int h);
//    void display();
//    void CreateSphere(double R, double H, double K, double Z, VERTICES VERTEX[]);
//    void DisplaySphere(double R, GLuint texture, VERTICES VERTEX[]);
//    void setupDrawCallback()
//    {
//        widget = this;
//        ::glutDisplayFunc(mainWidget::drawCallback);
//        ::glutIdleFunc(mainWidget::drawCallback);
//        ::glutReshapeFunc(mainWidget::reshapeCallback);
//    }
//    static void drawCallback();
//    static void reshapeCallback(int w, int h);
};

#endif /* mainWidget_hpp */
