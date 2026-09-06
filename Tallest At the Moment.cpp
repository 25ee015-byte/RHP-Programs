#include<iostream>
#include<vector>
#include<array>
#include<algorithm>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> arr(n);
    vector<int> ltarr;
    vector<int> htarr;
    int h,l;
    for(int i=0;i<n;i++){
        cin>>h>>l;
        arr[i]=make_pair(h,l);
    }
    sort(arr.begin(),arr.end(),greater<>());
    int pt =0;
    for(auto[h,l]:arr){
        if(l>pt){
            pt=l;
            ltarr.push_back(l);
            htarr.push_back(h);
        }
    }
    int q;
    cin>>q;
    while(q--){
        int t;
        cin>>t;
        auto ub=upper_bound(ltarr.begin(),ltarr.end(),t);
        int idx=ub - ltarr.begin();
        cout<<htarr[idx]<<endl;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}