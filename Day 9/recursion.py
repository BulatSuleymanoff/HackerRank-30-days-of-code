def find_gcd(a,b):
    if min(a, b) == 0:
        return max(a, b)
    return find_gcd(b, a%b)

a, b = map(int, set(raw_input().split()))
gcd=find_gcd(a,b)
print gcd