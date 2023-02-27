/*program to read a lowercase character and display its uppercase equivalent*/
#include<stdio.h>
#include<ctype.h>
int main()
{
    int lower ,upper;
    printf("enter a character\n");
    lower=getchar();
    upper=toupper(lower);
    putchar(upper);
}
