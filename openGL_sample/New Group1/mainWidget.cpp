//
//  mainWidget.cpp
//  openGL_sample
//
//  Created by Nozomi on 2019/01/17.
//  Copyright © 2019 Nozomi. All rights reserved.
//

#include "mainWidget.hpp"


//void mainWidget::drawCallback()
//{
//    widget -> display();
//}
//void mainWidget::reshapeCallback(int w, int h)
//{
//    widget -> reshape(w, h);
//}
//
//void mainWidget::display() {
//    glClearDepth(1);
//    glClearColor(0.0, 0.0, 0.0, 1.0);
//    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//    glLoadIdentity();
//    glTranslatef(0, 0, -10);
//    glRotatef(angle, 0, 1, 0);
//    widget -> DisplaySphere(5, texture[0], VERTEX);
//    glutSwapBuffers();
//    angle++;
//    sleep(10);
//}
//
//void mainWidget::reshape(int w, int h) {
//    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    gluPerspective(60, (GLfloat)w / (GLfloat)h, 0.1, 100.0);
//    glMatrixMode(GL_MODELVIEW);
//}
//
//void mainWidget::CreateSphere(double R, double H, double K, double Z, VERTICES VERTEX[]) {
//    double a;
//    double b;
//    n = 0;
//    for (b = 0; b <= 90 - space; b += space){
//        for (a = 0; a <= 360 - space; a += space){
//            VERTEX[n].X = R * sin((a) / 180 * PI) * sin((b) / 180 * PI) - H;
//            VERTEX[n].Y = R * cos((a) / 180 * PI) * sin((b) / 180 * PI) + K;
//            VERTEX[n].Z = R * cos((b) / 180 * PI) - Z;
//            VERTEX[n].V = (2 * b) / 360;
//            VERTEX[n].U = (a) / 360;
//            n++;
//            VERTEX[n].X = R * sin((a) / 180 * PI) * sin((b + space) / 180 * PI) - H;
//            VERTEX[n].Y = R * cos((a) / 180 * PI) * sin((b + space) / 180 * PI) + K;
//            VERTEX[n].Z = R * cos((b + space) / 180 * PI) - Z;
//            VERTEX[n].V = (2 * (b + space)) / 360;
//            VERTEX[n].U = (a) / 360;
//            n++;
//            VERTEX[n].X = R * sin((a + space) / 180 * PI) * sin((b) / 180 * PI) - H;
//            VERTEX[n].Y = R * cos((a + space) / 180 * PI) * sin((b) / 180 * PI) + K;
//            VERTEX[n].Z = R * cos((b) / 180 * PI) - Z;
//            VERTEX[n].V = (2 * b) / 360;
//            VERTEX[n].U = (a + space) / 360;
//            n++;
//            VERTEX[n].X = R * sin((a + space) / 180 * PI) * sin((b + space) / 180 * PI) - H;
//            VERTEX[n].Y = R * cos((a + space) / 180 * PI) * sin((b + space) / 180 * PI) + K;
//            VERTEX[n].Z = R * cos((b + space) / 180 * PI) - Z;
//            VERTEX[n].V = (2 * (b + space)) / 360;
//            VERTEX[n].U = (a + space) / 360;
//            n++;
//        }
//    }
//}
//
//
//void mainWidget::DisplaySphere(double R, GLuint texture, VERTICES VERTEX[]){
//    int b;
//    glScalef(0.0125 * R, 0.0125 * R, 0.0125 * R);
//    glRotatef(90, 1, 0, 0);
//    glBindTexture(GL_TEXTURE_2D, texture);
//    glBegin(GL_TRIANGLE_STRIP);
//    for (b = 0; b <= VertexCount; b++){
//        glTexCoord2f(VERTEX[b].U, VERTEX[b].V);
//        glVertex3f(VERTEX[b].X, VERTEX[b].Y, -VERTEX[b].Z);
//    }
//    for (b = 0; b <= VertexCount; b++){
//        glTexCoord2f(VERTEX[b].U, -VERTEX[b].V);
//        glVertex3f(VERTEX[b].X, VERTEX[b].Y, VERTEX[b].Z);
//    }
//    glEnd();
//}
//
void mainWidget::init(int argc, char **argv)
{
//    angle = 0;
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
//    glutInitWindowSize(450, 450);
//    glutInitWindowPosition(100, 100);
//    glutCreateWindow("Hello, OpenGL World!");

//    glEnable(GL_DEPTH_TEST);
//    glEnable(GL_TEXTURE_2D);
//    glDepthFunc(GL_LEQUAL);
//    glCullFace(GL_BACK);
//    glFrontFace(GL_CCW);
//    glEnable(GL_CULL_FACE);

    //    texture[0] = LoadTextureRAW("earth.raw");
//    widget -> CreateSphere(70, 0, 0, 0, VERTEX);
//    setupDrawCallback();
//    glutMainLoop();
}
