#include "Carro.h"
#include <GL/glut.h>

Carro::Carro(Operador *Op)
{
    Puntos[0][0] = 1.0;     Puntos[0][1] = 0.25;    Puntos[0][2] = 0;
    Puntos[1][0] = 1.1;     Puntos[1][1] = 0.25;    Puntos[1][2] = 0;
    Puntos[2][0] = 1.1;     Puntos[2][1] = 0.75;    Puntos[2][2] = 0;
    Puntos[3][0] = 1.0;     Puntos[3][1] = 0.75;    Puntos[3][2] = 0;
    Puntos[4][0] = 1.0;     Puntos[4][1] = 0.25;    Puntos[4][2] = -3.3;
    Puntos[5][0] = 1.1;     Puntos[5][1] = 0.25;    Puntos[5][2] = -3.3;
    Puntos[6][0] = 1.1;     Puntos[6][1] = 0.75;    Puntos[6][2] = -3.3;
    Puntos[7][0] = 1.0;     Puntos[7][1] = 0.75;    Puntos[7][2] = -3.3;

    Puntos[8][0] = 1.1;     Puntos[8][1] = 0.5;    Puntos[8][2] = -0.15;
    Puntos[9][0] = 5.5;     Puntos[9][1] = 0.5;    Puntos[9][2] = -0.15;
    Puntos[10][0] = 5.5;     Puntos[10][1] = 1.5;    Puntos[10][2] = -0.15;
    Puntos[11][0] = 1.1;     Puntos[11][1] = 1.5;    Puntos[11][2] = -0.15;
    Puntos[12][0] = 1.1;     Puntos[12][1] = 0.5;    Puntos[12][2] = -3.15;
    Puntos[13][0] = 5.5;     Puntos[13][1] = 0.5;    Puntos[13][2] = -3.15;
    Puntos[14][0] = 5.5;     Puntos[14][1] = 1.5;    Puntos[14][2] = -3.15;
    Puntos[15][0] = 1.1;     Puntos[15][1] = 1.5;    Puntos[15][2] = -3.15;

    Puntos[16][0] = 2.1;     Puntos[16][1] = 1.5;    Puntos[16][2] = -0.15;
    Puntos[17][0] = 5.5;     Puntos[17][1] = 1.5;    Puntos[17][2] = -0.15;
    Puntos[18][0] = 5.5;     Puntos[18][1] = 2.25;    Puntos[18][2] = -0.15;
    Puntos[19][0] = 2.5;     Puntos[19][1] = 2.25;    Puntos[19][2] = -0.15;
    Puntos[20][0] = 2.1;     Puntos[20][1] = 1.5;    Puntos[20][2] = -3.15;
    Puntos[21][0] = 5.5;     Puntos[21][1] = 1.5;    Puntos[21][2] = -3.15;
    Puntos[22][0] = 5.5;     Puntos[22][1] = 2.25;    Puntos[22][2] = -3.15;
    Puntos[23][0] = 2.5;     Puntos[23][1] = 2.25;    Puntos[23][2] = -3.15;

    Puntos[24][0] = 1.0;     Puntos[24][1] = 0.75;    Puntos[24][2] = -1.15;
    Puntos[25][0] = 1.1;     Puntos[25][1] = 0.75;    Puntos[25][2] = -1.15;
    Puntos[26][0] = 1.1;     Puntos[26][1] = 1.0;    Puntos[26][2] = -1.15;
    Puntos[27][0] = 1.0;     Puntos[27][1] = 1.0;    Puntos[27][2] = -1.15;
    Puntos[28][0] = 1.0;     Puntos[28][1] = 0.75;    Puntos[28][2] = -2.15;
    Puntos[29][0] = 1.1;     Puntos[29][1] = 0.75;    Puntos[29][2] = -2.15;
    Puntos[30][0] = 1.1;     Puntos[30][1] = 1.0;    Puntos[30][2] = -2.15;
    Puntos[31][0] = 1.0;     Puntos[31][1] = 1.0;    Puntos[31][2] = -2.15;

    Puntos[32][0] = 3.9;     Puntos[32][1] = 0.5;    Puntos[32][2] = -0.15;
    Puntos[33][0] = 3.9;     Puntos[33][1] = 2.25;    Puntos[33][2] = -0.15;

    Puntos[34][0] = 3.9;     Puntos[34][1] = 0.5;    Puntos[34][2] = -3.15;
    Puntos[35][0] = 3.9;     Puntos[35][1] = 2.25;    Puntos[35][2] = -3.15;

    //PUERTA MARCO
    Puntos[36][0] = 2.1;     Puntos[36][1] = 0.5;    Puntos[36][2] = -0.15;
    Puntos[37][0] = 2.1;     Puntos[37][1] = 1.5;    Puntos[37][2] = -0.15;

    Puntos[38][0] = 2.1;     Puntos[38][1] = 0.5;    Puntos[38][2] = -3.15;
    Puntos[39][0] = 2.1;     Puntos[39][1] = 1.5;    Puntos[39][2] = -3.15;

    //AGARRADERA DE LA PUERTA (HACER PARA)
    Puntos[40][0] = 3.6;     Puntos[40][1] = 1.125;    Puntos[40][2] = -0.15;
    Puntos[41][0] = 3.725;     Puntos[41][1] = 1.125;    Puntos[41][2] = -0.15;
    Puntos[42][0] = 3.725;     Puntos[42][1] = 1.250;    Puntos[42][2] = -0.15;
    Puntos[43][0] = 3.6;     Puntos[43][1] = 1.250;    Puntos[43][2] = -0.15;

    Puntos[44][0] = 3.6;     Puntos[44][1] = 1.125;    Puntos[44][2] = -3.15;
    Puntos[45][0] = 3.725;     Puntos[45][1] = 1.125;    Puntos[45][2] = -3.15;
    Puntos[46][0] = 3.725;     Puntos[46][1] = 1.250;    Puntos[46][2] = -3.15;
    Puntos[47][0] = 3.6;     Puntos[47][1] = 1.250;    Puntos[47][2] = -3.15;

    for(int i=0;i<48;i++)
        for(int j=0;j<3;j++)
            PuntosAux[i][j]=Puntos[i][j];
    Ope = Op;
}

