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
    opera->escalar(40,40,40);
    opera->push();

    opera->trasladar(6,0,-5);//
    casa_base->Draw(1);
    opera->pop();

    opera->push();
    opera->trasladar(3.5,0,-8);//
    casa_base->Draw(2);
    opera->pop();

    opera->push();
    opera->trasladar(3,0,-6);//
    casa_base->Draw(3);
    opera->pop();

    opera->push();
    opera->trasladar(1,0,-13);//
    casa_base->Draw(4);
    opera->pop();

    opera->push();
    opera->trasladar(0,0,-7);//
    casa_base->Draw(5);
    opera->pop();

    opera->push();
    opera->trasladar(-2,0,-12);//
    casa_base->Draw(1);
    opera->pop();

    opera->push();
    opera->trasladar(-3.5,0,-7);//
    casa_base->Draw(2);
    opera->pop();

    opera->push();
    opera->trasladar(-6.5,0,-5.5);//
    casa_base->Draw(3);
    opera->pop();

    opera->push();
    opera->trasladar(-7,0,-8.5);//
    casa_base->Draw(4);
    opera->pop();

    opera->push();
    opera->trasladar(-10,0,-13);//
    casa_base->Draw(5);
    opera->pop();

    opera->push();
    opera->trasladar(-10,0,-9);//
    casa_base->Draw(1);
    opera->pop();

    opera->push();
    opera->trasladar(-14,0,-13);//
    casa_base->Draw(2);
    opera->pop();

    opera->push();
    opera->trasladar(-12.5,0,-7);//
    casa_base->Draw(3);
    opera->pop();

    opera->push();
    opera->trasladar(-6.5,0,-12.5);
    casa_base->Draw(4);
    opera->pop();

    opera->push();
    opera->trasladar(-4.9,0,-12);
    casa_base->Draw(5);
    opera->pop();

    opera->push();
    opera->trasladar(6,0,-10);
    casa_base->Draw(1);
    opera->pop();

    opera->push();
    opera->trasladar(4,0,-11);
    casa_base->Draw(2);
    opera->pop();

    opera->push();
    opera->trasladar(-3.8,0,-9.5);
    casa_base->Draw(3);
    opera->pop();

    opera->push();
    opera->trasladar(5,0,-13.5);
    casa_base->Draw(4);
    opera->pop();

    opera->push();
    opera->trasladar(7,0,5);
    casa_base->Draw(1);
    opera->pop();

    opera->push();
    opera->trasladar(3.5,0,8);
    casa_base->Draw(2);
    opera->pop();

    opera->push();
    opera->trasladar(3,0,6);
    casa_base->Draw(3);
    opera->pop();

    opera->push();
    opera->trasladar(1,0,13);
    casa_base->Draw(4);
    opera->pop();

    opera->push();
    opera->trasladar(0,0,7);
    casa_base->Draw(5);
    opera->pop();

    opera->push();
    opera->trasladar(-2,0,12);
    casa_base->Draw(1);
    opera->pop();

    opera->push();
    opera->trasladar(-3.5,0,7);
    casa_base->Draw(2);
    opera->pop();

    opera->push();
    opera->trasladar(-6.5,0,5.5);
    casa_base->Draw(2);
    opera->pop();

    opera->push();
    opera->trasladar(-7,0,8.5);
    casa_base->Draw(3);
    opera->pop();

    opera->push();
    opera->trasladar(-10,0,13);
    casa_base->Draw(1);
    opera->pop();

    opera->push();
    opera->trasladar(-10,0,9);
    casa_base->Draw(2);
    opera->pop();

    opera->push();
    opera->trasladar(-14,0,13);
    casa_base->Draw(3);
    opera->pop();

    opera->push();
    opera->trasladar(-12.5,0,7);
    casa_base->Draw(1);
    opera->pop();

    opera->push();
    opera->trasladar(-6.5,0,12.5);
    casa_base->Draw(2);
    opera->pop();

    opera->push();
    opera->trasladar(2,0,-10);
    casa_base->Draw(3);
    opera->pop();

    opera->push();
    opera->trasladar(-4,0,-14);
    casa_base->Draw(3);
    opera->pop();

    opera->push();
    opera->trasladar(-12,0,-14.5);
    casa_base->Draw(3);
    opera->pop();

    opera->push();
    opera->trasladar(2,0,10);
    casa_base->Draw(1);
    opera->pop();

    opera->push();
    opera->trasladar(-4,0,14);
    casa_base->Draw(2);
    opera->pop();

    opera->push();
    opera->trasladar(4,0,11);
    casa_base->Draw(2);
    opera->pop();
