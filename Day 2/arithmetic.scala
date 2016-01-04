object Solution {

    def main(args: Array[String]) {
        var originalPrice : Float = scala.io.StdIn.readFloat;
        var tip : Int = scala.io.StdIn.readInt;
        var tax : Int = scala.io.StdIn.readInt;
        var res : Float = originalPrice * (1 + tip.toFloat / 100 + tax.toFloat / 100);
        var finalPrice : Int = scala.math.round(res);
        println("The final price of the meal is $" + finalPrice + ".");
    }
}