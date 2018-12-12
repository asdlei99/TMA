// NOTE: compile with g++ filename.cpp -std=c++11
#include "main.h"


void pixel_write(int,int);
FILE *fp;
int main(){
	fp = fopen("MathPic.ppm","wb");
	fprintf(fp, "P6\n%d %d\n255\n", DIM, DIM);
	for(int j=0;j<DIM;j++)
		for(int i=0;i<DIM;i++)
			pixel_write(i,j);
	fclose(fp);
	return 0;
}
void pixel_write(int i, int j){
	static unsigned char color[3];
	color[0] = RD(i,j)&255;
	color[1] = GR(i,j)&255;
	color[2] = BL(i,j)&255;
	fwrite(color, 1, 3, fp);
}
