#include <stdio.h>
int main()
{
    float avg,sum=0;
    int i;
    int marks[10];/*array declaration*/
    for(i=0;i<=9;i++)
        {
          printf("|n Enter mark\t%d",i);
          scanf("%d",&marks [i]); /*store data in the array */
          sum=sum+marks[i];/*read data from the array */
        }
        avg=sum/10;
        for(i=0;i<=9;i++)
            printf("%d",marks [i]);
        printf("\n The mark is %4.2f",(avg));

}
