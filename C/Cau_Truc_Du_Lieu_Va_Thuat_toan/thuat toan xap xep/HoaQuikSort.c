#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void PART(int K[], int LB, int UB, int j)
{
	int i=LB+1;
	j=UB;
	while(i <= j){
		while(K[i] < K[LB]) i++;
		while(K[j] > K[LB]) j--;
		if(K[i] < K[j]){
			int t = K[i];
				K[i] = K[j];
				K[j] = t;
			i++;
			j--;
		}
		if(K[LB] > K[j]){
				int t = K[i];
					K[i] = K[j];
					K[j] = t;
			i++;
			j--;
		}
	}
}

void QUICKSORT(int K[], int LB, int UB)
{
	int j;
	if(LB < UB){
		PART(K,LB,UB,j);
		QUICKSORT(K,LB,j-1);
		QUICKSORT(K,j+1,UB);
	}
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%3d",arr[i]);
    printf("\n");
}
 
int main(){
    int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int n = sizeof(arr)/sizeof(arr[0]);
    QUICKSORT(arr, 0, n-1);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}