Carro::~Carro()
{
    //dtor
}


void Carro:: Trasladar(float x, float y, float z)
{
    Ope->trasladar(x,y,z);
}
void Carro:: Escalar (float escX, float escY, float escZ)
{
    Ope->escalar(escX,escY,escZ);
}
void Carro:: Rotar (float grade, float angx, float angy, float angz)
{
    Ope->rotar(grade, angx, angy, angz);
}
void Carro::Multiplicar()
{
    Ope->multiplicar(PuntosAux,51);
}
void Carro:: Update()
{

}

void Carro::Draw(int color)
{
    int i, j = 0;
    glLineWidth(2);

    glColor3f(0.54f, 0.58f, 0.59f);
    for (i=0; i<8; i++)
    {
        prisAux.setPoints(PuntosAux[i][0],PuntosAux[i][1],PuntosAux[i][2],j);
        j++;
    }
    prisAux.Draw();

    j = 0;
    glColor3f(0.54f, 0.58f, 0.59f);
    for (i=24; i<32; i++)
    {
        prisAux.setPoints(PuntosAux[i][0],PuntosAux[i][1],PuntosAux[i][2],j);
        j++;
    }
    prisAux.Draw();

    //COLOR DEL CARRO
    switch (color)
    {
        case 1: glColor3f(1.0f, 0.0f, 0.0f);
                break;
        case 2: glColor3f(0.0f, 1.0f, 0.0f);
                break;
        case 3: glColor3f(0.0f, 0.0f, 1.0f);
                break;
        case 4: glColor3f(1.0f, 1.0f, 0.0f);
                break;
        case 5: glColor3f(1.0f, 0.0f, 1.0f);
                break;
    }
    j = 0;
    for (i=8; i<16; i++)
    {
        prisAux.setPoints(PuntosAux[i][0],PuntosAux[i][1],PuntosAux[i][2],j);
        j++;
    }
    prisAux.Draw();

    j = 0;
    for (i=16; i<24; i++)
    {
        prisAux.setPoints(PuntosAux[i][0],PuntosAux[i][1],PuntosAux[i][2],j);
        j++;
    }
    prisAux.Draw();
    glBegin(GL_LINES);
    glVertex3f(PuntosAux[32][0],PuntosAux[32][1],PuntosAux[32][2]);
    glVertex3f(PuntosAux[33][0],PuntosAux[33][1],PuntosAux[33][2]);
    glEnd();
    glBegin(GL_LINES);
    glVertex3f(PuntosAux[34][0],PuntosAux[34][1],PuntosAux[34][2]);
    glVertex3f(PuntosAux[35][0],PuntosAux[35][1],PuntosAux[35][2]);
    glEnd();
    glBegin(GL_LINES);
    glVertex3f(PuntosAux[36][0],PuntosAux[36][1],PuntosAux[36][2]);
    glVertex3f(PuntosAux[37][0],PuntosAux[37][1],PuntosAux[37][2]);
    glEnd();
    glBegin(GL_LINES);
    glVertex3f(PuntosAux[38][0],PuntosAux[38][1],PuntosAux[38][2]);
    glVertex3f(PuntosAux[39][0],PuntosAux[39][1],PuntosAux[39][2]);
    glEnd();

    glBegin(GL_LINES);
    glVertex3f(PuntosAux[40][0],PuntosAux[40][1],PuntosAux[40][2]);
    glVertex3f(PuntosAux[41][0],PuntosAux[41][1],PuntosAux[41][2]);
    glEnd();
    glBegin(GL_LINES);
    glVertex3f(PuntosAux[41][0],PuntosAux[41][1],PuntosAux[41][2]);
    glVertex3f(PuntosAux[42][0],PuntosAux[42][1],PuntosAux[42][2]);
    glEnd();
    glBegin(GL_LINES);
    glVertex3f(PuntosAux[42][0],PuntosAux[42][1],PuntosAux[42][2]);
    glVertex3f(PuntosAux[43][0],PuntosAux[43][1],PuntosAux[43][2]);
    glEnd();
    glBegin(GL_LINES);
    glVertex3f(PuntosAux[43][0],PuntosAux[43][1],PuntosAux[43][2]);
    glVertex3f(PuntosAux[40][0],PuntosAux[40][1],PuntosAux[40][2]);
    glEnd();

    glBegin(GL_LINES);
    glVertex3f(PuntosAux[44][0],PuntosAux[44][1],PuntosAux[44][2]);
    glVertex3f(PuntosAux[45][0],PuntosAux[45][1],PuntosAux[45][2]);
    glEnd();
    glBegin(GL_LINES);
    glVertex3f(PuntosAux[45][0],PuntosAux[45][1],PuntosAux[45][2]);
    glVertex3f(PuntosAux[46][0],PuntosAux[46][1],PuntosAux[46][2]);
    glEnd();
    glBegin(GL_LINES);
    glVertex3f(PuntosAux[46][0],PuntosAux[46][1],PuntosAux[46][2]);
    glVertex3f(PuntosAux[47][0],PuntosAux[47][1],PuntosAux[47][2]);
    glEnd();
    glBegin(GL_LINES);
    glVertex3f(PuntosAux[47][0],PuntosAux[47][1],PuntosAux[47][2]);
    glVertex3f(PuntosAux[44][0],PuntosAux[44][1],PuntosAux[44][2]);
    glEnd();
    for(int i=0;i<48;i++)
        for(int j=0;j<3;j++)
            PuntosAux[i][j]=Puntos[i][j];
}
