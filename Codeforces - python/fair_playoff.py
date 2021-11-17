def solve():
    players = list(map(int, input().split()))
    aux = sorted(players)
    i1 = aux.index(max(players[0], players[1]))
    i2 = aux.index(max(players[2], players[3]))
    if (i1 == 2 and i2 == 3) or (i2 == 2 and i1 == 3):
        print("YES")
        return
    print("NO")


t = int(input())
for i in range(t):
    solve()


