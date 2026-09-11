#include <iostream>
#include <vector>
#define ll long long int
using namespace std;
void solve(){
			ll x, y, k; cin >> x >> y >> k;
			ll ans = 0, ctr = 0;
			while(ctr<k){
				int rem = (y+ctr)%(x+ctr);
				if(rem == y-x) break;
				ans += rem; 
				ctr++;
			}
			if(k>ctr){
				ans += (k-ctr) * (y-x);
			}
			cout << ans << endl;
}
int main(){
	int M; cin >> M;
	while(M--){
		solve();
	}
}