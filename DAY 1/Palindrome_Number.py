def Palendrome_Number(x):
    return str(x) == str(x)[::-1]

print(Palendrome_Number(121))  # True
print(Palendrome_Number(-121)) # False