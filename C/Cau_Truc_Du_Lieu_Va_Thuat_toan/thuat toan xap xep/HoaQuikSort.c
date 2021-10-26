#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void change(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int Part(int K[], int LB, int UB)
{
	int i,m;
	i = LB+1;
	int j = UB-1;
	while (i < j)
	{
		while ((K[i] < K[LB]) && (i < j)){
			i++;
		}
		while ((K[j] > K[LB]) && (i < j)){
			j--;
		}
		if (i < j){
			change(K+i,K+j);
			i++;
			j--;
		}
	}

	if (K[j-1] < K[LB]){
		change(K+LB,K+j-1);
			if (K[j-1] > K[j]){
			change(K+j-1,K+j);
		} 
	} else{
		j--;
	}
	
	return j;
}

void QuickSort(int K[], int LB, int UB)
{
	int j;
	if (LB < UB){
		j = Part(K,LB,UB);
		QuickSort(K,LB,j);
		QuickSort(K,j+1,UB);
	}
}

void print_array(int k[], int n)
{
	int i;
	for (i = 0; i < n; i++){
		printf("%d ", k[i]);
	}
}

int main(void)
{
	int K[12] = {0, 42, 23, 74, 11, 65, 58, 94, 36, 99, 87, 30000};
	printf("\nMang truoc khi sap xep: ");
	print_array(K, 12);
	QuickSort(K, 0, 12);
	printf("\nMang sau khi sap xep: ");
	print_array(K, 12);
	return 0;
}