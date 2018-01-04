#include<stdio.h>
int main(){
  int a;
  for(a=100;a<=999;a++)
  {
      if(a%2==1 && a%3==1 && a%3==1 && a%4==1 && a%5==1 && a%6==1 && a%7==1)
        printf("%d\t",a);
  }

return 0;
}
