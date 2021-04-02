#include "Sol.h"
#include <math.h>
Sol::Sol(Operador *Op)
{

    Ope=Op;

}

Sol::~Sol()
{
    //dtor
}

void Sol:: Update()
{

}
void Sol:: Draw()
{
    cilin.setApunter(Ope);
    cilin.setCentro(0,0,0);
    cilin.setRadio(60);
    cilin.setProfundidad(30);
    glColor3f(1,0.7,0);
    cilin.Draw();
}
