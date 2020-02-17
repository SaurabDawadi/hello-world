#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <process.h>
#define LEFT -20
#define RIGHT 20
#define WIDTH 1600
#define HEIGHT 700
/*border*/
typedef struct{
    int inih,inik;//ini means initial
    int r,h,k;
    int vx,vy;

}ball;
typedef struct{
    int len;
    int thick;
    int inipos;
    int curpos;//current postion
}launcher;

int RX1=150,RY1=50,RX2=1200,RY2=650;
#define rect_h 1050
#define rect_w 600
launcher l;
/*laucher/kicker */
l.len=100
l.thick=20;



/*BALL  */
ball b;
b.r=10;

b.inih =(RX2-RX1)/2;
b.inik = RY2-len-r;
b.vx = 10;
b.vy = 10;


void screen(void);
void changeKicker(int,int);
void drawKicker(int);



int main(){
    int l.inipos=(RX2-RX1)/2-len;

    screen();

    drawBall(inih,inik,r);
    drawKicker();
    outtext("Press any key to start!!!!");
    getch();
    b.h=b.inih;
    b.k=b.inik;
    while(1){

        /*ball at bound */
        b.h+=b.vx;
        b.k+=b.vy;
        if(b.h>=RX2-b.r || b.h<=RX2+b.r){
            b.vx=b.vx*(-1);
        }
        if(b.k<=RY1+b.r || b.k>=RY2-b.r){
            b.vy=b.vx*(-1);

        }

        moveBall(b.h,b,k);








        if(kbhit()){
            ch=getch();
            switch(ch){
            case 'a' : case 'A':
                changeKicker(iniKick,LEFT);
            case 'd': case 'D':
                changeKicker(iniKick,RIGHT);

            }
        }



}
    return 0;
}
void screen(){
    initwindow(WIDTH,HEIGHT,"Brick  breaker");
    setfillstyle(SOLID_FILL,BROWN);
    rectangle(RX1,RX2,RX2,RY2);
    floodfill(10,50,10);
    rectangle(150,50,1200,650);

}
void changeKicker(int in,int dis){
    if(in>150 && 1200-len){
          deleteKicker(in);
          drawKicker(in+dis);
    }

}
void drawKicker(int pos){
    setcolor(BLACK);
    rectangle(pos,RY-thick,pos+len,RY);

}
void deleteKicker(int pos){
    setcolor(BROWN);
    rectangle(pos,RY-thick,pos+len,RY);

}
void moveBall(){


}



