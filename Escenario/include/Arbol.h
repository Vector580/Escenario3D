#ifndef ARBOL_H
#define ARBOL_H
#include "Prisma.h"
#include "Operador.h"


class Arbol //: public Objeto
{
    public:
        Arbol(Operador*);
        Arbol();
        virtual ~Arbol();
        void setPunter(Operador*);
        void Draw();

    private:
        Operador *Ope;
        Prisma tronco;
        float Puntos[51][3];
        float aux[51][3];
};

#endif // ARBOL_H
