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
        Operador *Op;
        Prisma base;
        Piramide techo;
        float Puntos[40][3];
        float Puntos_aux[40][3];

    public:
        Casa(Operador*);
        ~Casa();
        void Trasladar(float, float, float);
        void Escalar (float, float, float);
        void Rotar (float, float, float, float);
        void Multiplicar();
        void Update();
        void Draw();
};

#endif // CASA_H
