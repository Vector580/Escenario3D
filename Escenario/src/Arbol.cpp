#include "Arbol.h"

Arbol::Arbol(Operador *Op)
{
    int i,j;
   //Tronco de arbol
   Puntos[0][0]=0; Puntos[0][1]=0; Puntos[0][2]=0;
   Puntos[1][0]=0; Puntos[1][1]=2; Puntos[1][2]=0;
   Puntos[2][0]=0; Puntos[2][1]=2; Puntos[2][2]=6;
   Puntos[3][0]=0; Puntos[3][1]=0; Puntos[3][2]=6;
   Puntos[4][0]=-2; Puntos[4][1]=0; Puntos[4][2]=0;
   Puntos[5][0]=-2; Puntos[5][1]=2; Puntos[5][2]=0;
   Puntos[6][0]=-2; Puntos[6][1]=2; Puntos[6][2]=6;
   Puntos[7][0]=-2; Puntos[7][1]=0; Puntos[7][2]=6;


   Puntos[8][0]=-4; Puntos[8][1]=-4; Puntos[8][2]=6;
   Puntos[9][0]=4; Puntos[9][1]=-4; Puntos[9][2]=6;
   Puntos[10][0]=4; Puntos[10][1]=4; Puntos[10][2]=6;
   Puntos[11][0]=2; Puntos[11][1]=4; Puntos[11][2]=6;
   Puntos[12][0]=2; Puntos[12][1]=6; Puntos[12][2]=6;
   Puntos[13][0]=-6; Puntos[13][1]=6; Puntos[13][2]=6;
   Puntos[14][0]=-6; Puntos[14][1]=-2; Puntos[14][2]=6;
   Puntos[15][0]=-4; Puntos[15][1]=-2; Puntos[15][2]=6;

   Puntos[16][0]=-4; Puntos[16][1]=-4; Puntos[16][2]=8;
   Puntos[17][0]=4; Puntos[17][1]=-4; Puntos[17][2]=8;
   Puntos[18][0]=4; Puntos[18][1]=4; Puntos[18][2]=8;
   Puntos[19][0]=2; Puntos[19][1]=4; Puntos[19][2]=8;
   Puntos[20][0]=2; Puntos[20][1]=6; Puntos[20][2]=8;
   Puntos[21][0]=-6; Puntos[21][1]=6; Puntos[21][2]=8;
   Puntos[22][0]=-6; Puntos[22][1]=-2; Puntos[22][2]=8;
   Puntos[23][0]=-4; Puntos[23][1]=-2; Puntos[23][2]=8;

   Puntos[24][0]=2; Puntos[24][1]=-2; Puntos[24][2]=8;
   Puntos[25][0]=-2; Puntos[25][1]=-2; Puntos[25][2]=8;
   Puntos[26][0]=-2; Puntos[26][1]=0; Puntos[26][2]=8;
   Puntos[27][0]=-4; Puntos[27][1]=0; Puntos[27][2]=8;
   Puntos[28][0]=-4; Puntos[28][1]=2; Puntos[28][2]=8;
   Puntos[29][0]=-2; Puntos[29][1]=2; Puntos[29][2]=8;
   Puntos[30][0]=-2; Puntos[30][1]=4; Puntos[30][2]=8;

   Puntos[31][0]=2; Puntos[31][1]=4; Puntos[31][2]=10;
   Puntos[32][0]=2; Puntos[32][1]=2; Puntos[32][2]=10;
   Puntos[33][0]=0; Puntos[33][1]=2; Puntos[33][2]=10;
   Puntos[34][0]=0; Puntos[34][1]=4; Puntos[34][2]=10;
   Puntos[35][0]=2; Puntos[35][1]=-2; Puntos[35][2]=10;
   Puntos[36][0]=0; Puntos[36][1]=-2; Puntos[36][2]=10;
   Puntos[37][0]=0; Puntos[37][1]=0; Puntos[37][2]=10;
   Puntos[38][0]=2; Puntos[38][1]=0; Puntos[38][2]=10;

   Puntos[39][0]=2; Puntos[39][1]=2; Puntos[39][2]=12;
   Puntos[40][0]=0; Puntos[40][1]=2; Puntos[40][2]=12;
   Puntos[41][0]=0; Puntos[41][1]=4; Puntos[41][2]=12;
   Puntos[42][0]=-2; Puntos[42][1]=4; Puntos[42][2]=12;
   Puntos[43][0]=-2; Puntos[43][1]=2; Puntos[43][2]=12;
   Puntos[44][0]=-4; Puntos[44][1]=2; Puntos[44][2]=12;
   Puntos[45][0]=-4; Puntos[45][1]=0; Puntos[45][2]=12;
   Puntos[46][0]=-2; Puntos[46][1]=0; Puntos[46][2]=12;
   Puntos[47][0]=-2; Puntos[47][1]=-2; Puntos[47][2]=12;
   Puntos[48][0]=0; Puntos[48][1]=-2; Puntos[48][2]=12;
   Puntos[49][0]=0; Puntos[49][1]=0; Puntos[49][2]=12;
   Puntos[50][0]=2; Puntos[50][1]=0; Puntos[50][2]=12;

   for(i=0;i<51;i++)
        for(j=0;j<3;j++)
            aux[i][j]=Puntos[i][j];
   Ope=Op;
}

