function processData(input) {
    var lines = input.split('\n');
    var numOfTests = parseInt(lines[0]);
    for (var i = 1; i <= numOfTests; ++i) {
        var nums = lines[i].split(' ')
        var a = parseInt(nums[0]), b = parseInt(nums[1]), N = parseInt(nums[2]);
        var currentSum = a;
        for (var j = 0; j < N; ++j) {
            currentSum += Math.pow(2, j) * b;
            process.stdout.write(currentSum.toString() + " ");
        }
        process.stdout.write("\n");
    }
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