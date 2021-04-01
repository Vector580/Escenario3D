#ifndef CARRO_H
#define CARRO_H
#include "Prisma.h"
#include "Operador.h"
#include "Matriz.h"

class Carro
{
    private:
        Prisma prisAux;
        float Puntos[50][3];
        float PuntosAux[50][3];
        Matriz MatL;
        Operador *Ope;

    public:
        Carro(Operador*);
        virtual ~Carro();
        void Multiplicar();
        void Trasladar(float, float, float);
        void Escalar (float, float, float);
        void Rotar (float, float, float, float);
        void Update();
        void Draw(int);
};


#endif // CARRO_H
