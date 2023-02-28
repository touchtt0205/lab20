#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1,Rect *R2){
    double Lx,Ly;
    
    Lx = min(R1->x+R1->w,R2->x+R2->w) - max(R2->x,R2->x);
    Ly = min(R1->y,R2->y) - max(R1->y-R1->h,R2->y-R2->h);
    if(Lx < 0 or Ly < 0) return 0;
    else return Lx*Ly;
}