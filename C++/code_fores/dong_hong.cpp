#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

int main()
{
    for (int t = 0; t < 24; t++)
        for (int j = 0; j < 60; j++)
        {
            for (int i = 0; i < 60; i++)
            {
                cout << t << ':' << j << ':' << i << endl;
                sleep(1);
                system("cls");
            }
        }
}