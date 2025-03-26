mylist = ["apple", "banana", "cherry"]
print(mylist)
#first index is zero, second is one and so on
#lists are chabgeable and ordered 
a = [1, 2, 3, 4, 5]
a[2] = 10  #update an element
print(a)  

#list length
listt = ["apple", "banana", "cherry"]
print(len(listt))
#
thislist = ["apple", "banana", "cherry"]
print(thislist[1])


#insert
thislist = ["apple", "banana", "cherry"]
thislist.insert(2, "watermelon")
print(thislist)

#append - add an item to the end of the list
thislist = ["apple", "banana", "cherry"]
thislist.append("orange")
print(thislist)

#extend - to append elem from one list to another
thislist = ["apple", "banana", "cherry"]
tropical = ["mango", "pineapple", "papaya"]
thislist.extend(tropical)
print(thislist)

#remove specified item
thislist = ["apple", "banana", "cherry"]
thislist.remove("banana")
print(thislist)
#remove index
thislist = ["apple", "banana", "cherry"]
thislist.pop(1) #if dont specify, the pop will remove last item
print(thislist)
#there is also del that deletes the item del list[] or the whole list del list

#clear the list
listt = ['apple', 'banana', 'cherry']
listt.clear()
print(listt)

#print all items
listt = ['apple', 'banana', 'cherry']
for x in listt:
    print(x)

#loop through the index numbers
thislist = ["apple", "banana", "cherry"]
for i in range(len(thislist)):
  print(thislist[i])

#while loop
thislist = ["apple", "banana", "cherry"]
i = 0
while i < len(thislist):
  print(thislist[i])
  i+=1

#comprehension
thislist = ["apple", "banana", "cherry"]
[print(x) for x in thislist]

fruits = ["apple", "banana", "cherry", "kiwi", "mango"]
newlist = []
for x in fruits:
  if "a" in x:
    newlist.append(x)
print(newlist)
#or
fruits = ["apple", "banana", "cherry", "kiwi", "mango"]
newlist = [x for x in fruits if "a" in x]
print(newlist)
#syntax - newlist = [expression for item in iterable if condition == True]
