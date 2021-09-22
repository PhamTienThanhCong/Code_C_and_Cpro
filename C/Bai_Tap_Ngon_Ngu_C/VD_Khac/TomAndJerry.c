#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    x=1;
    while(x<8) {
        y=8-x;
        z=11-x;
        if (y+z==15){
            break;
        }
        x++;
        if (x>=8){
            printf("so lieu khong phu hop");
            return 0;
        }
    }
    printf("jerry %d: \n",x);
    printf("tom %d: \n",y);
    printf("spike %d: \n",z);
    printf("%d ",x+y+z);
}