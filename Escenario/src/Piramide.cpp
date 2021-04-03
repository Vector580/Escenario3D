#include "Piramide.h"
#include <GL/glut.h>
#include <stdlib.h>

Piramide::Piramide()
{

}


Piramide::~Piramide()
{
    //dtor
}

void Piramide::setPoints(float x, float y, float z, int n)
{
   Puntos [n][0]= x;
   Puntos [n][1]= y;
   Puntos [n][2]= z;
}

void Piramide::Draw()
{
    int n, i;

    for (n=0; n < 4; n++)
    {
            glLineWidth(4.2);
        glBegin(GL_LINES);
        glVertex3f( Puntos [4][0],Puntos [4][1] ,Puntos [4][2]);
        glVertex3f( Puntos [n][0],Puntos [n][1] ,Puntos [n][2]);
        glEnd();
        if (n!=3)
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
            glVertex3f( Puntos [0][0],Puntos [0][1] ,Puntos [0][2] );
            glEnd();
        }
    }
}

