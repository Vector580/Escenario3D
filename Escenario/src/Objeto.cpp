#include "Objeto.h"

Objeto::Objeto(Operador *Op)
{
    //ctor
}

Objeto::~Objeto()
{
    //dtor
}

void Objeto:: Trasladar(float x, float y, float z)
{
    Op->trasladar(x,y,z);
}
void Objeto:: Escalar (float escX, float escY, float escZ)
{
    Op->escalar(escX,escY,escZ);
}

void Objeto:: Update()
{

}
void Objeto:: Draw()
{

}
