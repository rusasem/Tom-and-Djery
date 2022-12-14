#include "TXLib.h"

void drawSky(COLORREF col)
{
//????1
    txSetColor (col);
    txSetFillColor (col );
    txRectangle (0, 0, 1200, 600);
}

void drawLand()
{
//?????
    txSetColor (TX_GRAY );
    txSetFillColor (TX_GRAY );
    txRectangle (0,450,1200,700);
}

void drawHouse()
{

    //???
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txRectangle (500,300, 1000, 600);
    //?????
    txSetColor (TX_RED);
    txSetFillColor (TX_RED);
    POINT star[3] = {{500, 300}, {750, 100}, {1000, 300}};
    txPolygon (star, 3);
    //????
    txSetColor (TX_BLACK, 5);
    txSetFillColor (TX_NULL);
    txRectangle (620, 390, 760,  510);
    //????? ????
    txLine(680,390,680,510);
    txLine(620,450,760,450);

    //txSetColor (TX_YELLOW);
    //txSetFillColor (TX_YELLOW);
    txRectangle (500,300, 1000, 600);
 }

void drawDoor(int x)
{
    txSetColor (TX_BLACK, 1);
    txSetFillColor (TX_YELLOW);
    txRectangle (x+490-490, 430, 500, 600);
}

void drawtrees(int x,int y)
{
    txSetColor (TX_BROWN );
    txSetFillColor (TX_BROWN );
    txRectangle (x+120-120,y+340-340,x+150-120, y+560-340);
    txSetColor (TX_GREEN);
    txSetFillColor (TX_GREEN);
    txEllipse (x+100-120,y+210-340, x+170-120,y+340-340);
    txEllipse (x+100-120,y+300-340, x+170-120,y+440-340);
 }

 void drawtreese(int x)
 {

    txSetColor (TX_BROWN );
    txSetFillColor (TX_BROWN );
    txRectangle (x+120-120,380,x+150-120, 600);
    txSetColor (TX_GREEN);
    txSetFillColor (TX_GREEN);
    txEllipse (x+100-120,250, x+170-120,380);
    txEllipse (x+100-120,340, x+170-120,480);
  }

void drawSun(int x)
{
    //??????
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txCircle (x, 130, 100);
}

void drawCloud(int x)
{
    //??????
    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txEllipse (x, 30, x+790-300, 220);
}

void drawMan(int x,COLORREF col)
{   //390=x
    txSetColor ( col, 5);
    txSetFillColor (col);
    txCircle(x+390-390,450,15);
    txLine ( x+390-390,450,x+390-390,560);
    txLine ( x+390-390,480,x+440-390,510);
    txLine ( x+350-390,520,x+390-390,480);
    txLine ( x+350-390,590,x+390-390,560);
    txLine ( x+390-390,560,x+420-390,590);

}

void drawBrib(int x, int y, double r)
{
//x=110 y=130
    txSetColor (TX_WHITE);
    txSetFillColor (RGB(121, 111, 53));
    txRectangle(x+(110-110)*r, y+(110-130)*r, x+(120-110)*r, y+(130-130)*r);

    txSetColor (TX_WHITE);
    txSetFillColor (RGB(198, 187, 125));
    txPie (x+(100-110)*r, y+(100-130)*r, x+(130-110)*r, y+(130-130)*r, 0, 180);
}

