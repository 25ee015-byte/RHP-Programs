#include<iostream>
#include<vector>
using namespace std;
int main(){
	int N, Q; cin >> N >> Q;
	vector<int> pos(N+1, 0);
	for(int i=1; i<=N; i++){
		int p; cin>>p;
		pos[p] = i;
	}
	int nxtidx = N+1;
	while(Q--){
		int val; cin>>val;
		pos[val] = nxtidx++;
	}
	vector<pair<int, int>> arr;
	for(int ctr = 1; ctr<=N; ctr++){
		arr.push_back(make_pair(pos[ctr], ctr));
	}
	sort(arr.begin(), arr.end());
	for(auto[pos, val] : arr){
		cout << val << " ";
	}
	cout << endl;
}