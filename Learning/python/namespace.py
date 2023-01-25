var1 = 5
def some_func():
    var2 = 6
    def som_inner_func():
        var3 = 7

count = 5
def somd_method():
    global count
    count = count + 1
    print(count)
somd_method()

def another_func():
    print("Inside function:")
    def some_inner_funceion():
        var = 100
        print("Inside inner function, value of var: ",var)
    some_inner_funceion()
    print("Outside inner function, value of var1: ",var1)
some_func()
