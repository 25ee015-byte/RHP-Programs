#include <iostream>
using namespace std;
int hcf(int a, int b){
	return (b==0)?(a):(hcf(b, a%b));
}
int main(){
	int m;cin >> m;
	while(m--){
		int n; cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];	
		}
		cout << hcf(arr[0], arr[n-1]) << endl;
	}
}