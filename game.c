#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <process.h>
#define LEFT -100
#define RIGHT 100
#define WIDTH 1600
#define HEIGHT 700
/*border*/
typedef struct{#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <process.h>
#define LEFT -100
#define RIGHT 100
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



void screen(void);
int changeKicker(int,int,int,int);
void drawKicker(int,int ,int);
void moveBall(int,int ,int ,int ,int);
void drawBall(int ,int ,int );
void deleteKicker(int,int,int);
void deleteBall(int,int,int);







int main(){
    launcher l;
    char ch;//to check which key is hit
    /*laucher/kicker */
    l.len=100;
    l.thick=20;



    /*BALL */
    ball b;
    b.r=10;

    b.inih =(RX2-RX1)/2;
    b.inik = RY2-l.thick-b.r;
    b.vx = 5;

    b.vy = 5;
    l.inipos=(RX2-RX1)/2-l.len/2;


    screen();
     outtext((char *)"Press any key to start!!!!");
    getch();
    drawBall(b.inih,b.inik,b.r);
    drawKicker(l.inipos,l.thick,l.len);

    b.h=b.inih;
    b.k=b.inik;
    setcolor(RED);
    rectangle(300,100,1000,200);
   // floodfill()
    while(1){

        /*ball at bound */
        if(b.h>=RX2-b.r || b.h<=RX1+5+b.r){  //5 is added for boundary effect
            b.vx=b.vx*(-1);
        }
        if(b.k<=RY1+5+b.r || b.k>=(RY2-b.r-l.thick)){
            b.vy=b.vy*(-1);

        }
        b.h+=b.vx;
        b.k+=b.vy;

        delay(0.00001);

        moveBall(b.inih,b.inik,b.h,b.k,b.r);
        b.inih=b.h;
        b.inik=b.k;




        /* kicker */
        l.curpos=l.inipos;
        fflush(stdin);
        if(kbhit()){
            ch=getch();
            switch(ch)
            {
            case 'a' : case 'A':
                l.curpos=changeKicker(l.curpos,LEFT,l.len,l.thick);
                break;
            case 'd': case 'D':
                l.curpos=changeKicker(l.curpos,RIGHT,l.len,l.thick);
                break;

            }
        }



}
    return 0;
}
void screen(){
    initwindow(WIDTH,HEIGHT,"Brick  breaker");
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(10,50,10);
    setcolor(YELLOW);
    rectangle(RX1,RY1,RX2,RY2);

}
int  changeKicker(int in,int dis,int len,int thick){

          deleteKicker(in,thick,len);
          drawKicker(in+dis,thick,len);
          return (in+dis);

    return in;


}
void drawKicker(int pos,int thick ,int len){
    setcolor(BLACK);
    rectangle(pos,RY2-thick,pos+len,RY2);


}
void deleteKicker(int pos,int thick,int len){
    setcolor(BROWN);
    rectangle(pos,RY2-thick,pos+len,RY2);

}
void drawBall(int h,int k,int r){
    setcolor(BLACK);
    circle(h,k,r);

}
void moveBall(int inih,int inik,int h,int k,int r){
    deleteBall(inih,inik,r);
    setcolor(BLACK);
    drawBall(h,k,r);

}
void deleteBall(int h,int k,int r){
    setcolor(BROWN);
    circle(h,k,r);
}




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



void screen(void);
int changeKicker(int,int,int,int);
void drawKicker(int,int ,int);
void moveBall(int,int ,int ,int ,int);
void drawBall(int ,int ,int );
void deleteKicker(int,int,int);
void deleteBall(int,int,int);







int main(){
    launcher l;
    char ch;//to check which key is hit
    /*laucher/kicker */
    l.len=100;
    l.thick=20;



    /*BALL */
    ball b;
    b.r=10;

    b.inih =(RX2-RX1)/2;
    b.inik = RY2-l.thick-b.r;
    b.vx = 5;

    b.vy = 5;
    l.inipos=(RX2-RX1)/2-l.len/2;


    screen();
     outtext((char *)"Press any key to start!!!!");
    getch();
    drawBall(b.inih,b.inik,b.r);
    drawKicker(l.inipos,l.thick,l.len);

    b.h=b.inih;
    b.k=b.inik;
    setcolor(RED);
    rectangle(300,100,1000,200);
   // floodfill()
    while(1){

        /*ball at bound */
        if(b.h>=RX2-b.r || b.h<=RX1+5+b.r){  //5 is added for boundary effect
            b.vx=b.vx*(-1);
        }
        if(b.k<=RY1+5+b.r || b.k>=(RY2-b.r-l.thick)){
            b.vy=b.vy*(-1);

        }
        b.h+=b.vx;
        b.k+=b.vy;

        delay(0.00001);

        moveBall(b.inih,b.inik,b.h,b.k,b.r);
        b.inih=b.h;
        b.inik=b.k;




        /* kicker */
        l.curpos=l.inipos;
        fflush(stdin);
        if(kbhit()){
            ch=getch();
            switch(ch)
            {
            case 'a' : case 'A':
                l.curpos=changeKicker(l.curpos,LEFT,l.len,l.thick);
                break;
            case 'd': case 'D':
                l.curpos=changeKicker(l.curpos,RIGHT,l.len,l.thick);
                break;

            }
        }



}
    return 0;
}
void screen(){
    initwindow(WIDTH,HEIGHT,"Brick  breaker");
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(10,50,10);
    setcolor(YELLOW);
    rectangle(RX1,RY1,RX2,RY2);

}
int  changeKicker(int in,int dis,int len,int thick){

          deleteKicker(in,thick,len);
          drawKicker(in+dis,thick,len);
          return (in+dis);

    return in;


}
void drawKicker(int pos,int thick ,int len){
    setcolor(BLACK);
    rectangle(pos,RY2-thick,pos+len,RY2);


}
void deleteKicker(int pos,int thick,int len){
    setcolor(BROWN);
    rectangle(pos,RY2-thick,pos+len,RY2);

}
void drawBall(int h,int k,int r){
    setcolor(BLACK);
    circle(h,k,r);

}
void moveBall(int inih,int inik,int h,int k,int r){
    deleteBall(inih,inik,r);
    setcolor(BLACK);
    drawBall(h,k,r);

}
void deleteBall(int h,int k,int r){
    setcolor(BROWN);
    circle(h,k,r);
}



