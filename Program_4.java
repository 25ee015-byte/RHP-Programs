import java.util.*;
public class Program_4 {
    public static int[] getmax(int dp[][], int r, int c) {
        int fmax = Math.max(dp[r][0], dp[r][1]);
        int smax = Math.min(dp[r][0], dp[r][1]);
        for(int i = 2; i < c; i++) {
            if(dp[r][i] >= fmax) {
                smax = fmax;
                fmax = dp[r][i];
            }
            else if(dp[r][i] >= smax) {
                smax = dp[r][i];
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
        for(int j = 0; j < c; j++) {
            dp[0][j] = arr[0][j];
        }
        // DP
        for(int i = 1; i < r; i++) {
            int max[] = getmax(dp, i - 1, c);
            for(int j = 0; j < c; j++) {
                if(dp[i - 1][j] == max[0]) {
                    dp[i][j] = arr[i][j] + max[1];
                }
                else {
                    dp[i][j] = arr[i][j] + max[0];
                }
            }
        }
        System.out.println(getmax(dp, r - 1, c)[0]);
    }
}