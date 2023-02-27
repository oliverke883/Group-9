/*calculate the simple interest for three sets of p,n and rate*/
#include <stdio.h>
main()
{
    int p,n,index;
    float rate ,interest ;
    index =1;
    while(index <=3)
    {
        printf("\n enter the value of principal\n");
        scanf("%d",&p);
        printf("\n enter the value of years \n");
        scanf("%d",&n);
        printf("\n enter the value of rate \n");
        scanf("%f",& rate);
        interest=p*n* rate/100;
        printf("the simple interest for index%d",index, "is%f\n",interest);
        index=index+1;
    }
}
