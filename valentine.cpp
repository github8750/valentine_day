#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
void heart(){
  line(0,349,6020,349);
  ellipse(177,250,30,210,150,200);
  ellipse(435,250,330,150,150,200);
  setfillstyle(1,RED);
  floodfill(240,250,WHITE);
}
void man(){
  setcolor(WHITE);
  circle(175,200,30);
  line(175,230,175,300);
  //hand
  line(175,250,205,280);
  line(205,280,230,250);
  //flawer
  circle(230,245,5);
  circle(235,250,3);
  circle(238,245,3);
  circle(235,240,3);
  circle(230,237,3);
  circle(225,240,3);
  circle(222,245,3);
  circle(225,250,3);
  line(230,250,230,270);

  line(150,330,200,349);
  line(150,330,150,349);
  line(175,300,200,349);
}
void wemen(){
  setcolor(WHITE);
  circle(355,200,30);
  line(355,230,355,300);
  line(355,300,330,349);
  //hand
  line(355,255,410,200);
  line(355,255,300,200);
//  line(330,349,380,330);
//  line(380,330,380,349);
  line(355,300,380,349);
}
void star(){
 int x=300,y=250,c=0,i=1;
 while(!kbhit()){
   putpixel(x+rand()%300,y+rand()%240,c+rand()%16);
   putpixel(x-rand()%300,y+rand()%240,c+rand()%16);
   putpixel(x+rand()%300,y-rand()%240,c+rand()%16);
   putpixel(x-rand()%300,y-rand()%240,c+rand()%16);
   man();
   wemen();
   delay(100);
 }
}
int main(){
  int gd=0,gm;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  heart();
  man();
  wemen();
  star();
  getch();
  closegraph();
  return 0;
}
