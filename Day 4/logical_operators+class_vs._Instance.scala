/////////////////////////////////////////////////////////////////////
///////////////////////////// Solution //////////////////////////////
/////////////////////////////////////////////////////////////////////

class Person {

    var age: Int = 0

    def this(initial_Age : Int) = {
        this()
        if (initial_Age < 0) {
            System.out.println("This person is not valid, setting age to 0.")
            age = 0;
        }
        else age = initial_Age
       
    }        

    def amIOld(): Unit = {
        if (age < 13)
            System.out.println("You are young.")
        else if (age < 18)
            System.out.println("You are a teenager.")
            else System.out.println("You are old.")

    }

    def yearPasses(): Unit = {
        age += 1
    }  

}

/////////////////////////////////////////////////////////////////////
////////////////////////// HackerRank Test //////////////////////////
/////////////////////////////////////////////////////////////////////

object Solution {

    def main(args: Array[String]) {
        var T = scala.io.StdIn.readInt()
        var i = 0
        for (i <- 1 to T) {        
             var age = scala.io.StdIn.readInt()
             var p = new Person(age)
             p.amIOld()
             var j = 0
             for( j <- 1 to 3) {
                 p.yearPasses()
             }
             p.amIOld()
             System.out.println()
        }
    }
}