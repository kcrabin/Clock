#include<stdio.h>
int main()
{
    int a,f,s,t,n=0;
    for(a=100;a<=999;a++)
       {

       f = a / 100;
       s = (a / 10) % 10;
       t = a % 10;
       if(f>s && s>t)
            n++;

       }
       printf("%d\t",n);




    return 0;
}
