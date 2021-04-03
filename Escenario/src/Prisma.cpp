#include "Prisma.h"
#include <GL/glut.h>
#include <stdlib.h>

Prisma::Prisma()
{

}


Prisma::~Prisma()
{
    //dtor
}

void Prisma::setPoints(float x, float y, float z, int n)
{
   Puntos [n][0]= x;
   Puntos [n][1]= y;
   Puntos [n][2]= z;
}

void Prisma::Draw()
{
    int n, i;
    for (n=0; n < 8; n++)
    {
        glLineWidth(2);
        if (n!=3 && n!=7 )
        {
            glBegin(GL_LINES);
            glVertex3f( Puntos [n][0],Puntos [n][1] ,Puntos [n][2] );
            glVertex3f( Puntos [n+1][0],Puntos [n+1][1] ,Puntos [n+1][2]);
            glEnd();
        }
        else
        {
            if (n == 3)
            {
                glBegin(GL_LINES);
                glVertex3f( Puntos [n][0],Puntos [n][1] ,Puntos [n][2] );
                glVertex3f( Puntos [0][0],Puntos [0][1] ,Puntos [0][2] );
                glEnd();
            }
            else
            {
                glBegin(GL_LINES);
                glVertex3f( Puntos [n][0],Puntos [n][1] ,Puntos [n][2] );
                glVertex3f( Puntos [4][0],Puntos [4][1] ,Puntos [4][2] );
                glEnd();
            }
        }
        if (n < 4)
        {
            glBegin(GL_LINES);
            glVertex3f( Puntos [n][0],Puntos [n][1] ,Puntos [n][2] );
            glVertex3f( Puntos [n+4][0],Puntos [n+4][1] ,Puntos [n+4][2] );
            glEnd();
        }
    }

}
