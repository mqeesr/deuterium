#sort list
listt = ['apple', 'banana', 'kiwi', 'mango', 'pineapple']
listt.sort()
print(listt)

#sort descanding
listt = ['orange', 'mango', 'kiwi', 'pinapple', 'banana']
listt.sort(reverse = True)
print(listt)

#customize sort func
def myfunc(n):
    return abs(n - 50)
listt = [100, 50, 65, 82, 23]
listt.sort(key = myfunc)
print(listt)

#copy  list
listt = ['apple', 'banana', 'cherry']
mylist = listt.copy()
print(mylist)

thislist = ["apple", "banana", "cherry"]
mylist = thislist[:]
print(mylist)

#join list
list1 = ['a', 'b', 'c']
list2 = [1, 2, 3]
list3 = list1 + list2
print(list3)
#append from list2 to list1
list1 = ["a", "b" , "c"]
list2 = [1, 2, 3]
for x in list2:
  list1.append(x)
print(list1)

list1 = ["a", "b" , "c"]
list2 = [1, 2, 3]
list1.extend(list2)
print(list1)
