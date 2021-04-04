#include "Escenario.h"

Escenario::Escenario()
{
    avanzar[0]=391.67;
    avanzar[1]=-24.93;
    avanzar[2]=-441.53;
    avanzar[3]=-858.13;
}

Escenario::~Escenario()
{
    //dtor
}

void Escenario::draw()
{
    glLineWidth(2);
    opera->LoadIdenty();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(6,0,-5);//
    casa_base->Draw(1);

    //opera->LoadIdenty();
    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(3.5,0,-8);//
    casa_base->Draw(2);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(3,0,-6);//
    casa_base->Draw(3);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(1,0,-13);//
    casa_base->Draw(4);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(0,0,-7);//
    casa_base->Draw(5);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(-2,0,-12);//
    casa_base->Draw(1);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(-3.5,0,-7);//
    casa_base->Draw(2);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(-6.5,0,-5.5);//
    casa_base->Draw(3);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(-7,0,-8.5);//
    casa_base->Draw(4);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(-10,0,-13);//
    casa_base->Draw(5);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(-10,0,-9);//
    casa_base->Draw(1);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(-14,0,-13);//
    casa_base->Draw(2);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(-12.5,0,-7);//
    casa_base->Draw(3);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(-6.5,0,-12.5);
    casa_base->Draw(4);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(-4.9,0,-12);
    casa_base->Draw(5);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(6,0,-10);
    casa_base->Draw(1);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(4,0,-11);
    casa_base->Draw(2);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(-3.8,0,-9.5);
    casa_base->Draw(3);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(5,0,-13.5);
    casa_base->Draw(4);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(7,0,5);
    casa_base->Draw(1);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(3.5,0,8);
    casa_base->Draw(2);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(3,0,6);
    casa_base->Draw(3);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(1,0,13);
    casa_base->Draw(4);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(0,0,7);
    casa_base->Draw(5);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(-2,0,12);
    casa_base->Draw(1);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(-3.5,0,7);
    casa_base->Draw(2);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(-6.5,0,5.5);
    casa_base->Draw(2);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(-7,0,8.5);
    casa_base->Draw(3);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(-10,0,13);
    casa_base->Draw(1);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(-10,0,9);
    casa_base->Draw(2);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(-14,0,13);
    casa_base->Draw(3);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(-12.5,0,7);
    casa_base->Draw(1);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(-6.5,0,12.5);
    casa_base->Draw(2);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(2,0,-10);
    casa_base->Draw(3);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(-4,0,-14);
    casa_base->Draw(3);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(-12,0,-14.5);
    casa_base->Draw(3);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(2,0,10);
    casa_base->Draw(1);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(-4,0,14);
    casa_base->Draw(2);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(4,0,11);
    casa_base->Draw(2);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(-3.8,0,9.5);
    casa_base->Draw(3);

    opera->pop();
    opera->push();
    opera->escalar(40,40,40);
    opera->trasladar(5,0,13.5);
    casa_base->Draw(4);

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(0,0,90);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(5,0,65);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(5,0,65);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(-90,0,-25);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(-10,0,-30);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(60,0,-25);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(60,0,45);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(0,0,30);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(60,0,-60);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(50,0,-80);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(7,7,7);
    opera->trasladar(0,0,-65);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(20,0,-85);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(35,0,-25);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(-55,0,-40);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(-55,0,-75);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(-10,0,-95);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(40,0,-55);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(-90,0,-55);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(-80,0,-75);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(-90,0,55);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(-70,0,75);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(-70,0,32);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(37,0,32);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(60,0,90);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(40,0,70);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(-20,0,30);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(-30,0,70);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(-50,0,70);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(45,0,55);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(120,0,0);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(110,0,-20);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(110,0,-50);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(115,0,70);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.5,6.05,6.5);
    opera->trasladar(120,0,50);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.0,6.0,6.0);
    opera->trasladar(115,0,30);
    arb->Draw();

    //NUBES
    opera->pop();
    opera->push();
    opera->escalar(12,12,12);
    opera->trasladar(0,20,25);
    nub->Draw();

    opera->pop();
    opera->push();
    opera->escalar(10,10,10);
    opera->trasladar(viento,15,50);
    nub->Draw();

    opera->pop();
    opera->push();
    opera->escalar(10,10,10);
    opera->trasladar(60,20,45);
    nub->Draw();

    opera->pop();
    opera->push();
    opera->escalar(10,10,10);
    opera->trasladar(90,15,-0);
    nub->Draw();

    opera->pop();
    opera->push();
    opera->escalar(10,10,10);
    opera->trasladar(-30,15,-15);
    nub->Draw();

    opera->pop();
    opera->push();
    opera->escalar(10,10,10);
    opera->trasladar(-60,20,-25);
    nub->Draw();

    opera->pop();
    opera->push();
    opera->escalar(10,10,10);
    opera->trasladar(-90,15,-40);
    nub->Draw();

    //
    opera->pop();
    opera->push();
    opera->escalar(10,10,10);
    opera->trasladar(0,20,-25);
    nub->Draw();

    opera->pop();
    opera->push();
    opera->escalar(7,7,7);
    opera->trasladar(30,15,-50);
    nub->Draw();

    opera->pop();
    opera->push();
    opera->escalar(12,12,12);
    opera->trasladar(60,20,-45);
    nub->Draw();


    opera->pop();
    opera->push();
    opera->escalar(8,8,8);
    opera->trasladar(-30,15,15);
    nub->Draw();

    opera->pop();
    opera->push();
    opera->escalar(5,5,5);
    opera->trasladar(-60,35,30);
    nub->Draw();

    opera->pop();
    opera->push();
    opera->escalar(10,10,10);
    opera->trasladar(-90,15,40);
    nub->Draw();

    //CAMIONETAS
    opera->pop();
    opera->push();
    opera->trasladar(625,0,avanzar[0]);
    opera->escalar(18,18,18);
    opera->rotarY(90);
    carro1->Draw(4);

    opera->pop();
    opera->push();
    opera->trasladar(625,0,avanzar[1]);
    opera->escalar(18,18,18);
    opera->rotarY(90);
    camioneta1->Draw(5);

    opera->pop();
    opera->push();
    opera->trasladar(625,0,avanzar[2]);
    opera->escalar(18,18,18);
    opera->rotarY(90);
    carro1->Draw(1);

    opera->pop();
    opera->push();
    opera->trasladar(625,0,avanzar[3]);
    opera->escalar(18,18,18);
    opera->rotarY(90);
    camioneta1->Draw(2);

    opera->pop();//1
    opera->push();
    opera->trasladar(425,0,391.67);
    opera->escalar(18,18,18);
    opera->rotarY(270);
    carro1->Draw(3);

    opera->pop();//2
    opera->push();
    opera->trasladar(233.66,0,90);
    opera->escalar(18,18,18);
    camioneta1->Draw(1);


    opera->pop();//3
    opera->push();
    opera->trasladar(-100.00,0,90);
    opera->escalar(18,18,18);
    carro1->Draw(5);

    opera->pop();//4
    opera->push();
    opera->trasladar(-433.33,0,90);
    opera->escalar(18,18,18);
    camioneta1->Draw(4);

    opera->pop();//5
    opera->push();
    opera->trasladar(-433.33,0,-90);
    opera->escalar(18,18,18);
    opera->rotarY(180);
    carro1->Draw(2);

    opera->pop();//6
    opera->push();
    opera->trasladar(-100.00,0,-90);
    opera->escalar(18,18,18);
    opera->rotarY(180);
    camioneta1->Draw(3);

    opera->pop();//7
    opera->push();
    opera->trasladar(233.66,0,-90);
    opera->escalar(18,18,18);
    opera->rotarY(180);
    carro1->Draw(4);

    opera->pop();//8
    opera->push();
    opera->trasladar(425,0,-391.67);
    opera->escalar(18,18,18);
    opera->rotarY(270);
    camioneta1->Draw(5);

    //carretera
    glColor3f(0.54f, 0.58f, 0.59f);
    glBegin(GL_LINES);
    glVertex3f(400,0,125);
    glVertex3f(400,0,600);
    glVertex3f(0,0,0);
    glEnd();

    glBegin(GL_LINES);
    glVertex3f(-600,0,125);
    glVertex3f(400,0,125);
    glVertex3f(0,0,0);
    glEnd();

    glBegin(GL_LINES);
    glVertex3f(400,0,-125);
    glVertex3f(400,0,-600);
    glVertex3f(0,0,0);
    glEnd();

    glBegin(GL_LINES);
    glVertex3f(-600,0,-125);
    glVertex3f(400,0,-125);
    glVertex3f(0,0,0);
    glEnd();

    glBegin(GL_LINES);
    glVertex3f(650,0,-600);
    glVertex3f(650,0,600);
    glVertex3f(0,0,0);
    glEnd();

    //LINEAS DE LA CARRETERA
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_LINES);
    int i;
    for (i=-600; i<650; i=i+20)
    glVertex3f(525,0,i);
    glVertex3f(525,0,i+10);
    glEnd();

    glBegin(GL_LINES);
    for (i=-600; i<500; i=i+20)
    glVertex3f(i,0,0);
    glVertex3f(i+10,0,0);
    glEnd();
}

void Escenario::update()
{
    int i;
    for(i=0;i<4;i++)
    {
        if(avanzar[i]<808.27)
            avanzar[i]++;
        else
            avanzar[i]=-858.13;
    }
}
