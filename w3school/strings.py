#strings = arrays
a = "Hello, World!"
print(a[1]) #the first letter has 0 position

#looping
for x in "banana":
    print(x)

#length
a = "hello world"
print(len(a))

#check string
a = "the best things in life are free!"
print("free" in a)

a = "the best things in life are free!"
if "free" in a:
    print("yes free is present")

#slicing
b = "hello world"
print(b[2:5])

b = "hello world"
print(b[:5])

#negative indexing
b = "Hello, World!"
print(b[-5:-2]) #last digit will not be included in the interval

#upper/lower case, remove whitespace, replace letters
a = "hello world"
print(a.upper())
a = "hello world"
print(a.lower())
a = " hello world "
print(a.strip())
a = "hello world"
print(a.replace("h", "j"))

#split string
a = "hello world"
print(a.split(","))

#f-strings
age = 36
a = f"my name is john, i am {age} years old"
print(a)
price = 59
txt = f"The price is {price:.2f} dollars"
print(txt)
txt = f"The price is {20 * 59} dollars"
print(txt)

#escape character
a = "we are the so-called \"vikings\" from the north"
print(a)
a = "we are\n the so-called \"vikings\" from the north"
print(a)

#python methods
#capitalize() - first character to upper, casefold() - str into lower case
#center(), count() - the num of times a value occurs in a str
#expandtabs() - Sets the tab size of the string
#find()	Searches the string for a value and returns the position of where it was found
# format()	Formats specified values in a string
# format_map()	Formats specified values in a string
# index()	Searches the string for a specified value and returns the position of where it was found
# isalnum()	Returns True if all characters in the string are alphanumeric
# isalpha()	Returns True if all characters in the string are in the alphabet
# isascii()	Returns True if all characters in the string are ascii characters
# isdecimal()	Returns True if all characters in the string are decimals
# isdigit()	Returns True if all characters in the string are digits
# isidentifier()	Returns True if the string is an identifier
# islower()	Returns True if all characters in the string are lower case
# isnumeric()	Returns True if all characters in the string are numeric
# isprintable()	Returns True if all characters in the string are printable
# isspace()	Returns True if all characters in the string are whitespaces
# istitle()	Returns True if the string follows the rules of a title
# isupper()	Returns True if all characters in the string are upper case
# join()	Joins the elements of an iterable to the end of the string
# ljust()	Returns a left justified version of the string
# lower()	Converts a string into lower case
# lstrip()	Returns a left trim version of the string
# maketrans()	Returns a translation table to be used in translations
# partition()	Returns a tuple where the string is parted into three parts
# replace()	Returns a string where a specified value is replaced with a specified value
# rfind()	Searches the string for a specified value and returns the last position of where it was found
# rindex()	Searches the string for a specified value and returns the last position of where it was found
# rjust()	Returns a right justified version of the string
# rpartition()	Returns a tuple where the string is parted into three parts
# rsplit()	Splits the string at the specified separator, and returns a list
# rstrip()	Returns a right trim version of the string
# split()	Splits the string at the specified separator, and returns a list
# splitlines()	Splits the string at line breaks and returns a list
# startswith()	Returns true if the string starts with the specified value
# strip()	Returns a trimmed version of the string
# swapcase()	Swaps cases, lower case becomes upper case and vice versa
# title()	Converts the first character of each word to upper case
# translate()	Returns a translated string
# upper()	Converts a string into upper case
# zfill()	Fills the string with a specified number of 0 values at the beginning