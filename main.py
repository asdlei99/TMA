# coding: utf-8
from math import cos, atan2, acos

import numpy as np


DIM = 1024
DM1 = DIM - 1


def _sq(x):
    return x * x


def _cb(x):
    return abs(x * x * x)


def _cr(x):
    return x ** (1 / 3)


# 来自 Martin Büttner 的作品
def RD(i, j):   # NOQA
    return _sq(cos(atan2(j - 512, i - 512) / 2)) * 255


def GR(i, j):   # NOQA
    return _sq(cos(atan2(j - 512, i - 512) / 2 - 2 * acos(-1) / 3)) * 255


def BL(i, j):   # NOQA
    return _sq(cos(atan2(j - 512, i - 512) / 2 + 2 * acos(-1) / 3)) * 255


if __name__ == '__main__':
    img = np.zeros((DIM, DIM, 3), dtype=np.uint8)
    for i in range(DIM):
        for j in range(DIM):
            img[i, j, 2] = int(RD(i, j)) & 255
            img[i, j, 1] = int(GR(i, j)) & 255
            img[i, j, 0] = int(BL(i, j)) & 255
    fp = open('MathPic.ppm', 'wb')
    fp.write(f'P6\n{DIM} {DIM}\n255\n'.encode())
    fp.write(img)
    fp.close()
