#  X = (A * B) - (C * D).

a_str, b_str, c_str, d_str = input().split()
a,b,c,d = int(a_str), int(b_str), int(c_str), int(d_str)
difference = (a * b) - (c *  d)

print(f"Difference = {difference}")
