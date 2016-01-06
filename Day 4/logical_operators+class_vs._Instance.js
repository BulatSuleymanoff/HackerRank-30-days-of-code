process.stdin.resume();
process.stdin.setEncoding('ascii');

var input_stdin = "";
var input_stdin_array = "";
var input_currentline = 0;

process.stdin.on('data', function (data) {
    input_stdin += data;
});

process.stdin.on('end', function () {
    input_stdin_array = input_stdin.split("\n");
    main();    
});

function readLine() {
    return input_stdin_array[input_currentline++];
}

/////////////////////////////////////////////////////////////////////
///////////////////////////// Solution //////////////////////////////
/////////////////////////////////////////////////////////////////////

function Person(initial_Age){
    if (initial_Age < 0) {
        process.stdout.write("This person is not valid, setting age to 0.\n");
        this.age = 0;
    }
    else this.age = initial_Age;
    this.amIOld=function(){
        if (this.age < 13)
            process.stdout.write("You are young.\n");
        else if (this.age < 18)
            process.stdout.write("You are a teenager.\n");
            else process.stdout.write("You are old.\n");

  };
   this.yearPasses=function(){
       this.age += 1;
   };
}

/////////////////////////////////////////////////////////////////////
////////////////////////// HackerRank Test //////////////////////////
/////////////////////////////////////////////////////////////////////

function main() {
	var T = parseInt(readLine());
	for (i = 0; i < T; i++){
    	var age = parseInt(readLine());
    	var p = new Person(age);
    	p.amIOld();
    	for(j = 0; j < 3;j++){
        	p.yearPasses(); 
    	}
    	p.amIOld();
    	console.log("");   
	}
}