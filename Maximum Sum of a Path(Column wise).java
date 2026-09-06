import java.util.*;
public class Program_5 {
    public static int[] getmax(int dp[][], int col, int r) {
        int fmax = Math.max(dp[0][col], dp[1][col]);
        int smax = Math.min(dp[0][col], dp[1][col]);
        for(int i = 2; i < r; i++) {
            if(dp[i][col] >= fmax) {
                smax = fmax;
                fmax = dp[i][col];
            }
            else if(dp[i][col] >= smax) {
                smax = dp[i][col];
            }
        }
        return new int[]{fmax, smax};
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int r = s.nextInt();
        int c = s.nextInt();
        int arr[][] = new int[r][c];
        int dp[][] = new int[r][c];
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                arr[i][j] = s.nextInt();
            }
        }
        for(int i = 0; i < r; i++) {
            dp[i][0] = arr[i][0];
        }
        // DP
        for(int j = 1; j < c; j++) {
            int max[] = getmax(dp, j - 1, r);
            for(int i = 0; i < r; i++) {
                if(dp[i][j - 1] == max[0]) {
                    dp[i][j] = arr[i][j] + max[1];
                }
                else {
                    dp[i][j] = arr[i][j] + max[0];
                }
            }
        }
        System.out.println(getmax(dp, c - 1, r)[0]);
    }
}