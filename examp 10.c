#include <stdio.h>
main()
{
    int i,j;
    for(i=1;i<=2;i++)
    {
        for (j=1;j<=2;j++)
        {
            if(i==j)
                continue;
            else
                printf("%d%d\n",i,j);
        }
    }
}
