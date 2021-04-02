#ifndef OPERADOR_H
#define OPERADOR_H


#include <GL/glut.h>
#include<stdlib.h>
#include <stdio.h>
#include <stack>
#include<math.h>
#include "iostream"
#include "Matriz.h"

class Operador
{
    private:
        Matriz A;
        float *Ap;
        std::stack<Matriz> pila;

    public:
        Operador();
        virtual ~Operador();
        void LoadIdenty();
        void LoadIdenty(float M[][4]);
        void trasladar(float tx, float ty, float tz);
        void escalar(float sx, float sy, float sz);
        //void rotar(float grade, float tx, float ty, float tz);
        void rotarlib(float, float, float, float,float , float, float);
        void rotarX(float grade);
        void rotarY(float grade);
        void rotarZ(float grade);
        void multiplicar(float vert[][3],int tam);
        void push();
        void pop();
        void imprimir();
};

#endif // OPERADOR_H
