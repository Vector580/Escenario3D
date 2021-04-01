#include "Casa.h"

Casa::Casa(Operador *Op)
{
    //Base-prisma
    Puntos[0][0]=0;Puntos[0][1]=0;Puntos[0][2]=0;
    Puntos[1][0]=1;Puntos[1][1]=0;Puntos[1][2]=0;
    Puntos[2][0]=1;Puntos[2][1]=1;Puntos[2][2]=0;
    Puntos[3][0]=0;Puntos[3][1]=1;Puntos[3][2]=0;
    Puntos[4][0]=0;Puntos[4][1]=0;Puntos[4][2]=-1;
    Puntos[5][0]=1;Puntos[5][1]=0;Puntos[5][2]=-1;
    Puntos[6][0]=1;Puntos[6][1]=1;Puntos[6][2]=-1;
    Puntos[7][0]=0;Puntos[7][1]=1;Puntos[7][2]=-1;

    //Techo-piramide
    Puntos[8][0]=-0.25;Puntos[8][1]=1;Puntos[8][2]=0.25;
    Puntos[9][0]=1.25;Puntos[9][1]=1;Puntos[9][2]=0.25;
    Puntos[10][0]=1.25;Puntos[10][1]=1;Puntos[10][2]=-1.25;
    Puntos[11][0]=-0.25;Puntos[11][1]=1;Puntos[11][2]=-1.25;
    Puntos[12][0]=0.5;Puntos[12][1]=1.5;Puntos[12][2]=-0.5;

    //Puerta
    Puntos[13][0]=0.2;Puntos[13][1]=0;Puntos[13][2]=0;
    Puntos[14][0]=0.2;Puntos[14][1]=0.35;Puntos[14][2]=0;
    Puntos[15][0]=0.45;Puntos[15][1]=0.35;Puntos[15][2]=0;
    Puntos[16][0]=0.45;Puntos[16][1]=0;Puntos[16][2]=0;

    //Ventana frontal
    Puntos[17][0]=0.55;Puntos[17][1]=0.5;Puntos[17][2]=0;
    Puntos[18][0]=0.55;Puntos[18][1]=0.8;Puntos[18][2]=0;
    Puntos[19][0]=0.85;Puntos[19][1]=0.8;Puntos[19][2]=0;
    Puntos[20][0]=0.85;Puntos[20][1]=0.5;Puntos[20][2]=0;



    //Ventana derecha
    Puntos[21][0]=1;Puntos[21][1]=0.3;Puntos[21][2]=-0.2;
    Puntos[22][0]=1;Puntos[22][1]=0.75;Puntos[22][2]=-0.2;
    Puntos[23][0]=1;Puntos[23][1]=0.75;Puntos[23][2]=-0.8;
    Puntos[24][0]=1;Puntos[24][1]=0.3;Puntos[24][2]=-0.8;

    //Ventana izquierda
    Puntos[25][0]=0;Puntos[25][1]=0.3;Puntos[25][2]=-0.2;
    Puntos[26][0]=0;Puntos[26][1]=0.75;Puntos[26][2]=-0.2;
    Puntos[27][0]=0;Puntos[27][1]=0.75;Puntos[27][2]=-0.8;
    Puntos[28][0]=0;Puntos[28][1]=0.3;Puntos[28][2]=-0.8;

    //Cruz ventana frontal
    Puntos[29][0]=0.7;Puntos[29][1]=0.5;Puntos[29][2]=0;
    Puntos[30][0]=0.7;Puntos[30][1]=0.8;Puntos[30][2]=0;
    Puntos[31][0]=0.55;Puntos[31][1]=0.65;Puntos[31][2]=0;
    Puntos[32][0]=0.85;Puntos[32][1]=0.65;Puntos[32][2]=0;

     //Cruz ventana derecha
    Puntos[33][0]=1;Puntos[33][1]=0.3;Puntos[33][2]=-0.5;
    Puntos[34][0]=1;Puntos[34][1]=0.75;Puntos[34][2]=-0.5;
    Puntos[35][0]=1;Puntos[35][1]=0.525;Puntos[35][2]=-0.2;
    Puntos[36][0]=1;Puntos[36][1]=0.525;Puntos[36][2]=-0.8;

     //Cruz ventana derecha
    Puntos[37][0]=0;Puntos[37][1]=0.3;Puntos[37][2]=-0.5;
    Puntos[38][0]=0;Puntos[38][1]=0.75;Puntos[38][2]=-0.5;
    Puntos[39][0]=0;Puntos[39][1]=0.525;Puntos[39][2]=-0.2;
    Puntos[40][0]=0;Puntos[40][1]=0.525;Puntos[40][2]=-0.8;


    //Reincio de puntos
    for (int i=0;i<41;i++)
        for (int j=0;j<4;j++)
            Puntos_aux[i][j]=Puntos[i][j];
    Ope=Op;
}

