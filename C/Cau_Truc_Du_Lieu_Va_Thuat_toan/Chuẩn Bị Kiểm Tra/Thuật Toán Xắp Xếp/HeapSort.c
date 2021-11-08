#include<stdio.h>
#include<stdlib.h>
#include<math.h>
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
    for (i = (n/2); i >=1; i--)
        ADJUST(K, i, n);
    for (i = n-1 ; i >= 1; i--) {
        int tmp = K[1];
        K[1] = K[i+1] ;
        K[i+1] = tmp;
    ADJUST(K, 1, i );
    }
}

void print_array(int K[], int n) {
	int i;
	for (i = 1; i < n; i++) {
		printf("%d ", K[i]);
	}
}

int main(){
	int K[12]={1,5,7,3,4,12,36,24,48,58,67,1000};
	printf("\nMang truoc khi sap xep: ");
	print_array(K, 11);
	printf("\nMang sau khi sap xep: ");
	HeapSort(K,10);
	print_array(K,11);
}
