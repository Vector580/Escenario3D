#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include "Prisma.h"
#include "Piramide.h"
#include "Casa.h"
#include "Camioneta.h"
#include "Carro.h"
GLfloat anguloCuboX = 0.0f;
GLfloat anguloCuboY = 0.0f;
GLfloat anguloEsfera = 0.0f;

GLint ancho, alto;
int hazPerspectiva = 0;
Operador opera;
Prisma cubo1;
Piramide piramide1;
Casa casa_base(&opera);
Camioneta camioneta1;
Carro carro1;

void reshape(int width, int height)
{
    glViewport(0, 0, width, height); //Puerto de visualizacion
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if(hazPerspectiva)
      gluPerspective(60.0f, (GLfloat)width/(GLfloat)height, 1.0f, 20.0f);
    else
      glOrtho(-6, 6, -6, 6, -3, 10);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    ancho = width;
    alto = height;
}

void drawCube(void)
{
    /*
    cubo1.setPoints(0,0,0,0);
    cubo1.setPoints(1,0,0,1);
    cubo1.setPoints(1,1,0,2);
    cubo1.setPoints(0,1,0,3);
    cubo1.setPoints(0,0,1,4);
    cubo1.setPoints(1,0,1,5);
    cubo1.setPoints(1,1,1,6);
    cubo1.setPoints(0,1,1,7);

    cubo1.Draw();
    piramide1.setPoints(-.25,1,-.25,0);
    piramide1.setPoints(1.25,1,-.25,1);
    piramide1.setPoints(1.25,1,1.25,2);
    piramide1.setPoints(-.25,1,1.25,3);
    piramide1.setPoints(0.5,1.5,0.5,4);
    piramide1.Draw();*/
    opera.LoadIdenty();

    //
    /*opera.escalar(0.8,0.8,0.8);
    opera.trasladar(0.1,0.1,0.1);
    opera.rotacion(15,1,0,0);


    casa_base.Multiplicar();
    casa_base.Draw();
    opera.LoadIdenty();*/
    camioneta1.Draw(4);
    //carro1.Draw(2);

    anguloCuboX+=0.05f;
    anguloCuboY+=0.05f;
    anguloEsfera+=0.1f;


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
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(600, 600);
    glutCreateWindow("F I G U R A S");
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutIdleFunc(idle);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
