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
        Matriz MatL;
        Operador *Ope;

    public:
        Cilindro cilin;
        Camioneta(Operador*);
        virtual ~Camioneta();
        void Multiplicar();
        void Trasladar(float, float, float);
        void Escalar (float, float, float);
        void Rotar (float, float, float, float);
        void Update();
        void Draw(int);
};

#endif // CAMIONETA_H
