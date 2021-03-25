#ifndef OPERADOR_H
#define OPERADOR_H

#include<stdlib.h>
#include<stack>
#include<math.h>
#include "iostream"
#include<Matriz.h>

class Operador
{
    public:
        Operador();
        virtual ~Operador();
        void LoadIdenty(float M[][4]);
        void LoadIdenty();
        void translate(float tx, float ty, float tz);
        void scale(float sx, float sy, float sz);
        void rotate(float grade, float tx, float ty, float tz);




    private:
        float A[4][4];


};

#endif // OPERADOR_H
