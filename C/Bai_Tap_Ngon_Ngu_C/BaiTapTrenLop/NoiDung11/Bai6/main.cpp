#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char s1[100],s2[100],s3[200];
    char *p1,*p2,*p3;
    int dem,len3=0;
    printf("Nhap chuoi 1:");
    fgets(s1,100,stdin);
    printf("Nhap chuoi 2:");
    fgets(s2,100,stdin);
    s1[strlen(s1)-1]='\0';
    s2[strlen(s2)-1]='\0';
    p1=s1;p2=s2;p3=s3;
    dem=0;
    while(*(p1+dem)!='\0')
        *(p3+len3++)=*(p1+dem++);
    *(p3+len3)='\0';
    dem=0;
    while(*(p2+dem)!='\0')
        *(p3+len3++)=*(p2+dem++);
    *(p3+len3)='\0';
    printf("Chuoi 3:%s",s3);
}
