// maintain widgets

#include <stdio.h>
#include <math.h>
#include <iostream>
#include <openGL/gl.h>
#include <GLUT/glut.h>
#include <iostream>
using namespace std;

#include "mainWidget.hpp"

////GLuint LoadTextureRAW(const char * filename);

int main(int argc, char **argv) {
    mainWidget::widget -> init(argc, argv);
    return 0;
}

//GLuint LoadTextureRAW(const char * filename)
//{
//    GLuint texture;
//    int width, height;
//    unsigned char * data;
//    FILE * file;
//    fopen( filename, "rb");
//    if (file == NULL) return 0;
//    width = 1024;
//    height = 512;
//    data = (unsigned char *)malloc(width * height * 3);
//    fread(data, width * height * 3, 1, file);
//    fclose(file);
//    glGenTextures(1, &texture);
//    glBindTexture(GL_TEXTURE_2D, texture);
//    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
//    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_NEAREST);
//    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//    gluBuild2DMipmaps(GL_TEXTURE_2D, 3, width, height, GL_RGB, GL_UNSIGNED_BYTE, data);
//    free(data);
//    return texture;
//}
