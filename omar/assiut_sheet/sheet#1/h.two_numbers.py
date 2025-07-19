numb1, numb2 = input().split()
dev = float(numb1) / float(numb2)



operation_floor = int(numb1) // int(numb2)

subtraction = dev - operation_floor

operation_ceil = int(int(numb1) // int(numb2)) + 1

operation_round = operation_floor + 1 if subtraction >= 0.5 else operation_floor

rounded = (float(numb1) / float(numb2))
print(rounded)
operation_round = round(rounded)

print(f"floor {numb1} / {numb2} = {operation_floor} ")
print(f"ceil {numb1} / {numb2} = {operation_ceil} ")
print(f"round {numb1} / {numb2} = {operation_round} ")


