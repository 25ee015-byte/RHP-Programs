#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
void solve(){
    int l,q;
    cin>>l>>q;
    set<int> st;
    st.insert(0);
    st.insert(l);
    while(q-- >0){
        int c,x;
        cin>>c>>x;
        if(c==1){
            st.insert(x);
        }
        else{
            auto ub=st.upper_bound(x);
            int result = *ub-*(prev(ub));
            cout<<result<<endl;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}