import java.util.*;
public class Program_10 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int q = sc.nextInt();
        int MAX = 200002;
        int[] diff = new int[MAX];
        for (int i = 0; i < n; i++) {
            int l = sc.nextInt();
            int r = sc.nextInt();
            diff[l] += 1;
            diff[r + 1] -= 1;
        }
        int[] cover = new int[MAX];
        for (int i = 1; i < MAX; i++) {
            cover[i] = cover[i - 1] + diff[i];
        }
        int[] good = new int[MAX];
        for (int i = 1; i < MAX; i++) {
            good[i] = good[i - 1] + (cover[i] >= k ? 1 : 0);
        }
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < q; i++) {
            int l = sc.nextInt();
            int r = sc.nextInt();
            sb.append(good[r] - good[l - 1]).append("\n");
        }
        System.out.print(sb);
    }
}