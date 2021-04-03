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
    float scale[4][4]={{sx,0,0,0},{0,sy,0,0},{0,0,sz,0},{0,0,0,1}};
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

void Operador::rotarlib(float grade, float xp1, float yp1, float zp1,float xp2, float yp2, float zp2)
{
    float rad=grade*0.0174533;
    float aux[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    float aux2[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    int i,j,k,m;
    float vectorUni[4],magnitud,valor;
    magnitud=sqrt(((xp2-xp1)*(xp2-xp1))+((yp2-yp1)*(yp2-yp1))+((zp2-zp1)*(zp2-zp1)));
    vectorUni[0]=(xp2-xp1)/magnitud;//a
    vectorUni[1]=(yp2-yp1)/magnitud;//b
    vectorUni[2]=(zp2-zp1)/magnitud;//c
    vectorUni[3]=sqrt(((vectorUni[1])*(vectorUni[1]))+((vectorUni[2])*(vectorUni[2])));//d=raiz(b^2+c^2)
    //Inversas
    float Rx[4][4]={{1,0,0,0},{0,vectorUni[1]/vectorUni[3],vectorUni[2]/vectorUni[3],0},{0,-1*(vectorUni[2]/vectorUni[3]),vectorUni[1]/vectorUni[3],0},{0,0,0,1}};
    float Ry[4][4]={{vectorUni[3],0,-1*(vectorUni[0]),0},{0,1,0,0},{vectorUni[0],0,vectorUni[3],0},{0,0,0,1}};
    float Rz[4][4]={{cos(rad),-sin(rad),0,0},{sin(-rad),cos(rad),0,0},{0,0,1,0},{0,0,0,1}};

    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
            for (k=0;k<4;k++)
                aux[i][j]=aux[i][j]+Rx[i][k]*Ry[k][j];
    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
            for (k=0;k<4;k++)
                aux2[i][j]=aux2[i][j]+aux[i][k]*Rz[k][j];
    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
            aux[i][j]=0;

    Ry[0][2]=-1*Ry[0][2];
    Ry[2][0]=-1*Ry[2][0];
    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
            for (k=0;k<4;k++)
                aux[i][j]=aux[i][j]+aux2[i][k]*Ry[k][j];
    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
            aux2[i][j]=0;

    Rx[1][2]=-1*Rx[1][2];
    Rx[2][1]=-1*Rx[2][1];
    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
            for (k=0;k<4;k++)
                aux2[i][j]=aux2[i][j]+aux[i][k]*Rx[k][j];
    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
            aux[i][j]=0;
    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
            for (k=0;k<4;k++)
                aux[i][j]=aux[i][j]+(aux2[i][k]*((*(Ap+(4*j+k)))));
    for (i=0;i<4;i++)
            for (j=0;j<4;j++)
                *(Ap+(4*j+i))=aux[i][j];
}

void Operador::rotarX(float grade)
{
    float rad=grade*0.0174533;
    float aux[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    int i,j,k,m;
    float rotate_x[4][4]={{1,0,0,0},{0,cos(rad),-1*sin(rad),0},{0,sin(rad),cos(rad),0},{0,0,0,1}};
    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
            for (k=0;k<4;k++)
                aux[i][j]=aux[i][j]+((*(Ap+(4*k+i)))*rotate_x[k][j]);
    for (i=0;i<4;i++)
            for (j=0;j<4;j++)
                *(Ap+(4*j+i))=aux[i][j];
}
void Operador::rotarY(float grade)
{
    float rad=grade*0.0174533;
    float aux[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    int i,j,k,m;
    float rotate_y[4][4]={{cos(rad),0,sin(rad),0},{0,1,0,0},{-1*sin(rad),0,cos(rad),0},{0,0,0,1}};
    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
            for (k=0;k<4;k++)
                aux[i][j]=aux[i][j]+((*(Ap+(4*k+i)))*rotate_y[k][j]);
    for (i=0;i<4;i++)
            for (j=0;j<4;j++)
                *(Ap+(4*j+i))=aux[i][j];
}

void Operador::rotarZ(float grade)
{
    float rad=grade*0.0174533;
    float aux[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    int i,j,k,m;
    float rotate_z[4][4]={{cos(rad),-1*sin(rad),0,0},{sin(rad),cos(rad),0,0},{0,0,1,0},{0,0,0,1}};
    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
            for (k=0;k<4;k++)
                aux[i][j]=aux[i][j]+((*(Ap+(4*k+i)))*rotate_z[k][j]);
    for (i=0;i<4;i++)
            for (j=0;j<4;j++)
                *(Ap+(4*j+i))=aux[i][j];
}
void Operador::multiplicar(float aux[][3],int tam)
{
    int bond,i,j,k;//variable bandera
    float auxi[3];//Punto auxiliar
    float arreAux[4],suma;//Arreglo auxiliar para multiplicar y variable suma
    arreAux[3]=1;//El 1 nos ayuda a multiplicar porque necesitamos (x,y,z,1)
    //ciclo paramultplicar por los puntos
    for(i=0;i<tam;i++)
    {
        //Se guarda el punto en el arreglo auxiliar
        arreAux[0]=aux[i][0];
        arreAux[1]=aux[i][1];
        arreAux[2]=aux[i][2];
        //Bond nos ayuda a asignar el nuevo objeto punto
        bond=0;
        //El ciclo se hace 3 veces k se mueve en las filas
        for (k=0;k<3;k++)
        {
            //Suma guarda la suma de fila por columna
            suma=0;
            //j apunta a las columnas de la matriz y a la coordenada
            for (j=0;j<4;j++)
            {
                suma=suma+((*(Ap+(4*j+k)))*arreAux[j]);
            }
            //Si bond=0 suma es la componete x
            if(bond==0)
            {
                auxi[0]=suma;
                bond=1;
            }
            //Sino, la suma es la componente y
            else
            {
                if(bond==1)
                {
                    auxi[1]=suma;
                    bond=2;
                }
                else
                    auxi[2]=suma;
            }
        }
        //Se guarda el nuevo punto
        aux[i][0]=auxi[0];
        aux[i][1]=auxi[1];
        aux[i][2]=auxi[2];
    }
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
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%f",*(Ap+(4*j+i)));
            printf("\t");
        }
        printf("\n");
    }
}
