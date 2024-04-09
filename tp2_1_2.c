#include <stdio.h>
#include <stdlib.h>
#define N 20

void main()
{
    int i = 20;
    double vt[N], *p;
    p = vt;
    while (i > 0)
    {
        *p = 1 + rand() % 100;
        printf("%f   ", *p);
        p++;
        i--;
    }
}