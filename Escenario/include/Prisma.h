#ifndef PRISMA_H
#define PRISMA_H


class Prisma
{
    private:
        float Puntos[8][3];

    public:
        Prisma();
        ~Prisma();
        void setPoints(float,float,float,int);
        void Draw();
};

#endif // PRISMA_H
