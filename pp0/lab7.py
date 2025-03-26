#49
lis = [1, 2, 3, 4, 5]
lis.reverse()
print(lis)

#50
for i in range(1, 10):
    print(3**i)

#51
import random

for _ in range(5):
    print(random.randint(1, 100))

#52
lis = [1, 2, 3, 4, 5]
lis.insert(0, 99)
print(lis[0])

#79
lis = [1, 2, 3, 4, 5]
print(lis[::-1])

#85
lis = [5, 3, 9, 6, 1]
lis.sort()
lis.reverse()
print(lis)

#84
lis = [1, 10, 15, 16, 25]
if 25 not in lis:
    print("no")
else:
    print("yes")

#82
lis = [1, 4, 2, 9, 7]
lis.pop(2)
print(lis)

#77
lis = [3, 12, 5, 76, 11]
for i in lis:
    if i < 10:
        lis.remove(i)
print(lis)

#88
lis = [2, 22, 3, 7, 99]
print(len(lis))