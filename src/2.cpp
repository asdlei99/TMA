#include "main.h"

float mandelbrot(int i, int j) {
	float x=0,y=0;int k;for(k=0;k++<256;){float a=x*x-y*y+(i-768.0)/512;y=2*x*y+(j-512.0)/512;x=a;if(x*x+y*y>4)break;}return log(k);
}

static float m;

unsigned char RD(int i,int j){
	m = mandelbrot(i, j);
	return m * 47;
}

unsigned char GR(int i,int j){
	return m * 47;
}

unsigned char BL(int i,int j){
	return 128 - m * 23;
}
