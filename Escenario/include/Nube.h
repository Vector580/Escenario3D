#ifndef NUBE_H
#define NUBE_H

#include "Operador.h"
class Nube
{
    public:
        Nube(Operador*);
        virtual ~Nube();
        void Draw();

    protected:
        Operador *Ope;
        float Puntos[16][3];
        float aux[16][3];
};

#endif // NUBE_H
