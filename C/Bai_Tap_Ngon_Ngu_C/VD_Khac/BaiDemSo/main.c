#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,Dv,Ch,i,d;
    printf("Nhap So: ");
    scanf("%d",&a);
    Dv=a%10;
    a=a/10;
    Ch=a%10;
    a=a/10;
        switch(a)
        {
            case 1: printf ("mot Tram "); break;
            case 2: printf ("Hai Tram "); break;
            case 3: printf ("Ba Tram "); break;
            case 4: printf ("Bom Tram "); break;
            case 5: printf ("Nam Tram "); break;
            case 6: printf ("Sau Tram "); break;
            case 7: printf ("Bay Tram "); break;
            case 8: printf ("Tam Tram "); break;
            case 9: printf ("Chin Tram "); break;
        }
        if (Ch!=Dv!=0) {
        switch(Ch)
        {
            case 0: printf ("Le "); break;
            case 1: printf ("muoi "); break;
            case 2: printf ("Hai muoi "); break;
            case 3: printf ("Ba muoi "); break;
            case 4: printf ("Bom muoi "); break;
            case 5: printf ("Nam muoi "); break;
            case 6: printf ("Sau muoi "); break;
            case 7: printf ("Bay muoi "); break;
            case 8: printf ("Tam muoi "); break;
            case 9: printf ("Chin muoi "); break;
        }
        switch(Dv)
        {
            case 1: printf ("mot "); break;
            case 2: printf ("Hai "); break;
            case 3: printf ("Ba "); break;
            case 4: printf ("Bom "); break;
            case 5: printf ("Nam "); break;
            case 6: printf ("Sau "); break;
            case 7: printf ("Bay "); break;
            case 8: printf ("Tam "); break;
            case 9: printf ("Chin "); break;
        }
        }
}
