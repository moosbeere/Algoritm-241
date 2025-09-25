
def print_div(n, divs=2):
    if (n == 1): return []
    if(n % divs == 0): return [divs] + print_div(n // divs, divs)
    if(divs*divs) > n: return[n]
    return print_div(n, divs + 1)

print(print_div(76))

def sum(arr):
    sum_arr = 0
    if(len(arr) == 1):
        return arr[0]
    sum_arr = arr[0] + sum(arr[1:])
    return sum_arr

# print(sum([6,4,8,4]))

def max_elem(arr):
    if(len(arr) == 2):
        return arr[0] if arr[0] > arr[1] else arr[1] # arr[0] > arr[1] ? arr[0]:arr[1]
    max_sub = max_elem(arr[1:])
    return arr[0] if arr[0] > max_sub else max_sub

print(max_elem([6,3,9,11,76,4]))




# 1: max_sub = 6 [3,9,11,76,4]
# 2: max_sub = 3 [9,11,76,4]
# 3: max_sub = 9 [11,76,4]
# 3: max_sub = 11 [76,4]
# 4: return 76

