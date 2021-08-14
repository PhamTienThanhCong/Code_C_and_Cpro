#include<bits/stdc++.h>

using namespace std;
int main() {
	double gttb, max_l=0, min_l=1000;
	int n;
	cin >> n;
	int a[n+1], sum;
	for (int i=0; i<n;i++){
		cin >> a[i];
	}
	for (int i=0;i<n-1;i++){
		sum=a[i];
		int tem=1;
		for (int j=i+1;j<n;j++){
			sum+=a[j];
			tem++;
			gttb=(float(sum)/float(tem));
			max_l=max(gttb,max_l);
			min_l=min(gttb,min_l);
		}
	}
	cout<<fixed<<setprecision(3)<<min_l<<' ';
	cout<<fixed<<setprecision(3)<<max_l<<endl;
}