Arbol::~Arbol()
{
    //dtor
}

void Arbol:: Draw()
{
    Ope->push();
    Ope->rotarX(-90);
    Ope->multiplicar(aux,51);
    Ope->pop();
    int i,j;
    //Se define color del tronco
    glColor3f(1.0f, 0.5f, 0.0f);//Naranja
    for(i=0;i<8;i++)
       tronco.setPoints(aux[i][0],aux[i][1],aux[i][2],i);
    tronco.Draw();
    //Se define color de la copa
    glColor3f(0.0f, 1.0f, 0.0f);//Verde
    for(i=8;i<51;i++)
    {
        glBegin(GL_LINES);
            glVertex3fv(aux[i]);
        switch(i)
        {
            case 15: glVertex3fv(aux[8]);
                     break;
            case 23: glVertex3fv(aux[16]);
                     break;
            case 30: glVertex3fv(aux[19]);
                     break;
            case 34: glVertex3fv(aux[31]);
                     break;
            case 38: glVertex3fv(aux[35]);
                     break;
            case 50: glVertex3fv(aux[39]);
                     break;
            default: glVertex3fv(aux[i+1]);
        }
        glEnd();
    }
    for(i=8;i<16;i++)
    {
        glBegin(GL_LINES);
            glVertex3fv( aux[i]);
            glVertex3fv( aux[i+8]);
        glEnd();
    }
    j=47;
    for(i=25;i<31;i++)
    {
        glBegin(GL_LINES);
            glVertex3fv(aux[i]);
            glVertex3fv(aux[j]);
        glEnd();
        j--;
    }
    for(i=32;i<35;i++)
    {
        glBegin(GL_LINES);
            glVertex3fv( aux[i]);
            glVertex3fv( aux[i+7]);
        glEnd();
    }
    for(i=36;i<39;i++)
    {
        glBegin(GL_LINES);
            glVertex3fv( aux[i]);
            glVertex3fv( aux[i+12]);
        glEnd();
    }
    glBegin(GL_LINES);
        glVertex3fv( aux[24]);
        glVertex3fv( aux[35]);
    glEnd();
    glBegin(GL_LINES);
        glVertex3fv( aux[19]);
        glVertex3fv( aux[31]);
    glEnd();
    glBegin(GL_LINES);
        glVertex3fv( aux[19]);
        glVertex3fv( aux[24]);
    glEnd();
    for(i=0;i<51;i++)
        for(j=0;j<3;j++)
            aux[i][j]=Puntos[i][j];
}
