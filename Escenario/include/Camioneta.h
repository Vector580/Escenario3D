#ifndef CAMIONETA_H
#define CAMIONETA_H
#include "Prisma.h"

class Camioneta
{
    private:
            Prisma prisAux;
            float Puntos[32][3];

    public:
            Camioneta();
            ~Camioneta();
            void Draw();
};

#endif // CAMIONETA_H
