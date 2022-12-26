#include<iostream>
#include<math.h>
#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
#include<dos.h> 
using namespace std;
void d(float x1,float y1,float x2,float y2) 
{
	float xi,yi,dx,dy,len,x,y;
	int i;
	dx=x2-x1;
	dy=y2-y1;
	if (abs(dx)>abs(dy))
	{
		len=abs(dx);
	}
	else
	{
		len=abs(dy);
	}
	xi=dx/len;
	yi=dy/len;
	putpixel(x1,y1,15);
	x=x1;
	y=y1;
	for(i=0;i<len;i++)
	{
		x=x+xi;
		y=y+yi;
		putpixel(x,y,15);
	}
}
main()  
{     
    int gd=DETECT,gm,i;
    float xa,xb,ya,yb,xc1,yc1;
	initgraph(&gd,&gm,"c:\\tc\\bgi"); 
	float r,S,x,y,r1,xc,yc;
	cout<<"Enter the co-ordinates of centre of circle : ";
	cin>>xc>>yc;
	cout<<"Enter the radius of circle : ";
	cin>>r;
	cout<<"Enter the radius of circle : ";
	cin>>r1;
	
	cout<<"Enter the first co-ordinate of triangle : ";
	cin>>xa>>ya;
	cout<<"Enter the second co-ordinate of triangle : ";
	cin>>xb>>yb;
	cout<<"Enter the third co-ordinate of triangle : ";
	cin>>xc1>>yc1;
	d(xa,ya,xb,yb);
	d(xb,yb,xc1,yc1);
	d(xc1,yc1,xa,ya);
	S=3-2*r;
	x=0;
   	y=r;
	while(x<=y)
	{
		putpixel(xc+x,yc+y,15);
    	putpixel(xc-x,yc-y,15);
    	putpixel(xc+x,yc-y,15);
    	putpixel(xc-x,yc+y,15);
    	putpixel(xc+y,yc+x,15);
    	putpixel(xc-y,yc-x,15);
    	putpixel(xc+y,yc-x,15);
    	putpixel(xc-y,yc+x,15);
    	
		if(S<0)
		{
			S=S+4*x+6;
			x=x+1;
		}
		else
		{
			S=S+4*(x-y)+10;
			x=x+1;
			y=y-1;
		}
	}
	S=3-2*r1;
	x=0;
   	y=r1;
	while(x<=y)
	{
		putpixel(xc+x,yc+y,15);
    	putpixel(xc-x,yc-y,15);
    	putpixel(xc+x,yc-y,15);
    	putpixel(xc-x,yc+y,15);
    	putpixel(xc+y,yc+x,15);
    	putpixel(xc-y,yc-x,15);
    	putpixel(xc+y,yc-x,15);
    	putpixel(xc-y,yc+x,15);
		if(S<0)
		{
			S=S+4*x+6;
			x=x+1;
		}
		else
		{
			S=S+4*(x-y)+10;
			x=x+1;
			y=y-1;
		}
}
		getch();
		return 0;
	}
	
