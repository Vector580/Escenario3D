#ifndef CAMIONETA_H
#define CAMIONETA_H
#include "Prisma.h"

class Camioneta
{
    private:
            Prisma prisAux;
            float Puntos[36][3];

    public:
            Camioneta();
            ~Camioneta();
            void Draw(int);
};

#endif // CAMIONETA_H
