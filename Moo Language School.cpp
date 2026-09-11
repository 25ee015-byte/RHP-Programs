#include <iostream>
#include <vector>
using namespace std;
int main(){
	int M; cin >> M;
	while(M--){	
		int n, k;
		cin >> n >> k;
		string s;cin >> s;
		int f = n/k;
		vector<bool> owns(f, false);
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '0'){
				int fi = i/k;
				owns[fi] = true;
			}
		}
		int count = 0;
		for(int i = 0; i < f; i++){
			if(!owns[i]) count++;
		}
		cout << count << endl;
	}
}