#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n, m, a, ans = 0;
    cin>>n>>m>>a;

    if(n % a == 0)
        ans = ans + n/a;
    else
        ans = ans + n/a + 1;

    if(m % a == 0)
        ans = ans * (m/a);
    else
        ans = ans * (m/a + 1);

    cout<<ans;



    return 0;
}
