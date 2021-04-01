#ifndef CILINDRO_H
#define CILINDRO_H


class Cilindro
{
    public:
        Cilindro();
      ~Cilindro();
      void setCentro(float x, float y, float z);
      void setRadio(int radio);
      void setProfundidad(int profundidad);
      void Draw();

    private:
        float px;
        float py;
        float pz;
        int radio;
        int profundidad;
        float Puntos [360][3];

};

#endif // CILINDRO_H
