#include <stdio.h>

int main()
{
    int i;
    int x;
    for(i=10;i<=99;i++)
    {
    x = i % 10;
    if(i == x * 7)
        printf("%d/t",i);
    }
return 0;

}



