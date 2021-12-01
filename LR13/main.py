def z1():
    n = 1.4
    k = 0.1
    for i in range(10):
        print(k*n, end=' ')
        k+=0.1
def z2():
    n = 5
    l = 1
    for i in range(1, n+1):
        l = l*float('1.'+str(i))
    print(l)

def z3():
    n = 3
    summ = 0
    for i in range(1, n+1):
        summ += 2*i - 1
        print(summ, end=' ')

def z4():
    a = 1.3
    n = 6
    summ = 1
    for i in range(1, n+1):
        summ += a**i
    print(summ)

def z5():
    a = 1.4
    n = 3
    summ = 0
    for i in range(n+1):
        summ += (-1)**i * a**i
    print(summ)
z1()
print()
z2()
z3()
print()
z4()
z5()