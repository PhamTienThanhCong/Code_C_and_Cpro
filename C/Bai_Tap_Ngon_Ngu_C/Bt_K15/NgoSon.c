#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void printHeapSort(int n, int a[]){
    for (int i=1; i<n; i++){
        if (i<=1){
            printf("\n");
            for (int j=0; j<=14; j++){
                printf("  ");
            }
            printf("%2d",a[i]);
        }else if (i<=3){
            if (i == 2){
                printf("\n");
                for (int j=0; j<=6; j++){
                    printf("  ");
                }    
                printf("%2d",a[i]);
            }
            else{
                for (int j=0; j<=14; j++){
                    printf("  ");
                } 
                printf("%2d",a[i]);
            }
            
        }else if (i<=7){
            if (i == 4){
                printf("\n");
               for (int j=0; j<=2; j++){
                    printf("  ");
                }    
                printf("%2d",a[i]);
            }else{
                for (int j=0; j<=6; j++){
                    printf("  ");
                } 
                printf("%2d",a[i]);
            }
            
        }else if (i<=15){
            if (i == 8){
                printf("\n");
                for (int j=0; j<1; j++){
                    printf("  ");
                }    
                printf("%2d",a[i]);
            }else{
                for (int j=0; j<=2; j++){
                    printf("  ");
                } 
                printf("%2d",a[i]);
            }
            
        }else if (i<=31){
            if (i == 16){
                printf("\n");
                for (int j=0; j<0; j++){
                    printf("  ");
                }    
                printf("%2d",a[i]);
            }else{
                for (int j=0; j<1; j++){
                    printf("  ");
                } 
                printf("%2d",a[i]);
            }
            
        }
        
    }
}

void ADJUST(int K[],int i, int n) {
    int KEY = K[i]; 
    int j = 2 * i; 
    while (j <= n) { 
        if ( (j < n) && (K[j] < K[j+1]) ) j = j+1; 
        if (KEY > K[j]) { 
            K[ (j/2) ] = KEY; 
            return; 
        }       
        K[ (j/2) ] = K[j]; 
        j = 2 * j ; 
    } 
    K[ (j/2) ] = KEY; 
}

void HeapSort(int K[], int n) {
    int i;
    printf("\n\n\t-Day Ban Dau:");
    printHeapSort(n,K); 
    for (i = (n/2); i >=1; i--){
        ADJUST(K, i, n); 
    }
    printf("\n\n\t-vun Dong:");
    printHeapSort(n,K); 
    for (i = n-1 ; i >= 1; i--) {
        int tmp = K[1];
        K[1] = K[i] ;
        K[i] = tmp;
        printf("\n\n\t-Doi Cho:");
        printHeapSort(n,K); 
    ADJUST(K, 1, i-1 );
    printf("\n\n\t-vun lai Dong:");
    printHeapSort(n,K); 
    }
}

int main(){
    int a[1000] ;
    int n ;
    a[0]=0;
    printf("Nhap So Luong Phan Tu: ");
    scanf("%d",&n);
    a[n+1]=10000;
    a[n]=0;
    printf("Nhap Cac Phan Tu: ");
    for(int i=1; i<n; i++){
        scanf("%d",&a[i]);
    }
    system("cls");
    printf("\t\tMO TA GIAI THUAT HEAP SORT\n");
    HeapSort(a,n);
    printf("\n\tXAP XEP DAY HOAN THANH\n");
    printHeapSort(n,a); 
}