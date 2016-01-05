import java.util.*;

public class Solution {

    public static void main(String[] args) {

        Scanner scIn = new Scanner(System.in);
        int N = scIn.nextInt();            
        if (N % 2 != 0)
            System.out.println("Weird");
        else {
            if (N >= 6 && N <= 20)
                System.out.println("Weird");
            else System.out.println("Not Weird");
        }
            
    }
}