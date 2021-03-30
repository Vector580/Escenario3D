#ifndef PIRAMIDE_H
#define PIRAMIDE_H


class Piramide
{
    private:
        float Puntos[5][3];

    public:
        Piramide();
        ~Piramide();
        void setPoints(float,float,float,int);
        void Draw();
};

#endif // PIRAMIDE_H
