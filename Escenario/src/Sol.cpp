#include "Sol.h"
#include <math.h>
Sol::Sol(Operador *Op)
{

    cilin.setApunter(Op);
   cilin.setCentro(0,0,0);
    cilin.setRadio(60);
    cilin.setProfundidad(30);
    Ope=Op;


}

Sol::~Sol()
{
    //dtor
}

void Sol:: Trasladar(float x, float y, float z)
{
    Ope->trasladar(x,y,z);
}
void Sol:: Escalar (float escX, float escY, float escZ)
{
    Ope->escalar(escX,escY,escZ);
}
void Sol:: Rotar (float grade, float angx, float angy, float angz)
{
    Ope->rotar(grade, angx, angy, angz);
}
void Sol::Multiplicar()
{
    Ope->multiplicar(Puntos,41);

}
void Sol:: Update()
{

}
void Sol:: Draw()
{
    glColor3f(1,0.7,0);
    cilin.Draw();
}
