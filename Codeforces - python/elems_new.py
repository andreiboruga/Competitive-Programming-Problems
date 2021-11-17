def compl(x, k):
    return 2 * k - x


def solve():
    n = int(input())
    a = list(map(int, input().split()))
    s = dict()
    k = 0
    ans = 0

    for i in a:
        k += i

    k = k / n

    if k > int(k) and (k - int(k) != 0.5):
        print(0)
        return



    for i in a:
        c = compl(i, k)
        if c in s.keys():
            ans += s[c]
        if i in s.keys():
            s[i] += 1
        else:
            s[i] = 1

    print(ans)


t = int(input())
for i in range(t):
    solve()



