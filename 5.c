#include <stdio.h>

int main(){
    int i;
    int x;
    for(i=100000;i<=999999;i++)
        {
        x = i%9127;
        if ( x ==0 )
    printf("%d\t",i);
        }
    return 0;
}
