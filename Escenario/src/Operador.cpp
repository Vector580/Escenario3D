#include "Operador.h"

Operador::Operador()
{
    //Se le asigna el apuntador de la posicion inicial de la matriz
    Ap=A.getPunter();
}

Operador::~Operador()
{
    //dtor
}


void Operador::LoadIdenty()
{
    A.LoadIdenty();
}
//Operadores geometrico

//Operador de translacion, recibe las cordenadas del punto a moverse
void Operador::trasladar(float tx, float ty, float tz)
{
    float trans[4][4]={{1,0,0,tx},{0,1,0,ty},{0,0,1,tz},{0,0,0,1}};
    float aux[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    int i,j,k,m;
    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
            for (k=0;k<4;k++)
                aux[i][j]=aux[i][j]+((*(Ap+(4*k+i)))*trans[k][j]);

    for (i=0;i<4;i++)
            for (j=0;j<4;j++)
                *(Ap+(4*j+i))=aux[i][j];

}

//Operador de escalamiento, recibe los escalares
void Operador::escalar(float sx, float sy, float sz)
{
    float scale[4][4]={{sx,0,0,1},{0,sy,0,1},{0,0,sz,1},{0,0,0,1}};
    float aux[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    int i,j,k,m;
    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
            for (k=0;k<4;k++)
                aux[i][j]=aux[i][j]+((*(Ap+(4*k+i)))*scale[k][j]);

    for (i=0;i<4;i++)
            for (j=0;j<4;j++)
                *(Ap+(4*j+i))=aux[i][j];
}

//Operador de rotacion, recibe los grados
void Operador::rotar(float grade, float tx, float ty, float tz)
{
    float rad=grade*0.0174533;
    float aux[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    int i,j,k,m;
    float rotate_x[4][4]={{1,0,0,0},{0,cos(rad),-sin(rad),0},{0,sin(rad),-cos(rad),0},{0,0,0,1}};
    float rotate_y[4][4]={{cos(rad),0,sin(rad),0},{0,1,0,0},{-sin(rad),0,-cos(rad),0},{0,0,01}};
    float rotate_z[4][4]={{cos(rad),-sin(rad),0,0},{sin(rad),-cos(rad),0,0},{0,0,1,0},{0,0,0,1}};

    //Inversas
    float rotate_xp[4][4]={{1,0,0,0},{0,cos(-rad),-sin(rad),0},{0,sin(-rad),-cos(-rad),0},{0,0,0,1}};
    float rotate_yp[4][4]={{cos(-rad),0,sin(-rad),0},{0,1,0,0},{-sin(-rad),0,-cos(-rad),0},{0,0,0,1}};
    float rotate_zp[4][4]={{cos(-rad),-sin(-rad),0,0},{sin(-rad),-cos(-rad),0,0},{0,0,1,0},{0,0,0,1}};

    float trans[4][4]={{1,0,0,tx},{0,1,0,ty},{0,0,1,tz},{0,0,0,1}};
    float transp[4][4]={{1,0,0,-tx},{0,1,0,-ty},{0,0,1,-tz},{0,0,0,1}};

    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
            for (k=0;k<4;k++)
                aux[i][j]=aux[i][j]+((*(Ap+(4*k+i)))*transp[k][j]);

    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
            for (k=0;k<4;k++)
                aux[i][j]=aux[i][j]+((*(Ap+(4*k+i)))*rotate_xp[k][j]);

    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
            for (k=0;k<4;k++)
                aux[i][j]=aux[i][j]+((*(Ap+(4*k+i)))*rotate_yp[k][j]);

    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
            for (k=0;k<4;k++)
                aux[i][j]=aux[i][j]+((*(Ap+(4*k+i)))*rotate_z[k][j]);
    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
            for (k=0;k<4;k++)
                aux[i][j]=aux[i][j]+((*(Ap+i+k*(i+1)))*rotate_y[k][j]);

    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
            for (k=0;k<4;k++)
                aux[i][j]=aux[i][j]+(*(Ap+(4*k+i))*rotate_x[k][j]);

    for (i=0;i<4;i++)
            for (j=0;j<4;j++)
                *(Ap+(4*j+i))=aux[i][j];
}


void Operador::push()
{
    pila.push(A);
}

void Operador::pop()
{
    A=pila.top();
    pila.pop();
}

void Operador::imprimir()
{
    int i,j;
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
           printf("%f \t",*(Ap+(4*j+i)));
        printf("\n");
    }
}
