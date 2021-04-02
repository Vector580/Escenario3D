#ifndef ARBOL_H
#define ARBOL_H
#include "Matriz.h"
#include "Prisma.h"
#include "Operador.h"


class Arbol //: public Objeto
{
    public:
        Arbol(Operador*);
        virtual ~Arbol();
        void Multiplicar();
        void Trasladar(float, float, float);
        void Escalar (float, float, float);
        void Update();
        void Draw();

    private:
        Matriz MatL;
        Operador *Ope;
        Prisma tronco;
        float Puntos[51][3];
        float aux[51][3];
};

#endif // ARBOL_H
