#include<iostream>
#include<vector>
#include<array>
#include<algorithm>
#define ll long long int
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    ll ans=0;
    for(int i=0;i<n;i++){
        auto ub = upper_bound(arr.begin(),arr.end(),arr[i]);
        int h=arr.end()-ub;
        auto lb=lower_bound(arr.begin(),arr.end(),arr[i]);
        int l=lb-arr.begin();
        ans+=1ll*h*l;

    }
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}