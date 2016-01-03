function processData(input) {
    var originalPrice = parseFloat(input.split("\n")[0]);
    var tip = parseFloat(input.split("\n")[1]);
    var tax = parseFloat(input.split("\n")[2]);
    var res = originalPrice * (1 + tip / 100 + tax / 100);
    var finalPrice = Math.round(res);
    process.stdout.write("The final price of the meal is $" + finalPrice + ".");
} 

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});
