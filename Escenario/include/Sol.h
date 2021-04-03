#ifndef SOL_H
#define SOL_H
#include"Operador.h"
#include "Cilindro.h"

class Sol
{
    public:
        Sol(Operador*);
        ~Sol();
        void Update();
        void Draw();


    private:        //Matriz MatL;
        Operador *Ope;
        float Puntos[360][3];
        float px;
        float py;
        float pz;
        int radio;
        int profundidad;
        Cilindro cilin;
};

#endif // SOL_H
