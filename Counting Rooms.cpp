#include <iostream>
#include <vector>
#include <string>

using namespace std;
void dfs(int r, int c, int i, int j, vector<string>& grid) {
   if (i < 0 || i >= r || j < 0 || j >= c || grid[i][j] == '#') {
        return;
    }
    grid[i][j] = '#';
    dfs(r, c, i - 1, j, grid); 
    dfs(r, c, i + 1, j, grid); 
    dfs(r, c, i, j - 1, grid);
    dfs(r, c, i, j + 1, grid); 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int r, c;
    if (!(cin >> r >> c)) return 0;
    vector<string> grid(r);
    for (int i = 0; i < r; i++) {
        cin >> grid[i];
    }
    int room = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (grid[i][j] == '.') {
                room++;
                dfs(r, c, i, j, grid);
            }
        }
    }

    cout << room << "\n";
    return 0;
}