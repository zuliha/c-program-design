#include <stdio.h>
#include <math.h>
int main()
{
    double r0 = 0.0072, r1 = 0.0414, r2 = 0.0468, r3 = 0.054, r5 = 0.0585, p1, p2, p3, p4, p5;
    int p = 1000;
    p1 = p * (1 + r5 * 5);
    p2 = p * (1 + r2 * 2) * (1 + r3 * 3);
    p3 = p * (1 + r3 * 3) * (1 + r2 * 2);
    p4 = p * pow(1 + r1, 5);
    p5 = p * pow(1 + r0 / 4, 4 * 5);
    printf("p1=%f\n", p1);
    printf("p2=%f\n", p2);
    printf("p3=%f\n", p3);
    printf("p4=%f\n", p4);
    printf("p5=%f\n", p5);
    return 0;
}
/*
p1=1292.500000
p2=1270.763200
p3=1270.763200
p4=1224.863989
p5=1036.622300*/