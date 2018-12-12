#ifndef _MAIN_H_
#define _MAIN_H_
#include <iostream>
#include <cmath>
#include <cstdlib>

#define DIM 1024
#define DM1 (DIM - 1)
#define _sq(x) ((x) * (x))	// square
#define _cb(x) abs((x) * (x) * (x))	// absolute value of cube
#define _cr(x) (unsigned char)(pow((x), 1.0 / 3.0))	// cube root

unsigned char RD(int, int);
unsigned char GR(int, int);
unsigned char BL(int, int);

#endif
