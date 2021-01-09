import math
n, m = map(int, input().split())
num = pow(10, n)
num /= m
print(math.floor(num % m))
