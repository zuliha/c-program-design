#include <stdio.h>
int main()
{
    //每吨每千克运费，货重，折扣，总费用
    double p, w, d, f;
    int c, s; //路程
    printf("输入路程、每吨每千克运费、货重：\n");
    scanf("%d %lf %lf", &s, &p, &w);
    if (s >= 3000)
    {
        c = 12;
    }
    else
    {
        c = s / 250;
    }

    switch (c)
    {
    case 0:
        d = 0;
        break;
    case 1:
        d = 0.02;
        break;
    case 2:
    case 3:
        d = 0.05;
        break;
    case 4:
    case 5:
    case 6:
    case 7:
        d = 0.08;
        break;
    case 8:
    case 9:
    case 10:
    case 11:
        d = 0.1;
        break;
    case 12:
        d = 0.15;
        break;

    default:
        break;
    }

    f = p * w * s * (1 - d);
    printf("总运费：%lf\n", f);
    return 0;
}
/*输入路程、每吨每千克运费、货重：
300 100 20
总运费：588000.000000*/