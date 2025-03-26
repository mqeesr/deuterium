x = 5
y = "John"
print(x)
print(y)

x = 4       # x is of type int
x = "Sally" # x is now of type str
print(x) #will be printed the last one variable if there are the same represent of value

#casting
x = str(3) #'3'
y = int(3) #3
z = float(3) #3.0
print(y)

#type function (to get the data type of a variable)
x = 5
y = "john"
print(type(x)) #output is int
print(type(y)) #str

#variable names
#camel case: each word except 1st starts with a capital letter
#pascal: each word starts with a capital letter
#snake: each word separeted by an underscore

#assign multuple values
x, y, z = "orange", "banana", "cherry"
print(x)
print(y)
print(z)
#also you can x=y=z = "orange" and then print x,y,z

#global variables
x = "awesome"
def myfunc():
  print("python is " + x)
myfunc() 

#2nd
x = "awesome"
def myfunc():
    x = "fantastic"
    print("python is " + x)
myfunc()
print("python is " + x)

#global inside the function
def myfunc():
  global x
  x = "fantastic"
myfunc()
print("Python is " + x)
