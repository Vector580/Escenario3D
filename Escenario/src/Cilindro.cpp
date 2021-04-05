#include "Cilindro.h"
#include <math.h>
#include <GL/glut.h>

Cilindro::Cilindro()
{

}

Cilindro::Cilindro(Operador *Op)
{
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
//Funcion que define el centro del cilindro
void Cilindro::setCentro(float x, float y, float z)
{
    px=x;
    py=y;
    pz=z;
}

void Cilindro::setRadio(float r)
{
    radio=r;
}
void Cilindro::setProfundidad(float profun)
{
    profundidad=profun;
}
void Cilindro::Draw()
{
    radio=radio*10;

    float rad;
    int angulo, y, x;

    int indice=0;
    angulo=0;

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
   Ope->multiplicar(Puntos,360);

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
