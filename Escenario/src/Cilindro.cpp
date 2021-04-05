#include "Cilindro.h"
#include <math.h>
#include <GL/glut.h>

Cilindro::Cilindro()
{

}

Cilindro::Cilindro(Operador *Op)
{
    //Se inicializan las variables
    Ope=Op;
    px=0;
    pz=0;
    pz=0;
    radio=4;
    profundidad=4;

}

Cilindro::~Cilindro()
{
    //dtor
}
//Funcion que define el apuntador a operador
void Cilindro::setApunter(Operador *Op)
{
    Ope=Op;
}
//Funcion que define la posicion  del centro del cilindro
void Cilindro::setCentro(float x, float y, float z)
{
    px=x;
    py=y;
    pz=z;
}
//Funcion que define el radio del cilindro
void Cilindro::setRadio(float r)
{
    radio=r;
}
//Funcion que define la profundidad del cilindro
void Cilindro::setProfundidad(float profun)
{
    profundidad=profun;
}
//Funcion para el dibujado del cilindro
void Cilindro::Draw()
{
    radio=radio*10;//multiplica el el radio por 10, para lograr un buen dibujado

    float rad;
    int angulo, y, x;

    int indice=0;//Variable que señala la posicion donde se guardara el punto
    angulo=0;

    //Creacion de los cirulo del cilinro (bases)
    for (angulo=0; angulo<360; angulo=angulo+2) {
        rad=angulo*0.0174533;//Se convierte los angulos a radianes
        x = radio*cos(rad);//Se calcula la posicion de x
        y = radio*sin(rad);//Se calcula la posicion de y
        Puntos[indice][0]=(x+px)/10;
        Puntos[indice][1]=(y+py)/10;
        Puntos[indice][2]=0+pz;
        indice++;

    }
    for (angulo=0; angulo<360; angulo=angulo+2) {
        rad=angulo*0.0174533;//Se convierte los angulos a radianes
        x = radio*cos(rad);//Se calcula la posicion de x
        y = radio*sin(rad);//Se calcula la posicion de y
        Puntos[indice][0]=(x+px)/10;
       Puntos[indice][1]=(y+py)/10;
        Puntos[indice][2]=profundidad+pz;
        indice++;

    }
    //Se multiplica por la matriz global para aplicar las operacion
   Ope->multiplicar(Puntos,360);
    //se dibuja el cilindro
    for(int i=0;i<180;i++)
    {
        glBegin(GL_LINES);
            glVertex3f(Puntos[i][0],Puntos[i][1],Puntos[i][2]);
            glVertex3f(Puntos[i+1][0],Puntos[i+1][1],Puntos[i+1][2]);
        glEnd();
    }
    for(int i=181;i<359;i++)
    {
        glBegin(GL_LINES);
            glVertex3f(Puntos[i][0],Puntos[i][1],Puntos[i][2]);
            glVertex3f(Puntos[i+1][0],Puntos[i+1][1],Puntos[i+1][2]);
        glEnd();
    }

    for(int i=0;i<180;i=i+4)
    {
        glBegin(GL_LINES);
            glVertex3f(Puntos[i][0],Puntos[i][1],Puntos[i][2]);
            glVertex3f(Puntos[i+181][0],Puntos[i+181][1],Puntos[i+181][2]);
        glEnd();
    }
}
