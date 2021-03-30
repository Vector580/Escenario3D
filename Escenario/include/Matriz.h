#ifndef MATRIZ_H
#define MATRIZ_H

#include <GL/glut.h>

class Matriz
{
    public:
        Matriz();
        virtual ~Matriz();
        void LoadIdenty();
        float* getPunter();

    private:
        float M[4][4];
        float *p;
};

#endif // MATRIZ_H
