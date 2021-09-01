#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for (i=0;i<60;i++)
        for (j=0;j<60;j++)
    {
        printf("%2d:%2d",i,j);
        sleep(1);
        system("cls");
    }
    return 0;
}
