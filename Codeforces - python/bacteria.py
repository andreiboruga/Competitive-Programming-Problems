x = int(input())
ans = 0
if x % 2 == 1:
    ans = 1
    x -= 1
while True:
    aux = 1
    if x == 0:
        break
    while aux * 2 <= x:
        aux *= 2
    ans += 1
    x -= aux

print(ans)
