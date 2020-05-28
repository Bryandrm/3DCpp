// Copyright 2020 - Kevin Rivera @kevinrev26


#include <GL/glew.h>
#include <GL/freeglut.h>
#include <iostream>
#define WINDOW_TITLE_PREFIX "3DCpp"

// Drawing routine.
void drawScene(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0, 0.0, 0.0);

    // Draw a polygon with specified vertices.
    glBegin(GL_POLYGON);
    // glVertex3f correspond to a point (x,y,z) in world space
    glVertex3f(20.0, 20.0, 0.0);
    glVertex3f(80.0, 20.0, 0.0);
    glVertex3f(80.0, 80.0, 0.0);
    glVertex3f(20.0, 80.0, 0.0);
    glEnd();

    glFlush();
}

// OpenGL window reshape routine.
void resize(int w, int h) {
    glViewport(0, 0, w, h);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 100.0, 0.0, 100.0, -1.0, 1.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void keyInput(unsigned char key, int x, int y) {
    switch (key) {
    case 27:
        exit(0);
        break;
    default:
        break;
    }
}

void setup(void) {
    glClearColor(1.0, 1.0, 1.0, 0.0);
}

int main(int argc, char **argv) {
    // Initialize
    glutInit(&argc, argv);
    glutInitContextVersion(4, 3);
    glutInitContextProfile(GLUT_COMPATIBILITY_PROFILE);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("square.cpp");
    glutDisplayFunc(drawScene);
    glutReshapeFunc(resize);
    glutKeyboardFunc(keyInput);
    glewExperimental = GL_TRUE;
    glewInit();
    setup();

    glutMainLoop();
    return 0;
}
