import random as rand

def func(num):
    if num % 2 == 0:
        return "even"
    elif num % 2 != 0:
        return "odd"
    else:
        return "Error"
    
for i in range(1, 6):
    print(str(i) + " : " + func(i))