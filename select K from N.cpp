#include<bits/stdc++.h>
using namespace  std;
int C(int n, int k) {
    double res = 1;
    for (int i = 1; i <= k; ++i)
        res = res * (n - k + i) / i;
    return (int)(res + 0.01);
}


int main()
{

    int n ,k;
    cin>>n>>k;
    cout<<C(n,k)<<endl;
}
