#include <stdio.h>

int main()
{
    struct Student
    {
        int num;
        char name[20];
        float score;
    } student1, student2;
    scanf("%d %s %f", &student1.num, student1.name, &student1.score);
    scanf("%d %s %f", &student2.num, student2.name, &student2.score); //name是数组名，本身就代表地址，再加&就是画蛇添足
    printf("The higher score is:");
    if (student1.score > student2.score)
    {
        printf("%d %s %5.2f\n", student1.num, student1.name, student1.score);
    }
    else if (student1.score < student2.score)
    {
        printf("%d %s %5.2f\n", student2.num, student2.name, student2.score);
    }
    else
    {
        printf("%d %s %5.2f\n", student1.num, student1.name, student1.score);
        printf("%d %s %5.2f\n", student2.num, student2.name, student2.score);
    }
    return 0;
}
/*
1 lilei 118
2 hanmeimei 116
The higher score is:1 lilei 118.00
*/