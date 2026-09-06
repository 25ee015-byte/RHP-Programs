
class Solution {

    private int find(int[] ldr, int node) {
        if (ldr[node] != node) {
            ldr[node] = find(ldr, ldr[node]); // Path Compression
        }
        return ldr[node];
    }

    private void join(int[] ldr, int lt, int rt) {
        ldr[find(ldr, rt)] = find(ldr, lt);
    }

    public int findCircleNum(int[][] g) {

        int n = g.length;

        int[] ldr = new int[n];

        // Initialize parent array
        for (int i = 0; i < n; i++) {
            ldr[i] = i;
        }

        // Union connected cities
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (g[i][j] == 1) {
                    join(ldr, i, j);
                }
            }
        }

        // Count unique leaders
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (find(ldr, i) == i) {
                count++;
            }
        }

        return count;
    }
}