#ifndef CILINDRO_H
#define CILINDRO_H
#include "Operador.h"

class Cilindro
{
    public:
        Cilindro();
        Cilindro(Operador*);
      ~Cilindro();
      void setApunter(Operador*);
      void setCentro(float x, float y, float z);
      void setRadio(float radio);
      void setProfundidad(float profundidad);
      void Draw();

    private:
        Operador *Ope;
        float px;
        float py;
        float pz;
        float radio;
        float profundidad;
        float Puntos [360][3];

};

#endif // CILINDRO_H
