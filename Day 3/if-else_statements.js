process.stdin.resume();

var input = "";

process.stdin.on('data', function (data) {
    input += data;
});

process.stdin.on('end', function () {
    main();    
});

function main() {
    var N = parseInt(input.split()[0]);
    if (N % 2)
        process.stdout.write("Weird");
    else {
        if (N >= 6 && N <= 20)
            process.stdout.write("Weird");
        else process.stdout.write("Not Weird");
    }
}