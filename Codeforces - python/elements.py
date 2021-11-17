def solve():
    n = int(input())
    a = list(map(int, input().split()))
    k = 0
    ans = 0
    for i in range(n):
        k += a[i]
    k = k / n
    for i in range(n):
        for j in range(i + 1, n):
            if (abs(k - a[i]) == abs(k - a[j])) and ((a[i] != a[j]) or (abs(k - a[i]) == 0)):
                ans += 1
    print(ans)



t = int(input())
for i in range(t):
    solve()
