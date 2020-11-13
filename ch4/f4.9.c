#include <stdio.h>
#include <math.h>
int main()
{

    double a, b, c, p, q, k, x1, x2, realpart, imagpart;   //r实部 i虚部
    printf("输入a,b,c的值：\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (fabs(a) <= 1e-6)
    {
        printf("不是二次方程！\n");
    }
    else

    {
        k = b * b - 4 * a * c;
        q = sqrt(k) / (2 * a);
        p = -b / (2 * a);
        if (fabs(k) <= 1e-6)
        {
            printf("有两个相等的实根：%6.2f\n", p);
        }
        else
        {
            if (k > 1e-6)
            {
                x1 = p + q;
                x2 = p - q;
                printf("x1=%6.2f x2=%6.2f\n", x1, x2);
            }
            else
            {
                realpart = p;
                imagpart = sqrt(-k)/(2*a);
                printf("有复根：%6.2f+%6.2f*i\n", realpart, imagpart);
                printf("有复根：%6.2f-%6.2f*i\n", realpart, imagpart);
            }
        }
    }
    return 0;
}
/*输入a,b,c的值：
1 2 2
有复根： -1.00+  1.00*i
有复根： -1.00-  1.00*i*/

/*输入a,b,c的值：
2 6 1
x1= -0.18 x2= -2.82*/

/*输入a,b,c的值：
1 2 1
有两个相等的实根： -1.00*/