//-----------
    opera->push();
    opera->trasladar(-20,0,-10);
    casa_base->Draw(5);
    opera->pop();

    opera->push();
    opera->trasladar(-20,0,-5);
    casa_base->Draw(4);
    opera->pop();

    opera->push();
    opera->trasladar(-15,0,-6);
    casa_base->Draw(2);
    opera->pop();

    opera->push();
    opera->trasladar(-23,0,-9);
    casa_base->Draw(3);
    opera->pop();

    opera->push();
    opera->trasladar(-17,0,-10);
    casa_base->Draw(1);
    opera->pop();

//----------------
    opera->push();
    opera->trasladar(-3.8,0,9.5);
    casa_base->Draw(3);
    opera->pop();

    opera->trasladar(5,0,13.5);
    casa_base->Draw(4);


    opera->LoadIdenty();
    opera->escalar(6.0,6.0,6.0);
    opera->push();
    opera->trasladar(0,0,90);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(-120,0,-50);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(-120,0,-90);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(-105,0,-90);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(-150,0,-30);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(-150,0,-45);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(-50,0,-100);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(5,0,65);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(5,0,65);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(-90,0,-25);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(-10,0,-30);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(60,0,-25);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(60,0,45);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(0,0,30);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(60,0,-60);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(50,0,-80);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(20,0,-85);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(35,0,-25);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(-55,0,-40);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(-55,0,-75);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(-10,0,-95);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(40,0,-55);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(-90,0,-55);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(-80,0,-75);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(-90,0,55);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(-70,0,75);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(-70,0,32);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(37,0,32);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(60,0,90);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(40,0,70);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(-20,0,30);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(-30,0,70);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(-50,0,70);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(45,0,55);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(120,0,0);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(110,0,-20);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(110,0,-50);
    arb->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(115,0,70);
    arb->Draw();
    opera->pop();

    opera->trasladar(115,0,30);
    arb->Draw();

    opera->LoadIdenty();
    opera->push();
    opera->escalar(7,7,7);
    opera->trasladar(0,0,-65);
    arb->Draw();

    opera->pop();
    opera->push();
    opera->escalar(6.5,6.05,6.5);
    opera->trasladar(120,0,50);
    arb->Draw();

    //NUBES
    opera->pop();
    opera->escalar(12,12,12);
    opera->push();
    opera->trasladar(0,20,viento[0]);
    nub->Draw();
    opera->pop();

    opera->trasladar(60,20,viento[9]);
    nub->Draw();

    opera->LoadIdenty();
    opera->escalar(10,10,10);
    opera->push();
    opera->trasladar(-90,15,viento[12]);
    nub->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(0,15,viento[1]);
    nub->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(60,20,viento[2]);
    nub->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(90,15,viento[3]);
    nub->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(-30,15,viento[4]);
    nub->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(-60,20,viento[5]);
    nub->Draw();
    opera->pop();

    opera->push();
    opera->trasladar(-90,15,viento[6]);
    nub->Draw();
    opera->pop();

    opera->trasladar(0,20,viento[7]);
    nub->Draw();

    opera->LoadIdenty();
    opera->push();
    opera->escalar(8,8,8);
    opera->trasladar(-30,15,viento[10]);
    nub->Draw();

    opera->pop();
    opera->push();
    opera->escalar(7,7,7);
    opera->trasladar(30,15,viento[8]);
    nub->Draw();

    opera->pop();
    opera->push();
    opera->escalar(5,5,5);
    opera->trasladar(-60,35,viento[11]);
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

    opera->pop();//0
    opera->push();
    opera->trasladar(carril1[0][0],0,carril1[0][1]);
    opera->escalar(18,18,18);
    opera->rotarY(carril1[0][2]);
    carro1->Draw(1);

    opera->pop();//1
    opera->push();
    opera->trasladar(carril1[1][0],0,carril1[1][1]);
    opera->escalar(18,18,18);
    opera->rotarY(carril1[1][2]);
    carro1->Draw(3);

    opera->pop();//2
    opera->push();
    opera->trasladar(carril1[2][0],0,carril1[2][1]);
    opera->escalar(18,18,18);
    opera->rotarY(carril1[2][2]);
    camioneta1->Draw(1);


    opera->pop();//3
    opera->push();
    opera->trasladar(carril1[3][0],0,carril1[3][1]);
    opera->escalar(18,18,18);
    opera->rotarY(carril1[3][2]);
    carro1->Draw(5);

    opera->pop();//4
    opera->push();
    opera->trasladar(carril1[4][0],0,carril1[4][1]);
    opera->escalar(18,18,18);
    opera->rotarY(carril1[4][2]);
    camioneta1->Draw(4);

    opera->pop();//4.5
    opera->push();
    opera->trasladar(carril2[0][0],0,carril2[0][1]);
    opera->escalar(18,18,18);
    opera->rotarY(carril2[0][2]);
    carro1->Draw(2);

    opera->pop();//5
    opera->push();
    opera->trasladar(carril2[1][0],0,carril2[1][1]);
    opera->escalar(18,18,18);
    opera->rotarY(carril2[1][2]);
    carro1->Draw(2);

    opera->pop();//6
    opera->push();
    opera->trasladar(carril2[2][0],0,carril2[2][1]);
    opera->escalar(18,18,18);
    opera->rotarY(carril2[2][2]);
    camioneta1->Draw(3);

    opera->pop();//7
    opera->push();
    opera->trasladar(carril2[3][0],0,carril2[3][1]);
    opera->escalar(18,18,18);
    opera->rotarY(carril2[3][2]);
    carro1->Draw(4);

    opera->pop();//8
    opera->push();
    opera->trasladar(carril2[4][0],0,carril2[4][1]);
    opera->escalar(18,18,18);
    opera->rotarY(carril2[4][2]);
    camioneta1->Draw(5);

    opera->pop();
    opera->push();
    opera->escalar(0.7,0.7,0.7);
    opera->trasladar(-580,350,400);
    sol->Draw();

    //carretera
    glColor3f(0.54f, 0.58f, 0.59f);
    glBegin(GL_LINES);
    glVertex3f(400,0,125);
    glVertex3f(400,0,900);
    glVertex3f(0,0,0);
    glEnd();

    glBegin(GL_LINES);
    glVertex3f(-700,0,125);
    glVertex3f(400,0,125);
    glVertex3f(0,0,0);
    glEnd();

    glBegin(GL_LINES);
    glVertex3f(400,0,-125);
    glVertex3f(400,0,-600);
    glVertex3f(0,0,0);
    glEnd();

    glBegin(GL_LINES);
    glVertex3f(-910,0,-125);
    glVertex3f(400,0,-125);
    glVertex3f(0,0,0);
    glEnd();

    glBegin(GL_LINES);
    glVertex3f(650,0,-600);
    glVertex3f(650,0,700);
    glVertex3f(0,0,0);
    glEnd();

    //LINEAS DE LA CARRETERA
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_LINES);
    int i;
    for (i=-600; i<850; i=i+20)
    glVertex3f(525,0,i);
    glVertex3f(525,0,i+10);
    glEnd();

    glBegin(GL_LINES);
    for (i=-850; i<500; i=i+20)
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
    for(i=0;i<5;i++)
    {
        if(carril1[i][1]>90)
        {
            carril1[i][1]--;
            if(carril1[i][1]<=125)
                carril1[i][2]+=2.571;
        }
        else
        {
            if(carril1[i][2]!=0)
                carril1[i][2]=0;
            if(carril1[i][0]>-766.66)
                carril1[i][0]--;
            else
            {
                carril1[i][0]=425;
                carril1[i][1]=808.27;
                carril1[i][2]=-90;
            }
        }
    }

    for(i=0;i<5;i++)
    {
        if(carril2[i][0]<425)
        {
            carril2[i][0]++;
            if(carril2[i][0]>=400)
                carril2[i][2]+=2.571;
        }
        else
        {
            if(carril2[i][2]!=270)
                carril2[i][2]=270;
            if(carril2[i][1]>-841.6)
                carril2[i][1]--;
            else
            {
                carril2[i][0]=-849.93;
                carril2[i][1]=-90;
                carril2[i][2]=180;
            }
        }
    }
    for(i=0;i<13;i++)
    {
        if(viento[i]>55)
            viento[i]=-60;
        else
            viento[i]+=0.1;
    }
}
