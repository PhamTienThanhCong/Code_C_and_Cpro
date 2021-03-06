#include<stdio.h>
#include<stdlib.h>

int QuickSort(int K[], int LB, int UB)
{
	int i,m;
	i = LB ;
	int j = UB;
	int pivot =K[(LB+UB)/2];
	do{
		while (K[i] < pivot ) i = i+1;
		while (K[j] > pivot)  j = j-1;	
	
		if (i <= j) {
			m = K[i];
			K[i] = K[j];
			K[j] = m;
			i = i+1;
			j = j-1;
		}
	}
	while(i<=j);
		if(LB<j)
			QuickSort(K,LB,j);
		if(i<UB)
			QuickSort(K,i,UB);
}

void print_array(int k[], int n) {
	int i;
	for (i = 1; i < n; i++) {
		printf("%d ", k[i]);
	}
}

int main(void) {
	int K[12]={0,42,23,74,11,65,58,94,36,99,87,30000};
	printf("\nMang truoc khi sap xep: ");
	print_array(K, 11);
	QuickSort(K,1,10);
	printf("\nMang sau khi sap xep:   ");
	print_array(K,11);
	return 0;
}
