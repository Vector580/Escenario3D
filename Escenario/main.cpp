

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "Operador.h"

void init(void)
{
     //Establece el color de la ventana de visualizacion
     //Los tres primeros parametros corresponden al RGB
     //El cuarto parametro corresponde al valor alfa, que permite el efecto de transparencias
     //0: objeto totalmente transparente; 1: objeto totalmente opaco
     glClearColor(0.0, 0.0, 0.0, 0.0);
     //establece los parametros de proyeccion ortogonal
     //Se visualizara una proyeccion bidimensional de dimensiones 200 x 150
     //(0,0): esquina inferior izquierda: punto de referencia de esta ventana
     glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
     gluOrtho2D(-540,540,-325,325);
     glMatrixMode(GL_MODELVIEW);
     glLoadIdentity();
 }
void graficar()
{
    Operador ope;
    ope.LoadIdenty();
    ope.imprimir();
}
 int main(int argc, char** argv)
 {
      //se inicializa la pantalla grafica
      glutInit(&argc, argv);
      //establece el modo de visualizacion
      glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
      //Establece la posicion de la esquina superior izquierda del grafico en la pantalla
      glutInitWindowPosition(100,0);
      //se establece el ancho y la altura de la ventana de visualizacion
      glutInitWindowSize(1080,650);
      //se crea la ventana de visualizacion
      glutCreateWindow("Escenario");
      //se ejecuta la funcion de inicializacion de parametros
      init();
      //se envian los graficos a pantalla
      glutDisplayFunc(graficar);
      glutMainLoop();
      return 0;
  }
