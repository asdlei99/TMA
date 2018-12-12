#include "main.h"


unsigned char RD(int i, int j) {
	return char(_sq(cos(atan2(j - 512, i - 512) / 2)) * 255);
}

unsigned char GR(int i, int j) {
	return char(_sq(cos(atan2(j - 512, i - 512) / 2 - 2 * acos(-1) / 3)) * 255);
}

unsigned char BL(int i, int j) {
	return char(_sq(cos(atan2(j - 512, i - 512) / 2 + 2 * acos(-1) / 3)) * 255);
}
