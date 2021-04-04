#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include "Escenario.h"

GLfloat anguloCuboX = 0.0f;
GLfloat anguloCuboY = 0.0f;
GLfloat anguloEsfera = 0.0f;

GLint ancho, alto;
int hazPerspectiva = 0;

Escenario esc;

void reshape(int width, int height)
{
    glViewport(0, 0, width, height); //Puerto de visualizacion
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if(hazPerspectiva)
      gluPerspective(60.0f, (GLfloat)width/(GLfloat)height, 1.0f, 20.0f);
    else
      glOrtho(-600, 600, -325, 325, -1000, 1000);

    glMatrixMode(GL_MODELVIEW);
    glPointSize(2);
    glLoadIdentity();
    ancho = width;
    alto = height;
}

void drawCube(void)
{
    esc.draw();
    esc.update();

    glRotatef(anguloCuboX, 0.0f, 0.0f, 1.0f);

    anguloCuboX+=0.025f;
    anguloCuboY+=0.25f;
    anguloEsfera+=0.5f;
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

   glLoadIdentity();

    glTranslatef(0.0f, 0.0f, -5.0f);
    glRotatef(anguloCuboX, 1.0f, 0.0f, 0.0f);
    glRotatef(anguloCuboY, 0.0f, 1.0f, 0.0f);
    drawCube();

    glutSwapBuffers();
}

void init()
{
   glClearColor(0,0,0,0);
   glEnable(GL_DEPTH_TEST);
   ancho = 600;
   alto = 600;
}

void idle()
{
     display();
 }

void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'p':
    case 'P':
      hazPerspectiva=1;
      reshape(ancho,alto);
      break;

    case 'o':
    case 'O':
      hazPerspectiva=0;
      reshape(ancho,alto);
      break;

    case 27:   // escape
      exit(0);
      break;
    }
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(10, 10);
    glutInitWindowSize(1200,650);
    glutCreateWindow("F I G U R A S");
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutIdleFunc(idle);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
