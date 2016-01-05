object Solution {

    def main(args: Array[String]) {
        var N : Int = scala.io.StdIn.readInt;
        if (N % 2 != 0)
            println("Weird");
        else {
            if ((N >= 6 && N <= 20))
                println("Weird");
            else println("Not Weird");
        }
    }
}
