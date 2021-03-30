#ifndef MATRIZ_H
#define MATRIZ_H

#include <GL/glut.h>

class Matriz
{
    public:
        Matriz();
        virtual ~Matriz();


    private:
        float M[4][4];
};

#endif // MATRIZ_H
