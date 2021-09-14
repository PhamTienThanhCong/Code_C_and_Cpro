#include<stdio.h>
#include <ctype.h>
int main(){
	char arr[100];
	char quit;
	int count = 0;
	printf("Nhap ten: ");
	while(quit != '\n'){
		scanf("%c", &quit);
		arr[count] = quit;
		++count;
	}
	printf("Ten vua nhap: ");
	int i;
	for(i = 0; i < count - 1; i++)
		printf("%c",arr[i]);

	printf("\n\nBai 1: \n");
        printf("in hoa: ");
        strupr(arr);
        printf("%s",arr);

	printf("\n\nBai 2: \n");
        char s1[100];
        int l=-1;
        for(i = 0; i < count - 1; i++)
            if (arr[i]!=32)
            {
                l++;
                s1[l]=arr[i];
            }
        printf("Xoa Dau cach giua ho, ten dem, ten: %s",s1);

	printf("\n\nBai 3: \n");
        char KiTu,s2[100];
        int n,j=-1;
        printf("Nhap Vao: ");
        scanf("%c",&KiTu);
        n=strlen(s1);
        for (i=0;i<n;i++)
            if (s1[i]!=KiTu)
            {
                j++;
                s2[j]=s1[i];
            }
        printf("Ket Qua Xoa Ki Tu Vua Nhap: %s",s2);

	printf("\n\nBai 4: \n");
        printf("%s =>: ",s2);
        for (i=0;i<strlen(s2);i++)
            printf("%d ",s2[i]);

	printf("\n\nBai 5: \n");
        int d[26];
        char y;
        for (y='A';y<='Z';y++)
        {
            d[y]=0;
            for (i=0;i<n;i++)
                if (s2[i]==y)
                    d[y]++;
        }
        printf("In Ra So Lan Xuat Hien: \n");
        for (y='A';y<='Z';y++)
            if (d[y]>0)
                printf("So %d Xat Hien %d Lan\n",y,d[y]);
}
