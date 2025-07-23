a = input()
a_ascii = ord(a)

is_capital = "ALPHA\nIS CAPITAL" if a_ascii >= 65 and a_ascii <= 90 else "ALPHA\nIS SMALL"
is_digit = "IS DIGIT" if a_ascii >= 48 and a_ascii <= 57 else is_capital

print(is_digit)
