#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <process.h>
#define LEFT
#define RIGHT
#define WIDTH 1600
#define HEIGHT 700
/*border*/
typedef struct{
    int inih,inik;//ini means initial
    int r,h,k;
    
}ball;
typedef struct{
    int len;
    int thick;
    int inipos;
    int curpos;//current postion
}launcher;
launcher l;
int RX1=150,RY1=50,RX2=1200,RY2=650
#define rect_h 1050
#define rect_w 600

/*laucher/kicker */
int l.len=100,l.thick=20;



/*BALL  */
ball b;
int b.r=10;
int b.h=(RX2-RX1)/2;
int b.k=RY2-len-r;


void screen(void);

int r=10;
int bx,by;
int lbx,lby;
int main(){
    int l.inipos=(RX2-RX1)/2-len;
    screen();
    drawBall(inih,inik,r);
    drawKicker();
    outtext("Press any key to start!!!!");
    getch();

    while(1){
        
        
        moveBall();

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



