#include "Matriz.h"

Matriz::Matriz()
{
    //Se inicializa la matriz como una matriz identidad
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j)
                M[i][j]=1;
            else
                M[i][j]=0;
        }
    }
     p=&M[0][0]; //Se le asigna al apuntador la primera posicion de la matriz
}

Matriz::~Matriz()
{
    //dtor
}

//Funcion para cargar identidad
void Matriz::LoadIdenty()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j)
                M[i][j]=1;
            else
                M[i][j]=0;
        }
    }
}
//Funcion que devuelve el apuntador
float* Matriz::getPunter()
{
    return p;
}

