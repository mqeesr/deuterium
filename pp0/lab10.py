# 49
def sum_nested_list(lst):
    total = 0
    for item in lst:
        if isinstance(item, list):
            subtotal = sum_nested_list(item)
            total = total + subtotal
        else:
            total = total + item
    return total
print(sum_nested_list([1, [2, 3], [4, [5]]]))


# 50
def flatten_dict(d, parent_key='', sep='_'):
    items = []
    for key in d:
        value = d[key]
        if parent_key != '':
            new_key = parent_key + sep + str(key)
        else:
            new_key = str(key)
        if isinstance(value, dict):
            nested = flatten_dict(value, new_key, sep)
            for k in nested:
                items.append((k, nested[k]))
        else:
            items.append((new_key, value))
    return dict(items)
print(flatten_dict({'a': 1, 'b': {'c': 2, 'd': {'e': 3}}}))


# 51
def sum_two_numbers(a, b):
    result = a + b
    return result
print(sum_two_numbers(10, 5))


# 52
def is_even(n):
    if n % 2 == 0:
        return True
    else:
        return False
print(is_even(9))

# 75
def decimal_to_binary(n):
    if n == 0:
        return "0"
    
    binary = ""
    num = n
    if n < 0:
        num = -n
    
    while num > 0:
        remainder = num % 2
        binary = str(remainder) + binary
        num = num // 2
    
    if n >= 0:
        return binary
    else:
        return "-" + binary
print(decimal_to_binary(108))

# 78
def merge_dicts(d1, d2):
    merged = d1.copy()
    for key in d2:
        value = d2[key]
        if key in merged:
            if isinstance(merged[key], dict) and isinstance(value, dict):
                merged[key] = merge_dicts(merged[key], value)
            else:
                merged[key] = value
        else:
            merged[key] = value
    return merged
print(merge_dicts({'a': 1, 'b': {'x': 2}}, {'b': {'y': 3}, 'c': 4}))


# 80
def sum_matrix(matrix):
    total = 0

    for row in matrix:
        row_sum = 0
        for element in row:
            row_sum = row_sum + element
        total = total + row_sum

    return total
print(sum_matrix([[1, 2], [3, 4]]))


# 81
def transpose_matrix(matrix):
    result = []
    row_count = len(matrix)

    if row_count == 0:
        return result
    col_count = len(matrix[0])
    
    for i in range(col_count):
        new_row = []
        for j in range(row_count):
            new_row.append(matrix[j][i])
        result.append(new_row)
    return result
print(transpose_matrix([[1, 2, 3], [4, 5, 6]]))


# 82
def diagonal_sum(matrix):
    total = 0
    i = 0
    while i < len(matrix):
        total = total + matrix[i][i]
        i = i + 1
    return total
print(diagonal_sum([[1, 2], [3, 4]]))


# 89
def repeat_string(s, n):
    result = ""
    i = 0
    while i < n:
        result = result + s
        i = i + 1
    return result
print(repeat_string("hi", 3))
