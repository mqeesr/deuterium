#represent one of two - True or False
print(10 > 9)
print(10 == 9)
print(10 < 9)

a = 200
b = 33
if b > a:
 print("b is greater than a")
else:
 print("b is not greater than a")

#bool function 
print(bool("Hello"))
print(bool(15))

x = "Hello"
y = 15
print(bool(x))
print(bool(y))
#Almost any value is evaluated to True if it has some sort of content.
#Any string i True, except empty strings.
#Any number is True, except 0.
#Any list, tuple, set, and dictionary are True, except empty ones.
print(bool("abc"))
print(bool(123))
print(bool(["apple", "cherry", "banana"]))

#false in class with len func
class myclass():
 def __len__(self):
   return 0
myobj = myclass()
print(bool(myobj))

#create funn that returns a boolean value
def myfunc():
 return True
print(myfunc())
#
def myfunc() :
  return True
if myfunc():
  print("yes")
else:
  print("no")
#
x = 200
print(isinstance(x, str))
