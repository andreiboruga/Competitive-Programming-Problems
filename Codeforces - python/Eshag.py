def solve():
    min = 101
    n = int(input())
    a = list(map(int, input().split()))
    vf = [0] * 101
    for i in a:
        vf[i] += 1
        if i < min:
            min = i

    print(n - vf[min])






t = int(input())
for i in range(t):
    solve()
