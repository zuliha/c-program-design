#include <stdio.h>
int main()
{
    struct student

    {
        int num;
        char name[20];
        float score;
    } student1, student2;
    scanf("%d %s %f", &student1.num, student1.name, &student1.score);
    scanf("%d %s %f", &student2.num, student2.name, &student2.score);
    printf("The higher score is:");
    if (student1.score > student2.score)
        printf("%d %s %6.2f", student1.num, student1.name, student1.score);
    else if (student1.score < student2.score)
        printf("%d %s %6.2f", student2.num, student2.name, student2.score);
    else
    {
        printf("%d %s %6.2f\n", student1.num, student1.name, student1.score);
        printf("%d %s %6.2f\n", student2.num, student2.name, student2.score);
    }
    return 0;
}
/* 
5 han 60 
19 wu 59
The higher score is:5 han  60.00 

5 han 60
19 wu 61
The higher score is:19 wu  61.00

5 han 60
19 wu 60
The higher score is:5 han  60.00
19 wu  60.00
*/