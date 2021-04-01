#ifndef CASA_H
#define CASA_H
#include "Matriz.h"
#include "Operador.h"
#include "Piramide.h"
#include "Prisma.h"

class Casa
{
    private:
        Matriz MatL;
        Operador *Ope;
        Prisma base;
        Piramide techo;
        float Puntos[41][3];
        float Puntos_aux[41][3];

    public:
        Casa(Operador*);
        ~Casa();
        void Trasladar(float, float, float);
        void Escalar (float, float, float);
        void Rotar (float, float, float, float);
        void Multiplicar();
        void Update();
        void Draw(int color);
};

#endif // CASA_H
