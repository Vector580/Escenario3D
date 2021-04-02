#ifndef OBJETO_H
#define OBJETO_H

#include "Matriz.h"
#include "Operador.h"

class Objeto
{
    private:
        Matriz MatL;
        Operador *Op;
    public:
        Objeto(Operador*);
        ~Objeto();
        void Trasladar(float, float, float);
        void Escalar (float, float, float);
        void Update();
        void Draw();
};

#endif // OBJETO_H
