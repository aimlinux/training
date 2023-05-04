def func():
    name = "aim"
    old = 18
    return (name, old) # かっこは省略可能

#構造体みたいなことができる
x = func()

print("name : " + str(x[0]))
print("old : " + str(x[1]))