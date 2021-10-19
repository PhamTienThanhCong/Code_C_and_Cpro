#include <stdio.h>
#include <stdlib.h>

void selection_sort(int k[], int n)
{
    int i, j, m, x;
    for (i = 0; i < n; i++)
    {
        m = i;
        for (j = i + 1; j < n; j++)
            if (k[m] > k[j])
                m = j;
        if (m != i)
        {
            x = k[i];
            k[i] = k[m];
            k[m] = x;
        }
    }
}

void insert_sort(int k[], int n)
{
    int i, j, last;
    for (i = 1; i < n; i++)
    {
        last = k[i];
        j = i - 1;
        while (last < k[j])
        {
            k[j + 1] = k[j];
            j = j - 1;
        }
        k[j + 1] = last;
    }
}

void bubble_sort(int k[], int n)
{
    int i, j, x;
    for (i = 0; i < n; i++)
        for (j = n-1; j > i; j--)
            if (k[j-1]>k[j])
            {
                int teamp = k[j];
                k[j] = k[j-1];
                k[j-1] = teamp;
            }
}

int main()
{
    int a[] = {2, 1, 5, 4, 7};
    selection_sort(a,5);
    // insert_sort(a,5);
    // bubble_sort(a,5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}