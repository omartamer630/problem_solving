a = input()
a_ascii = ord(a)
low = a.lower()
upper = a.upper()
is_capital = low if a_ascii >= 65 and a_ascii <= 90 else upper

print(is_capital)
