#include<bits/stdc++.h>
#define DilligentArch() ios_base::sync_with_stdio(false); cin.tie(0),cout.tie(0);
#define testcase(t) int t; cin>>t; while(t--)
#define pb push_back
typedef long long ll;
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)cin>>arr[i];
    ll main=arr[0];
    ll curr=0;
    for(ll i=0;i<n;i++){
         curr+=arr[i];
         main=max(main,curr);
         if(curr<0){
            curr=0;
         }
    }
    cout<<main<<endl;
}

int main()

{

    DilligentArch()

    //testcase(t){

        solve();

    //}

}

