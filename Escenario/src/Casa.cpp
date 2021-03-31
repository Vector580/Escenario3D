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



}

Casa::~Casa()
{
    //dtor
}

void Casa:: Trasladar(float x, float y, float z)
{
    Op->trasladar(x,y,z);
}
void Casa:: Escalar (float escX, float escY, float escZ)
{
    Op->escalar(escX,escY,escZ);
}
void Casa:: Rotar (float grade, float angx, float angy, float angz)
{
    Op->rotar(grade, angx, angy, angz);
}
void Casa:: Update()
{

}
void Casa:: Draw()
{
    int n,j;
    //REducior con ciclos
    base.setPoints(Puntos[0][0],Puntos[0][1],Puntos[0][2],0);
    base.setPoints(Puntos[1][0],Puntos[1][1],Puntos[1][2],1);
    base.setPoints(Puntos[2][0],Puntos[2][1],Puntos[2][2],2);
    base.setPoints(Puntos[3][0],Puntos[3][1],Puntos[3][2],3);
    base.setPoints(Puntos[4][0],Puntos[4][1],Puntos[4][2],4);
    base.setPoints(Puntos[5][0],Puntos[5][1],Puntos[5][2],5);
    base.setPoints(Puntos[6][0],Puntos[6][1],Puntos[6][2],6);
    base.setPoints(Puntos[7][0],Puntos[7][1],Puntos[7][2],7);
    base.Draw();

    techo.setPoints(Puntos[8][0],Puntos[8][1],Puntos[8][2],0);
    techo.setPoints(Puntos[9][0],Puntos[9][1],Puntos[9][2],1);
    techo.setPoints(Puntos[10][0],Puntos[10][1],Puntos[10][2],2);
    techo.setPoints(Puntos[11][0],Puntos[11][1],Puntos[11][2],3);
    techo.setPoints(Puntos[12][0],Puntos[12][1],Puntos[12][2],4);
    techo.Draw();

    for(n=13;n<=16;n++){
        if (n!=16)
        {
            glBegin(GL_LINES);
            glVertex3f( Puntos [n][0],Puntos [n][1] ,Puntos [n][2] );
            glVertex3f( Puntos [n+1][0],Puntos [n+1][1] ,Puntos [n+1][2]);
            glEnd();
        }
        else
        {
            glBegin(GL_LINES);
            glVertex3f( Puntos [n][0],Puntos [n][1] ,Puntos [n][2] );
            glVertex3f( Puntos [13][0],Puntos [13][1] ,Puntos [13][2] );
            glEnd();
        }
    }

    for(n=17;n<=20;n++){
        if (n!=20)
        {
            glBegin(GL_LINES);
            glVertex3f( Puntos [n][0],Puntos [n][1] ,Puntos [n][2] );
            glVertex3f( Puntos [n+1][0],Puntos [n+1][1] ,Puntos [n+1][2]);
            glEnd();
        }
        else
        {
            glBegin(GL_LINES);
            glVertex3f( Puntos [n][0],Puntos [n][1] ,Puntos [n][2] );
            glVertex3f( Puntos [17][0],Puntos [17][1] ,Puntos [17][2] );
            glEnd();
        }
    }

    for(n=21;n<=24;n++){
        if (n!=24)
        {
            glBegin(GL_LINES);
            glVertex3f( Puntos [n][0],Puntos [n][1] ,Puntos [n][2] );
            glVertex3f( Puntos [n+1][0],Puntos [n+1][1] ,Puntos [n+1][2]);
            glEnd();
        }
        else
        {
            glBegin(GL_LINES);
            glVertex3f( Puntos [n][0],Puntos [n][1] ,Puntos [n][2] );
            glVertex3f( Puntos [21][0],Puntos [21][1] ,Puntos [21][2] );
            glEnd();
        }
    }

    for(n=25;n<=28;n++){
        if (n!=28)
        {
            glBegin(GL_LINES);
            glVertex3f( Puntos [n][0],Puntos [n][1] ,Puntos [n][2] );
            glVertex3f( Puntos [n+1][0],Puntos [n+1][1] ,Puntos [n+1][2]);
            glEnd();
        }
        else
        {
            glBegin(GL_LINES);
            glVertex3f( Puntos [n][0],Puntos [n][1] ,Puntos [n][2] );
            glVertex3f( Puntos [25][0],Puntos [25][1] ,Puntos [25][2] );
            glEnd();
        }
    }
    //Cruz de ventana frontal
    glBegin(GL_LINES);
            glVertex3f( Puntos [29][0],Puntos [29][1] ,Puntos [29][2] );
            glVertex3f( Puntos [30][0],Puntos [30][1] ,Puntos [30][2] );
    glEnd();

    glBegin(GL_LINES);
            glVertex3f( Puntos [31][0],Puntos [31][1] ,Puntos [31][2] );
            glVertex3f( Puntos [32][0],Puntos [32][1] ,Puntos [32][2] );
    glEnd();

    //Cruz de ventana deracha
    glBegin(GL_LINES);
            glVertex3f( Puntos [33][0],Puntos [33][1] ,Puntos [33][2] );
            glVertex3f( Puntos [34][0],Puntos [34][1] ,Puntos [34][2] );
    glEnd();

    glBegin(GL_LINES);
            glVertex3f( Puntos [35][0],Puntos [35][1] ,Puntos [35][2] );
            glVertex3f( Puntos [36][0],Puntos [36][1] ,Puntos [36][2] );
    glEnd();

    //Cruz de ventana izquierda
    glBegin(GL_LINES);
            glVertex3f( Puntos [37][0],Puntos [37][1] ,Puntos [37][2] );
            glVertex3f( Puntos [38][0],Puntos [38][1] ,Puntos [38][2] );
    glEnd();

    glBegin(GL_LINES);
            glVertex3f( Puntos [39][0],Puntos [39][1] ,Puntos [39][2] );
            glVertex3f( Puntos [40][0],Puntos [40][1] ,Puntos [40][2] );
    glEnd();


}
