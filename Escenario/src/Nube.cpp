#include "Nube.h"

Nube::Nube(Operador *Op)
{
    int i,j;
    //Se definen los puntos
   Puntos[0][0]=-4; Puntos[0][1]=-4; Puntos[0][2]=0;
   Puntos[1][0]=4; Puntos[1][1]=-4; Puntos[1][2]=0;
   Puntos[2][0]=4; Puntos[2][1]=4; Puntos[2][2]=0;
   Puntos[3][0]=2; Puntos[3][1]=4; Puntos[3][2]=0;
   Puntos[4][0]=2; Puntos[4][1]=6; Puntos[4][2]=0;
   Puntos[5][0]=-6; Puntos[5][1]=6; Puntos[5][2]=0;
   Puntos[6][0]=-6; Puntos[6][1]=-2; Puntos[6][2]=0;
   Puntos[7][0]=-4; Puntos[7][1]=-2; Puntos[7][2]=0;

   Puntos[8][0]=-4; Puntos[8][1]=-4; Puntos[8][2]=2;
   Puntos[9][0]=4; Puntos[9][1]=-4; Puntos[9][2]=2;
   Puntos[10][0]=4; Puntos[10][1]=4; Puntos[10][2]=2;
   Puntos[11][0]=2; Puntos[11][1]=4; Puntos[11][2]=2;
   Puntos[12][0]=2; Puntos[12][1]=6; Puntos[12][2]=2;
   Puntos[13][0]=-6; Puntos[13][1]=6; Puntos[13][2]=2;
   Puntos[14][0]=-6; Puntos[14][1]=-2; Puntos[14][2]=2;
   Puntos[15][0]=-4; Puntos[15][1]=-2; Puntos[15][2]=2;

   //Se guardan los punto en una estructura auxiliar
   for(i=0;i<16;i++)
        for(j=0;j<3;j++)
            aux[i][j]=Puntos[i][j];
   //Se define el apuntador
   Ope=Op;
}

Nube::~Nube()
{
    //dtor
}

void Nube::Draw()
{
    //se ploteo mal y se soluciono con una rotacion sobre el eje x
    Ope->push();
    Ope->rotarX(-90);
    Ope->multiplicar(aux,16);
    Ope->pop();
    int i,j;
    //Se define color de la nube
     glColor3f(1.0f, 1.0f, 1.0f);//Blanco
     for(i=0;i<16;i++)
    {
        glBegin(GL_LINES);
            glVertex3fv(aux[i]);
        switch(i)
        {
            case 7: glVertex3fv(aux[0]);
                     break;
            case 15: glVertex3fv(aux[8]);
                     break;
            default: glVertex3fv(aux[i+1]);
        }
        glEnd();
    }
    for(i=0;i<8;i++)
    {
        glBegin(GL_LINES);
            glVertex3fv( aux[i]);
            glVertex3fv( aux[i+8]);
        glEnd();
    }
    //Se reinician los puntos
    for(i=0;i<16;i++)
        for(j=0;j<3;j++)
            aux[i][j]=Puntos[i][j];
}