Casa::~Casa()
{
    //dtor
}

void Casa:: Trasladar(float x, float y, float z)
{
    Ope->trasladar(x,y,z);
}
void Casa:: Escalar (float escX, float escY, float escZ)
{
    Ope->escalar(escX,escY,escZ);
}
void Casa:: Rotar (float grade, float angx, float angy, float angz)
{
    Ope->rotar(grade, angx, angy, angz);
}
void Casa::Multiplicar()
{
    Ope->multiplicar(Puntos_aux,41);

}
void Casa:: Update()
{

}
void Casa:: Draw()
{

    Ope->multiplicar(Puntos_aux,41);

    int n,j;
    //REducior con ciclos
     for(int i=0;i<8;i++)
        base.setPoints(Puntos_aux[i][0],Puntos_aux[i][1],Puntos_aux[i][2],i);
    base.Draw();

    techo.setPoints(Puntos_aux[8][0],Puntos_aux[8][1],Puntos_aux[8][2],0);
    techo.setPoints(Puntos_aux[9][0],Puntos_aux[9][1],Puntos_aux[9][2],1);
    techo.setPoints(Puntos_aux[10][0],Puntos_aux[10][1],Puntos_aux[10][2],2);
    techo.setPoints(Puntos_aux[11][0],Puntos_aux[11][1],Puntos_aux[11][2],3);
    techo.setPoints(Puntos_aux[12][0],Puntos_aux[12][1],Puntos_aux[12][2],4);
    techo.Draw();

    for(n=13;n<=16;n++){
        if (n!=16)
        {
            glBegin(GL_LINES);
            glVertex3fv( Puntos_aux[n]);
            glVertex3fv( Puntos_aux[n+1]);
            glEnd();
        }
        else
        {
            glBegin(GL_LINES);
            glVertex3fv( Puntos_aux[n]);
            glVertex3fv( Puntos_aux[13]);
            glEnd();
        }
    }

    for(n=17;n<=20;n++){
        if (n!=20)
        {
            glBegin(GL_LINES);
            glVertex3fv( Puntos_aux[n]);
            glVertex3fv( Puntos_aux[n+1]);
            glEnd();
        }
        else
        {
            glBegin(GL_LINES);
            glVertex3fv( Puntos_aux[n]);
            glVertex3fv( Puntos_aux[17]);
            glEnd();
        }
    }

    for(n=21;n<=24;n++){
        if (n!=24)
        {
            glBegin(GL_LINES);
            glVertex3fv( Puntos_aux[n]);
            glVertex3fv( Puntos_aux[n+1]);
            glEnd();
        }
        else
        {
            glBegin(GL_LINES);
            glVertex3fv( Puntos_aux[n]);
            glVertex3fv( Puntos_aux[21]);
            glEnd();
        }
    }

    for(n=25;n<=28;n++){
        if (n!=28)
        {
            glBegin(GL_LINES);
            glVertex3fv(Puntos_aux[n]);
            glVertex3fv(Puntos_aux[n+1]);
            glEnd();
        }
        else
        {
            glBegin(GL_LINES);
            glVertex3fv( Puntos_aux[n]);
            glVertex3fv( Puntos_aux[25]);
            glEnd();
        }
    }
    //Cruz de ventana frontal
    glBegin(GL_LINES);
            glVertex3fv( Puntos_aux[29]);
            glVertex3fv( Puntos_aux[30]);
    glEnd();

    glBegin(GL_LINES);
            glVertex3fv( Puntos_aux[31] );
            glVertex3fv( Puntos_aux[32] );
    glEnd();

    //Cruz de ventana deracha
    glBegin(GL_LINES);
            glVertex3fv( Puntos_aux[33]);
            glVertex3fv( Puntos_aux[34] );
    glEnd();

    glBegin(GL_LINES);
            glVertex3fv( Puntos_aux[35]);
            glVertex3fv( Puntos_aux[36]);
    glEnd();

    //Cruz de ventana izquierda
    glBegin(GL_LINES);
            glVertex3fv( Puntos_aux[37]);
            glVertex3fv( Puntos_aux[38]);
    glEnd();

    glBegin(GL_LINES);
            glVertex3fv( Puntos_aux[39]);
            glVertex3fv( Puntos_aux[40] );
    glEnd();

    for (int i=0;i<41;i++)
        for (int j=0;j<4;j++)
            Puntos_aux[i][j]=Puntos[i][j];
}
