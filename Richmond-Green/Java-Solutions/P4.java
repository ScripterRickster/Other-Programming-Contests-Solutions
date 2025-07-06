import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] heights = new int[N];
        for (int i = 0; i < N; i++) {
            heights[i] = sc.nextInt();
        }
        int[] dp = new int[N];
        for (int i = 0; i < N; i++) {
            dp[i] = heights[i];
            for (int j = 0; j < i; j++) {
                if (heights[j] < heights[i]) {
                    dp[i] = Math.max(dp[i], dp[j] + heights[i]);
                }
            }
        }
        int maxSum = 0;
        for (int i = 0; i < N; i++) {
            maxSum = Math.max(maxSum, dp[i]);
        }
        System.out.println(maxSum);
    }
}
