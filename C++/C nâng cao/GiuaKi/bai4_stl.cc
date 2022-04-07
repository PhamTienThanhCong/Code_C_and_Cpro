#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, int> countFreq(int arr[], int n)
{
	unordered_map<int, int> mp;

	for (int i = 0; i < n; i++)
		mp[arr[i]]++;
    return mp;
}



int main()
{
	int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
	unordered_map<int, int> mp = countFreq(arr, n);
    cout << "\nCau 1\n";
    for (auto x : mp)
		cout << x.first << " " << x.second << endl;
    
    cout << "\nCau 2\n";

    int min_value = INT_MAX;
    int max_value = INT_MIN;
    int max_count = 0;

    for (auto x : mp){
        if (x.second > max_count){
            max_count = x.second;
        }
        if (x.first > max_value){
            max_value = x.first;
        }
        if (x.first < min_value){
            min_value = x.first;
        }
    }

    cout << min_value << " " << mp.find(min_value)->second << endl;
    cout << max_value << " " << mp.find(max_value)->second << endl;

    for (auto x : mp){
        if (x.second == max_count){
		    cout << x.first << " " << x.second << endl;
        }
    }

	return 0;
}
