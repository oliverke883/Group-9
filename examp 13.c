#include<stdio.h>
int main()
{
    int student[4][2];
    int i,j;
    for (i=0;i<=3;i++)
    {
        printf("\n enter admission number and marks");
        scanf("%d%d",&student[i][0],&student[i][1]);
    }
    for(i=0;i<=3;i++)
        printf("%d%d\n",student[i][0],student[i][1]);
}
