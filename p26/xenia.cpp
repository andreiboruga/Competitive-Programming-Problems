#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n, m, x, poz = 1;
    ll ans = 0;
    cin>>n>>m;
    for(int i = 0; i < m; i++)
    {
        cin>>x;
        if(x > poz)
        {
            ans = ans + (x - poz);
            poz = x;
        }
        else if(x == poz)
            continue;
        else
        {
            ans = ans + (n - (poz - x));
            poz = x;
        }
    }

    cout<<ans;


    return 0;
}
