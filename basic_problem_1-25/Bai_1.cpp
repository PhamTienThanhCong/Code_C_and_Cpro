#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main()
{
    int n;
    float a[1001],Tb_min=90000,Tb_max=0,sum,dem;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for (int i=1;i<n;i++){
        sum = a[i];
        dem = 1;
        for (int j=i+1;j<=n;j++){
            dem++;
            sum += a[j];
            Tb_min = min(sum/dem,Tb_min);
            Tb_max = max(sum/dem,Tb_max);
        }
    }
    cout<<fixed<<setprecision(3)<<Tb_min<<' ';
	cout<<fixed<<setprecision(3)<<Tb_max<<endl;
}