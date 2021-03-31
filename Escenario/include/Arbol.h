#ifndef ARBOL_H
#define ARBOL_H
#include "Matriz.h"
#include "Prisma.h"
#include "Operador.h"


class Arbol //: public Objeto
{
    public:
        Arbol();
        virtual ~Arbol();
        void Trasladar(float, float, float);
        void Escalar (float, float, float);
        void Rotar (float, float, float, float);
        void Update();
        void Draw();

    private:
        Matriz MatL;
        Operador *Op;
        Prisma tronco;
        float Puntos[52][3];
};

#endif // ARBOL_H
