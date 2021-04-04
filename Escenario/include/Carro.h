#ifndef CARRO_H
#define CARRO_H
#include "Prisma.h"
#include "Operador.h"
#include "Cilindro.h"

class Carro
{
    private:
        Prisma prisAux;
        float Puntos[48][3];
        float PuntosAux[48][3];
        Operador *Ope;
        Cilindro cilin;

    public:
        Carro(Operador*);
        virtual ~Carro();
        void Update();
        void Draw(int);
};


#endif // CARRO_H
