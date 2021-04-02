#ifndef CAMIONETA_H
#define CAMIONETA_H
#include "Prisma.h"
#include "Operador.h"
#include "Matriz.h"
#include "Cilindro.h"

class Camioneta
{
    private:
        Prisma prisAux;
        float Puntos[48][3];
        float PuntosAux[48][3];
        Operador *Ope;

    public:
        Cilindro cilin;
        Camioneta(Operador*);
        virtual ~Camioneta();
        void Update();
        void Draw(int);
};

#endif // CAMIONETA_H
