//三角形面积
#include <stdio.h>
#include<math.h>
int main()
{
    float area, a, b, c, s;
    a = 3.67;
    b = 5.43;
    c = 6.21;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("%f\n", area);
    return 0;
}
//9.903433