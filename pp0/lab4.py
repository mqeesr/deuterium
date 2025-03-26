
#49
n = int(input())
in_range = -10 <= n <= 10 and n != 0
print(in_range)

#50
n = input()
digits = sorted(set(n))
print(digits == list(n))

#51
lst = list(map(int, input().split()))
print(len(lst) != len(set(lst)))

#52
lst = list(map(int, input().split()))
print(all(num % 2 == 0 for num in lst))

#76
n = input()
print(n == n[::-1])

#77
s1 = input()
s2 = input()
print(sorted(s1) == sorted(s2))

#79
n = input()
if sum(map(int, n[:3])) == sum(map(int, n[3:])):
    print("lucky")
else:
    print("no")

#81
n = input()
if sum(int(digit) ** len(n) for digit in n) == int(n):
    print("armstrong number")
else:
    print("no")

#87
n = int(input())
if n > 0 and (n & (n - 1)) == 0:
    print("is a power")
else:
    print("not")

#88
ip = input()
parts = ip.split('.')
if len(parts) == 4 and all(p.isdigit() and 0 <= int(p) <= 255 for p in parts):
    print("valid")
else:
    print("invalid")