
#include <stdio.h>

int main(){
    int age;
    char name[30];
    printf("\nNhap tuoi: "); scanf("%d", &age);
    getchar(); // đọc ký tự '\n'
    printf("\nNhap ten: "); fgets(name, sizeof name, stdin);
    printf("%s - %d", name, age);
}
