#include <iostream>
#include <vector>
using namespace std;
int main(){
	int M; cin >> M;
	while(M--){
		int n, m;
		cin >> n >> m;
		vector<int> ctr(m+1, 0);
		for(int i = 0; i < n; i++){
			int curr; cin >> curr;
			ctr[curr]++;
		}
		vector<int> psum(m+1, 0);
		for(int i = 1; i <= m; i++){
			psum[i] = psum[i-1]+ctr[i];
		}
		int ans = 0;
		for(int x = 1; x <= m; x++){
			int carcnt = psum[m] - psum[x-1];
			if(2*x <= m){
				carcnt = carcnt + ctr[2*x];
			}
			ans = max(ans, carcnt);
		}
		cout << ans << endl;
	}
}