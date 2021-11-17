#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, nrp = 0, nri = 0, k;
    cin>>n>>x;
    for(int i = 0; i < n; i++)
    {
        cin>>k;
        if(k % 2 == 0)
            nrp++;
        else
            nri++;
    }

    if(nri == 0)
    {
        cout<<"No\n";
        return;
    }
    if(nrp == 0)
    {
        if(x % 2 == 0)
        {
            cout<<"No\n";
            return;
        }
        else
        {
            cout<<"Yes\n";
            return;
        }
    }
    if(nrp >= x - 1)
    {
        cout<<"Yes\n";
        return;
    }
    if(x == n)
    {
        if(nri % 2 == 1)
        {
            cout<<"Yes\n";
            return;
        }
        else
            cout<<"No\n";
            return;
    }

    cout<<"Yes\n";

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}