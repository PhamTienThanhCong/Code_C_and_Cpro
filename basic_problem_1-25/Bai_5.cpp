    #include<iostream>
 
    using namespace std;
 
    int main()
    {
        int n;
        cin>>n;
        int a[n],sum_a=0;
        for (int i=0;i<n;i++){
            cin>>a[i];
            sum_a+=a[i];
        }
        int tb_min=sum_a;
        for (int i=0;i<n;i++){
            int dem=sum_a;
            for (int j=i;j<n;j++){
                dem-=a[j];
                tb_min=min(dem,tb_min);
            }
        }
        cout<<tb_min;
}