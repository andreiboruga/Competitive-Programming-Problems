#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b;
    cin>>n>>m>>a>>b;
    if(b / (m * 1.0) >= a * 1.0)
    {
        cout<<n * a;
        return 0;
    }
    int c = n / m;
    int r = n % m;
    int ans = c * b;

    if(r != 0)
    {
        ans += min(r * a, b);
    }

    cout<<ans;



    return 0;
}
