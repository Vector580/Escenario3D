#ifndef ESCENARIO_H
#define ESCENARIO_H

#include <GL/glut.h>
#include <stdlib.h>
#include "Prisma.h"
#include "Piramide.h"
#include "Casa.h"
#include "Camioneta.h"
#include "Carro.h"
#include "Arbol.h"
#include "Cilindro.h"
#include "Sol.h"
#include "Nube.h"
#include "Operador.h"
class Escenario
{
    public:
        Escenario();
        virtual ~Escenario();
        void draw();
        void update();

    private:
        Operador* opera = new Operador();
        Casa* casa_base = new Casa(opera);
        Camioneta* camioneta1 = new Camioneta(opera);
        Carro* carro1 = new Carro(opera);
        Arbol* arb = new Arbol(opera);
        Cilindro* cilin = new Cilindro(opera);
        Sol* sol = new Sol(opera);
        Nube* nub = new Nube(opera);
        float avanzar[4];
        float carril1[5][3]={{425,808.27,270},
                             {425,391.67,270},
                             {233.66,90,0},
                             {-100,90,0},
                             {-433.33,90,0}};
        float ang=0;
};

#endif // ESCENARIO_H
