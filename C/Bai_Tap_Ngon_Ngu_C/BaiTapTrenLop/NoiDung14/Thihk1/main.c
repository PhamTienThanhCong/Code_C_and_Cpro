//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

//int main()
//{
//    char s[20];
//    int i;
//    printf("Nhap Xau: ");
//    scanf("%s",&s);
//    for (i=0;i<strlen(s);i+=x`2)
//        if (s[i]>='a'&&s[i]<='z')
//            s[i]=s[i]-32;
//    printf("%s",s);
//    return 0;
//}
#include<conio.h>
#include<stdio.h>
#include<string.h>
void chuyendoi(char s1[100])
{
    int i;
    for(i=0; i< strlen(s1); i++)
    {
        if(i %2==0)
        {
                    if(s1[i] > 95 && s1[i] < 122)
                    {
                                s1[i] -= 32;
                    }
        }
        else
        {
                    if(s1[i] >65 && s1[i] < 92)
                    {
                                s1[i] += 32;
                    }
        }
    }
    puts(s1);
}
int main()
{
    char s1[100];
    printf("nhap chuoi\n");
    gets(s1);
    chuyendoi(s1);
}
