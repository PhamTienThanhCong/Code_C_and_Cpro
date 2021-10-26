#include <stdio.h>
#include <stdlib.h>

void QuickSort(int a[], int left, int right)
{
    if (left < right)
    {
        int pointValue = a[left];
        int point = right;
        int check = 1;
        while (left < right){
            check = 1;
            while ((check == 1) && (left < right))
            {
                if (pointValue > a[right]){
                    a[left] = a[right];
                    left++;
                    check = 0;
                }
                else if(pointValue < a[right]){
                    right--;
                }
            }
            check = 1;
            while ((check == 1) && (left < right))
            {
                if (pointValue < a[left]){
                    a[right] = a[left];
                    right--;
                    check = 0;
                }
                else if(pointValue > a[left]){
                    left++;
                }
            }
            a[left] = pointValue;
            
        }
        QuickSort(a,0,left-1);
        QuickSort(a,left+1,point);
    }
}

int main()
{
    int a[12] = {0, 42, 23, 74, 11, 65, 58, 94, 36, 99, 87, 30000};
    int n = 12;
    QuickSort(a,0,n-1);
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
}