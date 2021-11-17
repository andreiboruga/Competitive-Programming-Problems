#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> piles;

int search(int s, int d, int k)
{
    int m = (s + d) / 2;
    if(k >= piles[m].first && k <= piles[m].second)
        return m + 1;
    else if(k < piles[m].first)
        return search(s, m - 1, k);
    else
        return search(m + 1, d, k);
}

int main()
{
    int n, m, x, last_nr = 0;
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        cin>>x;
        piles.push_back(make_pair(last_nr + 1, last_nr + x));
        last_nr += x;
    }

    cin>>m;
    for(int i = 0; i < m; i++)
    {
        cin>>x;
        cout<<search(0, n - 1, x)<<"\n";
    }

    return 0;
}
