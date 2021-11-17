def solve():
    n = int(input())
    a = list(map(int, input().split()))
    min = a[0]
    poz = 0
    for i in range(1, n):
        if a[i] < min:
            min = a[i]
            poz = i
    nr = min + 1
    print(n - 1)
    for i in range(poz - 1, -1, -1):
        print(i + 1, poz + 1, nr, min)
        nr += 1
    nr = min + 1
    for i in range(poz + 1, n):
        print(poz + 1, i + 1, min, nr)
        nr += 1


t = int(input())
for i in range(t):
    solve()
