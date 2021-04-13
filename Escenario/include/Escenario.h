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
        float aumentoSol=0;
        float avanzar[4];
        float carril1[5][3]={{425,808.27,-90},
                             {425,391.67,-90},
                             {233.66,90,0},
                             {-100,90,0},
                             {-433.33,90,0}};
        float carril2[5][3]={{-849.93,-90,180},
                             {-433.33,-90,180},
                             {-100,-90,180},
                             {233.66,-90,180},
                             {425,-391.67,270}};
        float viento[13]={25,50,45,0,-15,-25,-40,-25,-50,-45,15,30,40};
};

#endif // ESCENARIO_H
