#include<stdio.h>
int main()
{
    static char name[]="STRING IN ARRAYS";
    int i;
    i=0;
    while (name[i]!='\0')
    {
        printf("%c",name[i]);
        i=i+1;
    }
}
