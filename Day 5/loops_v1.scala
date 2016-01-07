object Solution {
    def main(args: Array[String]) {
        var numOfTests = scala.io.StdIn.readInt()
        for (i <- 1 to numOfTests) {
            var Array(a, b, n) = scala.io.StdIn.readLine.split(" ").map(_.toInt)
            var currentSum = a
            for (j <- 0 to n - 1) {
                currentSum += scala.math.pow(2, j).toInt * b
                System.out.print(currentSum.toString + " ")
            }
            System.out.println("")
        }
    }
}