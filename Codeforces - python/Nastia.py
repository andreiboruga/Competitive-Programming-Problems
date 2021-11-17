def gen():
    A, B = map(int, input().split())
    if B == 1:
        print("NO")
        return
    print("YES")
    print(A * B, A, A * (B + 1))

t = int(input())
for i in range(t):
    gen()