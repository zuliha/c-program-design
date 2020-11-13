//逻辑型变量bool
#include <stdbool.h>   //头文件
#include<stdio.h>
int main()
{
    float score;
    scanf("%f", &score);
    bool a, b;
    a = score >= 60;
    b = score <= 69;
    if (a == true && b == true)
        printf("The grade is C\n");
    return 0;
}
//63
//The grade is C
