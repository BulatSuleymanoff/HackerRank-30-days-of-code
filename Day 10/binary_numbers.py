number_of_tests = input()
binary_nums = []

for i in range(number_of_tests):
    decimal = input()
    binary = []
    while decimal >= 2:
        binary.append(decimal % 2)
        decimal /= 2
    binary.append(decimal)
    binary = map(str, binary)
    binary_nums.append(''.join(binary[::-1]))

print '\n'.join(binary_nums)