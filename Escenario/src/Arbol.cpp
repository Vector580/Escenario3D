#include "Arbol.h"

Arbol::Arbol()
{
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
   Puntos[16][0]=-4; Puntos[16][1]=-4; Puntos[16][2]=6;
   /*
   Puntos[17][0]=; Puntos[17][1]=; Puntos[17][2]=;
   Puntos[18][0]=; Puntos[18][1]=; Puntos[18][2]=;
   Puntos[19][0]=; Puntos[19][1]=; Puntos[19][2]=;
   Puntos[20][0]=; Puntos[20][1]=; Puntos[20][2]=;
   Puntos[21][0]=; Puntos[21][1]=; Puntos[21][2]=;
   Puntos[22][0]=; Puntos[22][1]=; Puntos[22][2]=;
   Puntos[23][0]=; Puntos[23][1]=; Puntos[23][2]=;
   Puntos[24][0]=; Puntos[24][1]=; Puntos[24][2]=;
   Puntos[25][0]=; Puntos[25][1]=; Puntos[25][2]=;
   Puntos[26][0]=; Puntos[26][1]=; Puntos[26][2]=;
   Puntos[27][0]=; Puntos[27][1]=; Puntos[27][2]=;
   Puntos[28][0]=; Puntos[28][1]=; Puntos[28][2]=;
   Puntos[29][0]=; Puntos[29][1]=; Puntos[29][2]=;
   Puntos[30][0]=; Puntos[30][1]=; Puntos[30][2]=;
   Puntos[31][0]=; Puntos[31][1]=; Puntos[31][2]=;
   Puntos[32][0]=; Puntos[32][1]=; Puntos[32][2]=;
   Puntos[33][0]=; Puntos[33][1]=; Puntos[33][2]=;
   Puntos[34][0]=; Puntos[34][1]=; Puntos[34][2]=;
   Puntos[35][0]=; Puntos[35][1]=; Puntos[35][2]=;
   Puntos[36][0]=; Puntos[36][1]=; Puntos[36][2]=;
   Puntos[37][0]=; Puntos[37][1]=; Puntos[37][2]=;
   Puntos[38][0]=; Puntos[38][1]=; Puntos[38][2]=;
   Puntos[39][0]=; Puntos[39][1]=; Puntos[39][2]=;
   Puntos[40][0]=; Puntos[40][1]=; Puntos[40][2]=;
   Puntos[41][0]=; Puntos[41][1]=; Puntos[41][2]=;
   Puntos[42][0]=; Puntos[42][1]=; Puntos[42][2]=;
   Puntos[43][0]=; Puntos[43][1]=; Puntos[43][2]=;
   Puntos[44][0]=; Puntos[44][1]=; Puntos[44][2]=;
   Puntos[45][0]=; Puntos[45][1]=; Puntos[45][2]=;
   Puntos[46][0]=; Puntos[46][1]=; Puntos[46][2]=;
   Puntos[47][0]=; Puntos[47][1]=; Puntos[47][2]=;
   Puntos[48][0]=; Puntos[48][1]=; Puntos[48][2]=;
   Puntos[49][0]=; Puntos[49][1]=; Puntos[49][2]=;
   Puntos[50][0]=; Puntos[50][1]=; Puntos[50][2]=;
   Puntos[51][0]=; Puntos[51][1]=; Puntos[51][2]=;
   Puntos[52][0]=; Puntos[52][1]=; Puntos[52][2]=;*/
}

Arbol::~Arbol()
{
    //dtor
}
