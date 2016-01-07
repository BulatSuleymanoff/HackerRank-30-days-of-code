import java.util.*;

public class Solution {
    public static void main(String[] args) {
        String ans = "";
        Scanner scIn = new Scanner(System.in);
        int numOfTests = scIn.nextInt();
        for (int i = 0; i < numOfTests; ++i) {
            int a = scIn.nextInt();
            int b = scIn.nextInt();
            int N = scIn.nextInt();
            int currentSum = a;
            for (int j = 0; j < N; ++j) {
                currentSum += (int)Math.pow(2, j) * b;
                ans += currentSum + " ";
            }
            ans += "\n";
        }
        System.out.print(ans);
    }
}