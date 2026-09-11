#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	int N; cin >> N;
	vector<int> cmn(26, INT_MAX);
	for(int i=0; i<N; i++){
		string x; cin >> x;
		vector<int> curr(26, 0);
		for(char c: x){
			curr[(c - 'a')]++;
		}
		for(int i=0; i<26; i++){
			cmn[i] = min(cmn[i], curr[i]);
		}
	}
	for(int i=0; i<26; i++){
		while(cmn[i]--) cout << (char)('a'+i);
	}
}