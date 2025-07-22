a_str , b_str , c_str = input().split()

a = int(a_str)
b = int(b_str)
c = int(c_str)

MAX = a if a >= b  and a >= c else b if b >= a and b >= c else c


MIN = a if a <= b and a <= c else b if b <= a and b <= c else c


print(f"{MIN} {MAX}")
