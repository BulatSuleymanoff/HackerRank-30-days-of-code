num_of_tests = gets().to_i()
for test in 0..num_of_tests-1
    str_in = gets().split(/ /).map!{ |o| o.to_i() }
    a = str_in[0]
    b = str_in[1]
    n = str_in[2]
    current_sum = a
    for i in 0..n-1
        current_sum += 2 ** i * b
        print current_sum.to_s() + " "
    end
    puts ""
end