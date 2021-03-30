#ifndef OPERADOR_H
#define OPERADOR_H


#include <GL/glut.h>
#include<stdlib.h>
#include <stack>
#include<math.h>
#include "iostream"
#include <Matriz.h>

class Operador
{
    private:
        Matriz A;
        float *Ap;
        stack<Matriz> pila;

    public:
        Operador();
        virtual ~Operador();
        void LoadIdenty();
        void LoadIdenty(float M[][4]);
        void trasladar(float tx, float ty, float tz);
        void escalar(float sx, float sy, float sz);
        void rotar(float grade, float tx, float ty, float tz);
        void push();
        void pop();
};

#endif // OPERADOR_H
