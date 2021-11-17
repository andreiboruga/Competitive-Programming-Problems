def solve():
    n = int(input())
    s = list(map(int, input().split()))
    for i in s:
        if i < 0:
            print("NO")
            return
    l = list(range(101))
    print("YES\n101")
    print(*l)



t = int(input())
for i in range(t):
    solve()


