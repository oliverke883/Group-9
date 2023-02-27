#include<stdio.h>
#include<ctype.h>
#define EOL '\n'
int main()
{
    char letter [80];
    int tag,count;
    /*read the line in lower case*/
    count=0;
    while((letter[count]=getchar())!=EOL)
        ++count;
    /*display the uppercase text */
    count=0;
    while(count<tag)
        { putchar(toupper (letter[count]));
    }
}
