//#include "foo.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const double PI = 3.14159265;

void pip(int r)
{
    int pl, pr;
    pl = PI * r * r;
    pr = PI * 2 * r;
    printf("Ploshad - %d \nPerimetr - %d\n", pl, pr);
}

void pip(int* x)
{
    float p, pl, s1, s2, s3, pr;
    s1 = sqrt(pow((x[0] - x[2]), 2) + pow((x[1] - x[3]), 2));
    s2 = sqrt(pow((x[2] - x[4]), 2) + pow((x[3] - x[5]), 2));
    s3 = sqrt(pow((x[4] - x[6]), 2) + pow((x[5] - x[7]), 2));
    pr = s1 + s2 + s3;
    p = pr / 2;
    pl = p * (p - s1) * (p - s2) * (p - s3);
    printf("Ploshad - %f \nPerimetr - %f\n", pl, pr);
}

