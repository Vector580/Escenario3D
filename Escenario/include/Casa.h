#ifndef CASA_H
#define CASA_H
#include "Operador.h"
#include "Piramide.h"
#include "Prisma.h"

class Casa
{
    private:
        Operador *Ope;
        Prisma base;
        Piramide techo;
        float Puntos[41][3];
        float Puntos_aux[41][3];

    public:
        Casa(Operador*);
        ~Casa();
        void Draw(int color);
};

#endif // CASA_H
