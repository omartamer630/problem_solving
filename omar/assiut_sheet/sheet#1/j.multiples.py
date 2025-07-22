a_str , b_str = input().split()

a = int(a_str)
b = int(b_str)

GREATEST = a if a > b else b
SMALLEST = a if a < b else b
IS_MULTIPLES = "Multiples" if GREATEST % SMALLEST == 0 else "No Multiples"

print(IS_MULTIPLES)
