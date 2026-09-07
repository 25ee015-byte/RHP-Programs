#include <bits/stdc++.h>
using namespace std;
void solve() {
    int N, K;
    cin >> N >> K;
    vector<int> cnt(K + 1, 0);
    for (int i = 0; i < N; i++) {
        int c;
        cin >> c;
        cnt[c]++;
    }
    int maxi = *max_element(cnt.begin() + 1, cnt.end());
    int canJoin = 0;
    for (int i = 1; i <= K; i++) {
        if (cnt[i] + 1 >= maxi) {
            canJoin++;
        }
    }
    cout << canJoin << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}