//
//  earth.cpp
//  openGL_sample
//
//  Created by Nozomi on 2019/01/17.
//  Copyright © 2019 Nozomi. All rights reserved.
//

#include "earth.hpp"

//void earth::DisplaySphere(double R, GLuint texture, VERTICES VERTEX[]){
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
//void earth::CreateSphere(double R, double H, double K, double Z, VERTICES VERTEX[]) {
//    int n;
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
//void earth::display(VERTICES VERTEX[]) {
//    glClearDepth(1);
//    glClearColor(0.0, 0.0, 0.0, 1.0);
//    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//    glLoadIdentity();
//    glTranslatef(0, 0, -10);
//    glRotatef(angle, 0, 1, 0);
//    DisplaySphere(5, texture[0], VERTEX);
//    glutSwapBuffers();
//    angle++;
//    sleep(10);
//}
