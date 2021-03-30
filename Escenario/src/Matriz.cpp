#include "Matriz.h"

Matriz::Matriz()
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
     p=&M[0][0];
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
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
           printf("%f \t",M[i][j]);
        printf("\n");
    }
    printf("\n");
}

float* Matriz::getPunter()
{
    return p;
}

