#ifndef CARRO_H
#define CARRO_H
#include "Prisma.h"

class Carro
{
    private:
            Prisma prisAux;
            float Puntos[34][3];

    public:
            Carro();
            ~Carro();
            void Draw(int);
};


#endif // CARRO_H
