#49
def apply_twice(func, arg):
    return func(func(arg))

def add_five(x):
    return x + 5
print(apply_twice(add_five, 7))

#50
def square(n):
    return n * n
print(square(6))

#51
def print_divisors(n):
    for i in range(1, n + 1):
        if n % i == 0:
            print(i)
print_divisors(9)
#52
def is_negative(n):
    return n < 0
print(is_negative(-2))

#75
def max_in_list(lst):
    return max(lst)
print(max_in_list([3, 7, 2, 9]))

#76
def sum_two(a, b):
    return a + b
print(sum_two(4, 5))

#77
def greet_multiple(name, times):
    for _ in range(times):
        print(f"hello, {name}!")
greet_multiple("arina", 3)

#78
def binary_search(lst, target):
    left, right = 0, len(lst) - 1
    while left <= right:
        mid = (left + right) // 2
        if lst[mid] == target:
            return mid
        elif lst[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return -1
print(binary_search([1, 3, 5, 7, 9], 7))

#79
def is_even(n):
    return n % 2 == 0
print(is_even(4))

#81
def reverse_words(text):
    return ' '.join(text.split()[::-1])
print(reverse_words("hello world"))
