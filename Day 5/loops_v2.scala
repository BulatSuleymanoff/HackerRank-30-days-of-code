object Solution {
    def main(args: Array[String]) {
        var ans = ""
        val numOfTests = scala.io.StdIn.readInt()
        for (i <- 1 to numOfTests) {
            val Array(a, b, n) = scala.io.StdIn.readLine.split(" ").map(_.toInt)
            var currentSum = a
            for (j <- 0 to n - 1) {
                currentSum += scala.math.pow(2, j).toInt * b
                ans += currentSum.toString + " "
            }
            ans += "\n"
        }
        System.out.print(ans)
    }
}