int main()
{
txCreateWindow (1200, 700);

    int xSun = 130;
    int xCloud =300;
    int xMan1=390;
    int xMan2=500;
    int xMan3=510;
    int xDoor=490;
    double r = 1;


while(xSun < 950)
{
        txBegin();
        drawSky(TX_LIGHTBLUE);
        drawLand();
        for(int i=120; i<=1120 ; i=i+150)
        {
            drawtrees(i,340);
        }


       for(int i=190; i<=1120 ; i=i+150)
       {
       drawtrees(i,380);
       }




        drawSun(xSun);
        drawCloud(xCloud);
        drawHouse();
        drawDoor(xDoor);
        drawMan(xMan1,TX_ORANGE);
        drawMan(xMan2,TX_RED);
        drawMan(xMan3,TX_CYAN);



        xCloud = xCloud - 5;
        xSun = xSun + 5;
        xMan1=xMan1 -10;
        //xMan2=xMan2 -10;
        xMan3=xMan3 -10;
        txEnd();
        txSleep(10);

}

while(xMan1 < 450)
{        txBegin();
        drawSky(TX_BLUE);
        drawLand();
        for(int i=120; i<=1120 ; i=i+150)
        {
            drawtrees(i,340);
        }

        for(int i=190; i<=1120 ; i=i+150)
       {
       drawtrees(i,380);
       }


        drawSun(xSun);
        drawCloud(xCloud);
        drawDoor(xDoor);
        drawMan(xMan1,TX_ORANGE);
        drawHouse();
        drawMan(xMan3,TX_CYAN);
        drawMan(xMan2,TX_RED);


        txSleep(10);
        xMan1=xMan1 +10;
        xMan3=xMan3 +10;

}

while(xMan3 >-10)
{       txBegin();
        drawSky(TX_BLUE);
        drawLand();
       for(int i=120; i<=1120 ; i=i+150)
        {
            drawtrees(i,340);
        }
        for(int i=190; i<=1120 ; i=i+150)
       {
       drawtrees(i,380);
       }




        drawSun(xSun);
        drawCloud(xCloud);
        drawDoor(xDoor);
        drawMan(xMan1,TX_ORANGE);
        drawHouse();
        drawMan(xMan3,TX_CYAN);
        drawMan(xMan2,TX_RED);


        xMan1=xMan1 -10;
        xMan2=xMan2 -10;
        xMan3=xMan3 -10;
        txEnd();
        txSleep(10);

}

while(xDoor > 400)
{
        txBegin();
        drawSky(TX_BLUE);
        drawLand();
        for(int i=120; i<=1120 ; i=i+150)
        {
            drawtrees(i,340);
        }
        for(int i=190; i<=1120 ; i=i+150)
        {
            drawtrees(i,380);
        }

        drawSun(xSun);
        drawCloud(xCloud);

        drawMan(xMan1,TX_ORANGE);
        //drawMan(xMan2,TX_RED);
        drawMan(xMan3,TX_CYAN);
        drawHouse();
        drawDoor(xDoor);


        xMan1=xMan1 +10;
        xMan3=xMan3 +10;
        xDoor-= 10;
        txEnd();
        txSleep(10);
}

while(xMan1 < 450)
{
        txBegin();
        drawSky(TX_BLUE);
        drawLand();
        for(int i=120; i<=1120 ; i=i+150)
        {
            drawtrees(i,340);
        }
        for(int i=190; i<=1120 ; i=i+150)
        {
            drawtrees(i,380);
        }

        drawSun(xSun);
        drawCloud(xCloud);

        drawMan(xMan1,TX_ORANGE);
        //drawMan(xMan2,TX_RED);
        drawMan(xMan3,TX_CYAN);
        drawHouse();
        drawDoor(xDoor);

        xMan1=xMan1 +10;
        xMan3=xMan3 +10;
        txEnd();
        txSleep(10);
}

while(xDoor < 500)
{
        txBegin();
        drawSky(TX_BLUE);
        drawLand();
        for(int i=120; i<=1120 ; i=i+150)
        {
            drawtrees(i,340);
        }
        for(int i=190; i<=1120 ; i=i+150)
        {
            drawtrees(i,380);
        }

        drawSun(xSun);
        drawCloud(xCloud);

        drawMan(xMan1,TX_ORANGE);
        //drawMan(xMan2,TX_RED);
        drawMan(xMan3,TX_CYAN);
        drawHouse();
        drawDoor(xDoor);


        //xMan1=xMan1 +20;
        //xMan3=xMan3 +20;
        xDoor+= 10;
        txEnd();
        txSleep(10);
}

while(xDoor > 400)
{
        txBegin();
        drawSky(TX_BLUE);
        drawLand();
        for(int i=120; i<=1120 ; i=i+150)
        {
            drawtrees(i,340);
        }
        for(int i=190; i<=1120 ; i=i+150)
        {
            drawtrees(i,380);
        }

        drawSun(xSun);
        drawCloud(xCloud);

        drawMan(xMan1,TX_ORANGE);
        //drawMan(xMan2,TX_RED);
        drawMan(xMan3,TX_CYAN);
        drawHouse();
        drawDoor(xDoor);


        //xMan1=xMan1 +20;
        //xMan3=xMan3 +20;
        xDoor-= 10;
        txEnd();
        txSleep(10);
}

while(xMan1 < 650)
{
        txBegin();
        drawSky(TX_BLUE);
        drawLand();
        for(int i=120; i<=1120 ; i=i+150)
        {
            drawtrees(i,340);
        }
        for(int i=190; i<=1120 ; i=i+150)
        {
            drawtrees(i,380);
        }

        drawSun(xSun);
        drawCloud(xCloud);

        drawMan(xMan1,TX_ORANGE);
        //drawMan(xMan2,TX_RED);
        drawMan(xMan3,TX_CYAN);
        drawHouse();
        drawDoor(xDoor);

        xMan1=xMan1 +20;
        xMan3=xMan3 +20;
        xDoor+= 10;
        txEnd();
        txSleep(10);
}


drawSky(TX_BLUE);
drawLand();

for(int x=30; x<1100; x+=50)
{
    for(int y=450; y<700; y+=40)
    {
        drawBrib(x, y, r);
        r=random(0.5, 2);
    }
}




txTextCursor (false);
return 0;
 }
