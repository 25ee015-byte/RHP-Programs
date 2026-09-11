#include <iostream>
#include <vector>
using namespace std;
int main(){
	int M; cin >> M;
	while(M--){
		int n; cin >> n;
		int odd = 0, eeq = 0, eoq = 0;
		for(int i = 0; i < n; i++){
			int curr; cin >> curr;
			if(curr&1) odd++;
			else{
				int q = curr/2;
				if(q&1) eoq++;
				else eeq++;
			}
		}
		cout << max(odd,max(eeq, eoq)) << endl;
	}
}