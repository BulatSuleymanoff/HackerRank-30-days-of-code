using System;
class Solution {
    static void Main(String[] args) {
        string ans = "";
        int numOfTests = Convert.ToInt32(Console.ReadLine());
        for (int i = 0; i < numOfTests; ++i) {
    	    string[] strIn = Console.ReadLine().Split(' ');
            int a = Convert.ToInt32(strIn[0]);
            int b = Convert.ToInt32(strIn[1]);
            int N = Convert.ToInt32(strIn[2]);
    	    int currentSum = a;
    	    for (int j = 0; j < N; ++j) {
    		    currentSum += Convert.ToInt32(Math.Pow(2, j)) * b;
    		    ans += currentSum.ToString() + " ";
    	    }
    	    ans += "\n";
        }
        Console.Write(ans);
    }
}