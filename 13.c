#include<stdio.h>
int main()
{
    int a,b,c,d,e;
      for(a=1;a<=10000;a++){
        for(b=1;b<=10000;b++){
            for(c=1;c<=10000;c++){
               for(d=1;d<=10000;d++){
                   for(e=1;e<=10000;e++){
              if (a*a*a*a + b*b*b*b + c*c*c*c +d*d*d*d ==e*e*e*e)
              printf("%d*%d*%d*%d + %d*%d*%d*%d + %d*%d*%d*%d + %d*%d*%d*%d = %d*%d%*d*%d\n",a,a,a,a,b,b,b,b,c,c,c,c,d,d,d,d,e,e,e,e);


                                }
                            }
                          }
                        }
                    }


    return 0;
}
