#ifndef CARRO_H
#define CARRO_H
#include "Prisma.h"

class Carro
{
    private:
            Prisma prisAux;
            float Puntos[32][3];

    public:
            Carro();
            ~Carro();
            void Draw();
};


#endif // CARRO_H
