num_of_tests = input()
for test in range(num_of_tests):
    str_in = raw_input().split(' ')
    a = int(str_in[0])
    b = int(str_in[1])
    N = int(str_in[2])
    current_sum = a
    for i in range(N):
        current_sum += 2 ** i * b
        print current_sum,
    print ""