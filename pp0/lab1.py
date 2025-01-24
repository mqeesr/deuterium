#1
import math

radius = float(input())
area = math.pi * radius ** 2
circumference = 2 * math.pi * radius

print(f"area: {area:.1f}")
print(f"circumference: {circumference:.1f}")

#2
a, b = map(float, input().split())

addition = a + b
subtraction = a - b
multiplication = a * b
division = a / b if b != 0 else "undefined"

print(addition)
print(subtraction)
print(multiplication)
print(division)

#3
user_input = input()

if '.' in user_input:
    value = float(user_input)
    data_type = type(value)
elif user_input.isdigit():
    value = int(user_input)
    data_type = type(value)
else:
    value = user_input
    data_type = type(value)

print(type(value).__name__)

#4
our_input = str(input())

num = int(our_input)
res = num // 2 
res_to_str = str(res)

print(res_to_str)

#5
string = input()

first_char = string[0] if string else None
last_char = string[-1] if string else None
substring = string[2:6] if len(string) >= 6 else None

print(first_char)
print(last_char)
print(substring)

#6
a =  int(input())

if a % 2 == 0:
    print("even")
else:
    print("odd")

#7
a, b, c, d, e = map(int, input().split())
numbers = [a, b, c, d, e]

max_num = max(numbers)
min_num = min(numbers)
numbers.sort()

print(max_num)
print(min_num)
print(numbers)

#8
s = input()

if len(s) >= 5:
    pos_char = s[0]
    neg_char = s[-5]
    print(f"chr at idx 0: {pos_char}")
    print(f"chr at idx -5: {neg_char}")
    if pos_char == neg_char:
        print("negative == positive ")
    else:
        print("not equal")
else:
    print("short str")

#9
s = input()
nn = int(input())

new_string = s * nn
print(len(new_string))

#10
import random

s = input()
idx = random.choice(range(-len(s), len(s)))
answer = input()

if answer == s[idx]:
    print("congratulations!")
else:
    print(s[idx])
