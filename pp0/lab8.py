#49
#deu_dict = {'a': 11, 'b': 100, 'c': 111}
#only_read = dict(frozenset(deu_dict.items()))
#print(only_read)

#49
from types import MappingProxyType
data = {'a': 111, 'b': 222, 'c': 333}
read_only = MappingProxyType(data)
print(read_only['a'])

#50
deu_dict = {'a': 120, 'b': 220, 'c': 300}
copy = deu_dict.copy()
print(copy)

#51
phone_book = {'rasul': 2611, 'mari': 2009, 'dana': 1907, 'almik': 1303, 'nicole': 8007}
print(phone_book['almik'])

#52
sub_and_grade = {'calc': 95, 'phys': 70, 'history': 75}
print(sub_and_grade['history'])

#75
deu_dict = {'js': 'angular', 'python': 'django', 'cpp': 'qt'}
for key, value in deu_dict.items():
    print({key: value.upper()})

#79
deu_dict = {'a': 5, 'b': 'hello', 'c': 9, 'd': 7}
new_dict = {}
for key, value in deu_dict.items():
    if isinstance(value, (int, float)):
        new_dict[key] = value
print(new_dict)

#85
deu_dict = {'a': 'hello', 'b': 'hi', 'c': 87, 'd': 98, 'e': 'info'}
str_dict = {}
num_dict = {}

for key, value in deu_dict.items():
    if isinstance(value, str):
        str_dict[key] = value
    if isinstance(value, (int, float)):
        num_dict[key] = value
print(str_dict)
print(num_dict)

#93
deu_dict = {'tag': 'deu', 'city': 'almaty', 'github': 'mqeesr'}
key = input()

if key in deu_dict:
    value = deu_dict[key]
    print(value)
else:
    print('no exact value')

#98
deu_dict = {1: 'abc', 2: 'abcde', 3: 'ab', 4: 'eyfhsnls'}
longest_str = ''

for key, value in deu_dict.items():
    if isinstance(value, str) and len(value) > len(longest_str):
        longest_str = value
print(longest_str)

#99
deu_dict = {1: 'hello', 2: 5, 3: 'no', 4: 8, 5: 9, 6: 'yes'}
counter = 0
total = 0

for key, value in deu_dict.items():
    if isinstance(value, (int, float)):
        total += value
        counter += 1
if counter > 0:
    average = total / counter
    print(round(average, 3))
else:
    print('there is no numbers')