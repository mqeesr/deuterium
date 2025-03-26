#49
year = int(input())
print(year % 4 == 0 and (year % 100 != 0 or year % 400 == 0))

#50
n, m, k = map(int, input().split())
print(k <= n * m and (k % n == 0 or k % m == 0))

#51
x = 1
while x <= 100:
    if x % 3 == 0 or x % 5 == 0:
        print(x, end=" ")
    x += 1
print()

#52
x = 1
while x <= 100:
    s = str(x)
    if s == s[::-1]:
        print(x, end=" ")
    x += 1
print()

#71
sum_100 = (100 * 101) // 2
print(sum_100)

#72
product_10 = 1
x = 1
while x <= 10:
    product_10 *= x
    x += 1
print(product_10)

#73
sum_100 = sum(range(1, 101))
average_100 = sum_100 / 100
print(average_100)


#74
sum_squares = 0
x = 1

while x <= 10:
    sum_squares += x * x
    x += 1
print(sum_squares)

#75
sum_cubes = 0
x = 1

while x <= 10:
    sum_cubes += x ** 3
    x += 1
print(sum_cubes)

#76
num = input()

if num.isdigit():
    num = int(num)
    if num == 0 or num == 1:
        print(1)
    else:
        factorial = 1
        x = 1
        while x <= num:
            factorial *= x
            x += 1
        print(factorial)
else:
    print("error")
