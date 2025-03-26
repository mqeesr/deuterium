#49
year = int(input())
while ((year % 4 == 0) and (year % 100 != 0)) or (year % 400 == 0):
    print("is a leap year")
    break

print("is not a leap year")


#50
n = int(input())
m = int(input())
k = int(input())

while k < n * m and (k % n == 0 or k % m == 0):
    print("the chocolate can be divided")

while k < n * m and (k % n == 0 or k % m == 0):
    print("the chocolate can be divided")
    break

print("the chocolate cannot be divided")


#51
num = 1
while num <= 100:
    if num % 3 == 0 or num % 5 == 0:
        print(num, end=" ")
    num += 1
print()

#52
num = 1
while num <= 100:
    if str(num) == str(num)[::-1]:
        print(num, end=" ")
    num += 1
print()

#91
num = int(input())
i = 1
while i <= num:
    if num % i == 0:
        print(i, end=" ")
    i += 1
print()

#92
text = input()
i = 0
while i <= len(text) - 3:
    print(text[i:i+3])
    i += 1

#93
num = int(input())
power = 1
while power <= 10:
    print(num ** power, end=" ")
    power += 1
print()

#94
text = input()
i = 0
while i < len(text):
    if text[i] != " ":
        print(text[i], end="")
    i += 1
print()

#95
num = input()
i = 0
while i < len(num):
    if num[i].isdigit():
        print(num[i], end=" ")
    i += 1
print()

#96
num = 1
while num * num <= 100:
    print(num * num, end=" ")
    num += 1
print()

