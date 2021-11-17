#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n, l, x, aux;
    bool aux2;
    cin>>n>>l;
    ll ans = 0;
    bool virgula = 0;
    vector<ll> lanterns;
    int start = 0, end = 0;

    for(int i = 0; i < n; i++)
    {
        cin>>x;
        if(x == 0)
            start = 1;
        else if(x == l)
            end = 1;
        lanterns.push_back(x);
    }


    sort(lanterns.begin(), lanterns.end());

    if(start == 0)
    {
        ans = max(ans, lanterns[0]);
    }
    if(end == 0)
    {
        ans = max(ans, l - lanterns[n - 1]);
    }

    for(int i = 1; i < n; i++)
    {
        aux = lanterns[i] - lanterns[i - 1];
        if(aux % 2 == 0)
            aux2 = 0;
        else
            aux2 = 1;
        aux/=2;
        if(aux2 == 1 && virgula == 0 && aux >= ans)
        {
            ans = aux;
            virgula = 1;
        }
        else if(aux2 == 1 && virgula == 1 && aux > ans)
        {
            ans = aux;
        }
        else if(aux2 == 0 && virgula == 0 && aux > ans)
        {
            ans = aux;
        }
        else if(aux2 == 0 && virgula == 1 && aux >= ans + 1)
        {
            ans = aux;
            virgula = 0;
        }
    }

    cout<<ans;
    if(virgula == 1)
        cout<<".5";

    return 0;
}
