#include <bits/stdc++.h>

using namespace std;

void selectionSort(int a[], int n)
{
    int i, j, min, temp, t = 0;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
            t++;
        }
        if (a[i] > a[min])
        {
            swap(a[i], a[min]);
            t++;
        }
    }
    cout << t;
}

void insertionSort(int a[], int array_size)
{
    int i, j, last;
    for (i = 1; i < array_size; i++)
    {
        last = a[i];
        j = i;
        while ((j > 0) && (a[j - 1] > last))
        {
            a[j] = a[j - 1];
            j = j - 1;
        }
        a[j] = last;
        cout << endl<<"Lan "<<i<<": ";
        for (int t = 0; t < array_size; t++)
        {
            cout << a[t] << ' ';
        }
    } // end for
} // end of isort

void bubbleSort(int a[], int n)
{
    int i, j;
    for (i = (n - 1); i >= 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (a[j - 1] > a[j])
                swap(a[j - 1], a[j]);
        }
        cout << endl
             << "Lan " << n - i << ": ";
        for (int t = 0; t < n; t++)
        {
            cout << a[t] << ' ';
        }
    }
}

int main()
{
    int a[10] = {10, 1,7,15,6,3,2,20};
    int n=8;
    cout << "start: ";
    for (int t = 0; t < n; t++)
    {
        cout << a[t] << ' ';
    }
    //selectionSort(a,n);
    //insertionSort(a,n);
    bubbleSort(a, n);
}