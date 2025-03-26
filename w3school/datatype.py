#type
x = 5
print(type(x))
#str: " ", int: 20, float: 20.5, complex: 1j, list: ["", "",]
#tuple: ("", "",), range: range(), dict: {"": "" :}
#set: {"", "",}, frozenset: frozenset({"", "",})
#bool: true/false, bytes: b"", bytearray: bytearray()
#memoryview: memoryview(bytes()), NoneType: None

#type conversion
x = 1
y = 2.8
z = 1j

a = float(x)
b = int(y)
c = complex(x)

print(a)
print(b)
print(c)

#random number
import random
print(random.randrange(1, 10))
