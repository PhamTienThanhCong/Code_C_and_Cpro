#include <stdio.h>
#include <stdlib.h>

void ve()
{
    printf("\n+");
    for (int i=1;i<=40;i++)
        printf("-");
    printf("+\n");
}
void cach1(int t)
{
    printf("+");
    for (int i=1;i<=t;i++)
        printf(" ");
}
void cach2(int t,int b)
{
    for (int i=1;i<=40-b-t;i++)
        printf(" ");
    printf("+");
}
void set_color(const char *color) {
    char cmd[512];
    sprintf(cmd, "echo|set /p=\"\e[%sm\"", color);
    system(cmd);
}
int main()
{
    char s3[100];
    fgets(s3,25,stdin);
    s3[strlen(s3)-1]='\0';
    for (int i=0;i<=35;i++)
    {
        set_color("01;32");
        system("cls");
        ve();
        cach1(i);
        set_color("01;33");
        for (int j=0;j<strlen(s3);j++)
            printf("%c",s3[j]);
        set_color("01;31");
        cach2(i,strlen(s3));
        ve();
        sleep(1);
}
}
