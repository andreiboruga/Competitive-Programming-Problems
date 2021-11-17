MAX_ACTIONS = 5000

def op1(i1, i2):
    print(1, i1, i2)

def op2(i1, i2):
    print(2, i1, i2)

def op(i1, i2):
    op2(i1, i2)
    op1(i1, i2)
    op2(i1, i2)
    op2(i1, i2)
    op1(i1, i2)
    op2(i1, i2)

def solve():
    nr_var = int(input())
    a = list(map(int, input().split()))
    print(3 * nr_var)
    for i in range(0, nr_var, 2):
        op(i + 1, i + 2)




t = int(input())
for i in range(t):
    solve()
