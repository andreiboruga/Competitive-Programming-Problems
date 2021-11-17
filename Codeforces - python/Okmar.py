MAX_LEN = 101

def solve():
    n = int(input())
    added = 0
    s = set()
    l = list(map(int, input().split()))
    ok = 1
    if n == 1:
        print(f"YES\n1\n{l[0]}")
    for i in l:
        s.add(i)
        if i < 0:
            print("NO")
            return
    for i in range(n):
        for j in range(i + 1, n):
            k = abs(l[i] - l[j])
            if not(k in s):
                s.add(k)
                l.append(k)
                added += 1
                ok = 0
    if ok == 1:
        print(f"YES\n{n}")
        print(*l)
        return
    #ok = 1 == presupunem ca nu mai trebuie adaugate elemente
    while ok == 0 and n + added <= MAX_LEN:
        ok = 1
        added2 = 0
        for i in range(n, n + added):
            for j in range(i):#Bug teste: merge si daca pun j doar pana la n
                k = abs(l[i] - l[j])
                if not(k in s):
                    s.add(k)
                    l.append(k)
                    added2 += 1
                    ok = 0
        n += added
        added = added2
    
    if n + added > MAX_LEN:
        print("NO")
        return
    print(f"YES\n{n}")
    print(*l)




t = int(input())
for i in range(t):
    solve()

#problema: https://codeforces.com/problemset/problem/1536/A

