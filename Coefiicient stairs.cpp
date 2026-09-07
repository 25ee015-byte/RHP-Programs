#include <bits/stdc++.h>
using namespace std;
using combo = vector<int>;
vector<combo> ans;	
void dfs(int slot, int bal, combo &arr) {
	if (slot == 1) {
        arr[0] = bal;
        ans.push_back(arr);
        return;
    }
	arr[slot - 1] = 0;
    while (bal >= 0) {
        dfs(slot - 1, bal, arr);
        arr[slot - 1]++;
        bal -= slot;
    }
}
void solve() {
    int N, K;
    cin >> N >> K;
    combo arr(N, 0);
    dfs(N, K, arr);
	sort(ans.begin(), ans.end());
    for (auto &v : ans) {
        for (int i = 0; i < N; i++) {
            cout << v[i] << " ";
        }
        cout << '\n';
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}