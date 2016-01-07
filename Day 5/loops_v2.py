num_of_tests = input()
ans = ''
for test in range(num_of_tests):
    str_in = raw_input().split(' ')
    a = int(str_in[0])
    b = int(str_in[1])
    N = int(str_in[2])
    current_sum = a
    for i in range(N):
        current_sum += 2 ** i * b
        ans += str(current_sum) + ' '
    ans += '\n'

print ans[:-1]