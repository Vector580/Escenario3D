#include "Camioneta.h"
#include <GL/glut.h>

Camioneta::Camioneta()
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
    Puntos[17][0] = 4.5;     Puntos[17][1] = 1.5;    Puntos[17][2] = -0.15;
    Puntos[18][0] = 4.5;     Puntos[18][1] = 2.25;    Puntos[18][2] = -0.15;
    Puntos[19][0] = 2.5;     Puntos[19][1] = 2.25;    Puntos[19][2] = -0.15;
    Puntos[20][0] = 2.1;     Puntos[20][1] = 1.5;    Puntos[20][2] = -3.15;
    Puntos[21][0] = 4.5;     Puntos[21][1] = 1.5;    Puntos[21][2] = -3.15;
    Puntos[22][0] = 4.5;     Puntos[22][1] = 2.25;    Puntos[22][2] = -3.15;
    Puntos[23][0] = 2.5;     Puntos[23][1] = 2.25;    Puntos[23][2] = -3.15;

    Puntos[24][0] = 1.0;     Puntos[24][1] = 0.75;    Puntos[24][2] = -1.15;
    Puntos[25][0] = 1.1;     Puntos[25][1] = 0.75;    Puntos[25][2] = -1.15;
    Puntos[26][0] = 1.1;     Puntos[26][1] = 1.0;    Puntos[26][2] = -1.15;
    Puntos[27][0] = 1.0;     Puntos[27][1] = 1.0;    Puntos[27][2] = -1.15;
    Puntos[28][0] = 1.0;     Puntos[28][1] = 0.75;    Puntos[28][2] = -2.15;
    Puntos[29][0] = 1.1;     Puntos[29][1] = 0.75;    Puntos[29][2] = -2.15;
    Puntos[30][0] = 1.1;     Puntos[30][1] = 1.0;    Puntos[30][2] = -2.15;
    Puntos[31][0] = 1.0;     Puntos[31][1] = 1.0;    Puntos[31][2] = -2.15;
}

Camioneta::~Camioneta()
{
    //dtor
}

void Camioneta::Draw()
{
    int i, j = 0;
    glLineWidth(2);

    glColor3f(0.54f, 0.58f, 0.59f);
    for (i=0; i<8; i++)
    {
        prisAux.setPoints(Puntos[i][0],Puntos[i][1],Puntos[i][2],j);
        j++;
    }
    prisAux.Draw();

    glColor3f(1.0f, 0.0f, 0.0f);
    j = 0;
    for (i=8; i<16; i++)
    {
        prisAux.setPoints(Puntos[i][0],Puntos[i][1],Puntos[i][2],j);
        j++;
    }
    prisAux.Draw();

    j = 0;
    for (i=16; i<24; i++)
    {
        prisAux.setPoints(Puntos[i][0],Puntos[i][1],Puntos[i][2],j);
        j++;
    }
    prisAux.Draw();

    j = 0;
    glColor3f(0.54f, 0.58f, 0.59f);
    for (i=24; i<32; i++)
    {
        prisAux.setPoints(Puntos[i][0],Puntos[i][1],Puntos[i][2],j);
        j++;
    }
    prisAux.Draw();
}
