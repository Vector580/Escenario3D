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
#include "Nube.h"
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
Nube nub(&opera);


void reshape(int width, int height)
{
    glViewport(0, 0, width, height); //Puerto de visualizacion
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if(hazPerspectiva)
      gluPerspective(60.0f, (GLfloat)width/(GLfloat)height, 1.0f, 20.0f);
    else
      glOrtho(-600, 600, -325, 325, -650, 650);

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

    anguloCuboX+=0.1f;
    opera.LoadIdenty();
    opera.push();

    opera.rotacion(anguloCuboX,1,0,0);
    opera.escalar(15,15,15);
    opera.trasladar(-20,10,0);
    camioneta1.Draw(1);
    opera.pop();
    opera.push();
    //opera.escalar(0.3,0.3,0.3);
    opera.rotacion(anguloCuboX,1,0,0);
    sol.Draw();
    cilin.Draw();
    opera.pop();
    opera.push();
    opera.escalar(50,50,50);
    casa_base.Draw(3);
    opera.pop();*/

    //anguloCuboY+=0.1f;
    //anguloEsfera+=0.2f;
    //camioneta1.Draw(1);
    //carro1.Draw(2);
    glRotatef(anguloCuboX, 0.0f, 0.0f, 1.0f);

    glLineWidth(2);
    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(6,0,-5);//
    casa_base.Draw(1);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(3.5,0,-8);//
    casa_base.Draw(2);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(3,0,-6);//
    casa_base.Draw(3);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(1,0,-13);//
    casa_base.Draw(4);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(0,0,-7);//
    casa_base.Draw(5);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(-2,0,-12);//
    casa_base.Draw(1);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(-3.5,0,-7);//
    casa_base.Draw(2);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(-6.5,0,-5.5);//
    casa_base.Draw(3);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(-7,0,-8.5);//
    casa_base.Draw(4);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(-10,0,-13);//
    casa_base.Draw(5);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(-10,0,-9);//
    casa_base.Draw(1);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(-14,0,-13);//
    casa_base.Draw(2);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(-12.5,0,-7);//
    casa_base.Draw(3);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(-6.5,0,-12.5);
    casa_base.Draw(4);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(-4.9,0,-12);
    casa_base.Draw(5);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(6,0,-10);
    casa_base.Draw(1);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(4,0,-11);
    casa_base.Draw(2);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(-3.8,0,-9.5);
    casa_base.Draw(3);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(5,0,-13.5);
    casa_base.Draw(4);
/////////////////////////////////////
    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(7,0,5);
    casa_base.Draw(1);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(3.5,0,8);
    casa_base.Draw(2);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(3,0,6);
    casa_base.Draw(3);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(1,0,13);
    casa_base.Draw(4);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(0,0,7);
    casa_base.Draw(5);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(-2,0,12);
    casa_base.Draw(1);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(-3.5,0,7);
    casa_base.Draw(2);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(-6.5,0,5.5);
    casa_base.Draw(2);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(-7,0,8.5);
    casa_base.Draw(3);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(-10,0,13);
    casa_base.Draw(1);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(-10,0,9);
    casa_base.Draw(2);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(-14,0,13);
    casa_base.Draw(3);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(-12.5,0,7);
    casa_base.Draw(1);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(-6.5,0,12.5);
    casa_base.Draw(2);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(2,0,-10);
    casa_base.Draw(3);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(-4,0,-14);
    casa_base.Draw(3);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(-12,0,-14.5);
    casa_base.Draw(3);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(2,0,10);
    casa_base.Draw(1);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(-4,0,14);
    casa_base.Draw(2);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(4,0,11);
    casa_base.Draw(2);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(-3.8,0,9.5);
    casa_base.Draw(3);

    opera.LoadIdenty();
    opera.escalar(40,40,40);
    opera.trasladar(5,0,13.5);
    casa_base.Draw(4);

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(0,0,90);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(5,0,65);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(5,0,65);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(-90,0,-25);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(-10,0,-30);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(60,0,-25);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(60,0,45);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(0,0,30);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(60,0,-60);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(50,0,-80);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(7,7,7);
    opera.trasladar(0,0,-65);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(20,0,-85);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(35,0,-25);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(-55,0,-40);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(-55,0,-75);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(-10,0,-95);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(40,0,-55);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(-90,0,-55);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(-80,0,-75);
    arb.Draw();

     opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(-90,0,55);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(-70,0,75);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(-70,0,32);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(37,0,32);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(60,0,90);
    arb.Draw();

     opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(40,0,70);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(-20,0,30);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(-30,0,70);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(-50,0,70);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(45,0,55);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(120,0,0);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(110,0,-20);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(110,0,-50);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(115,0,70);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.5,6.05,6.5);
    opera.trasladar(120,0,50);
    arb.Draw();

    opera.LoadIdenty();
    opera.escalar(6.0,6.0,6.0);
    opera.trasladar(115,0,30);
    arb.Draw();

    //NUBES
    opera.LoadIdenty();
    opera.escalar(12,12,1);
    opera.trasladar(0,20,25);
    nub.Draw();

    opera.LoadIdenty();
    opera.escalar(10,10,10);
    opera.trasladar(30,15,50);
    nub.Draw();

    opera.LoadIdenty();
    opera.escalar(10,10,10);
    opera.trasladar(60,20,45);
    nub.Draw();

    opera.LoadIdenty();
    opera.escalar(10,10,10);
    opera.trasladar(90,15,-0);
    nub.Draw();

    opera.LoadIdenty();
    opera.escalar(10,10,10);
    opera.trasladar(-30,15,-15);
    nub.Draw();

    opera.LoadIdenty();
    opera.escalar(10,10,10);
    opera.trasladar(-60,20,-25);
    nub.Draw();

    opera.LoadIdenty();
    opera.escalar(10,10,10);
    opera.trasladar(-90,15,-40);
    nub.Draw();

    //
    opera.LoadIdenty();
    opera.escalar(10,10,10);
    opera.trasladar(0,20,-25);
    nub.Draw();

    opera.LoadIdenty();
    opera.escalar(7,7,7);
    opera.trasladar(30,15,-50);
    nub.Draw();

    opera.LoadIdenty();
    opera.escalar(12,12,12);
    opera.trasladar(60,20,-45);
    nub.Draw();


    opera.LoadIdenty();
    opera.escalar(8,8,8);
    opera.trasladar(-30,15,15);
    nub.Draw();

    opera.LoadIdenty();
    opera.escalar(5,5,5);
    opera.trasladar(-60,35,30);
    nub.Draw();

    opera.LoadIdenty();
    opera.escalar(10,10,10);
    opera.trasladar(-90,15,40);
    nub.Draw();
    //carretera
    glColor3f(0.54f, 0.58f, 0.59f);
    glBegin(GL_LINES);
    glVertex3f(400,0,125);
    glVertex3f(400,0,600);
    glVertex3f(0,0,0);
    glEnd();

    glBegin(GL_LINES);
    glVertex3f(-600,0,125);
    glVertex3f(400,0,125);
    glVertex3f(0,0,0);
    glEnd();

    glBegin(GL_LINES);
    glVertex3f(400,0,-125);
    glVertex3f(400,0,-600);
    glVertex3f(0,0,0);
    glEnd();

    glBegin(GL_LINES);
    glVertex3f(-600,0,-125);
    glVertex3f(400,0,-125);
    glVertex3f(0,0,0);
    glEnd();

    glBegin(GL_LINES);
    glVertex3f(650,0,-600);
    glVertex3f(650,0,600);
    glVertex3f(0,0,0);
    glEnd();

    //LINEAS DE LA CARRETERA
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_LINES);
    int i;
    for (i=-600; i<650; i=i+20)
    glVertex3f(525,0,i);
    glVertex3f(525,0,i+10);
    glEnd();

    glBegin(GL_LINES);
    for (i=-600; i<500; i=i+20)
    glVertex3f(i,0,0);
    glVertex3f(i+10,0,0);
    glEnd();

    anguloCuboX+=0.0025f;
    anguloCuboY+=0.025f;
    anguloEsfera+=0.05f;
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
