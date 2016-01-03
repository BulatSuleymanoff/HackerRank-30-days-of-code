import java.util.*; //Scanner

public class Arithmetic {

    public static void main(String[] args) {
    
        Scanner sc = new Scanner(System.in);
        double originalPrice = sc.nextDouble();
        int tip = sc.nextInt();
        int tax = sc.nextInt();
        double res = originalPrice + (double)originalPrice * tip / 100 + (double)originalPrice * tax / 100;
        int finalPrice = (int)Math.round(res);
        System.out.println("The final price of the meal is $" + finalPrice + ".");
    }
}