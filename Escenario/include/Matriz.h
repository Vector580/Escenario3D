#ifndef MATRIZ_H
#define MATRIZ_H

#include <GL/glut.h>
#include <stdio.h>
class Matriz
{
    public:
        Matriz();
        virtual ~Matriz();
        void LoadIdenty();
        float* getPunter();

    private:
        float M[4][4]; //Matriz
        float *p;      //Apuntador de la primera posicion de la matriz
};

#endif // MATRIZ_H
