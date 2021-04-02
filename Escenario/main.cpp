#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>
#include <stdlib.h>
#include "Prisma.h"
#include "Piramide.h"
#include "Casa.h"
#include "Camioneta.h"
#include "Carro.h"
#include "Arbol.h"
#include "Cilindro.h"
#include "Sol.h"
GLfloat anguloCuboX = 0.0f;
GLfloat anguloCuboY = 0.0f;
GLfloat anguloEsfera = 0.0f;

GLint ancho, alto;
int hazPerspectiva = 0;
Operador opera;
Prisma cubo1;
Piramide piramide1;
Casa casa_base(&opera);
Camioneta camioneta1(&opera);
Carro carro1(&opera);
Arbol arb(&opera);
Cilindro cilin(&opera);
Sol sol(&opera);


void reshape(int width, int height)
{
    glViewport(0, 0, width, height); //Puerto de visualizacion
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if(hazPerspectiva)
      gluPerspective(60.0f, (GLfloat)width/(GLfloat)height, 1.0f, 20.0f);
    else
      glOrtho(-600, 600, -325, 325, -300, 300);

    glMatrixMode(GL_MODELVIEW);
    glPointSize(2);
    glLoadIdentity();
    ancho = width;
    alto = height;
}

void drawCube(void)
{
/*
    glLoadIdentity();
    anguloCuboX+=0.05f;
    glRotatef(15, 1.0f, 0.0f, 0.0f);
    //glRotatef(anguloCuboX, 0.0f, 0.0f, 1.0f);
    cilin.setCentro(100,-100,1);
    cilin.setRadio(40);
    cilin.setProfundidad(40);
    cilin.Draw();*/
    /*cilin.setCentro(0,0,0);
    cilin.setRadio(10);
    cilin.setProfundidad(10);
    anguloCuboX+=0.1f;*/
    //opera.pop();
    //opera.push();
    //opera.escalar(0.3,0.3,0.3);
    //opera.rotacion(anguloCuboX,1,0,0);
    //anguloCuboY+=0.1f;
    //anguloEsfera+=0.2f;
    //anguloCuboX+=0.05f;
    //anguloCuboY+=0.05f;
    //anguloEsfera+=0.1f;

}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

   glLoadIdentity();

    /*glTranslatef(0.0f, 0.0f, -5.0f);
    glRotatef(anguloCuboX, 1.0f, 0.0f, 0.0f);
    glRotatef(anguloCuboY, 0.0f, 1.0f, 0.0f);*/
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
