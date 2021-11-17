#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, aux, ans = 0;
    cin>>n;
    multiset<int> baieti;
    unordered_multiset<int> fete;

    for(int i = 0; i < n; i++)
    {
        cin>>aux;
        baieti.insert(aux);
    }

    cin>>m;
    for(int i = 0; i < m; i++)
    {
        cin>>aux;
        fete.insert(aux);
    }

    for(auto it = baieti.begin(); it != baieti.end(); it++)
    {
        if(fete.count(*it - 1) > 0)
        {
            ans++;
            fete.erase(fete.find(*it - 1));
        }
        else if(fete.count(*it) > 0)
        {
            ans++;
            fete.erase(fete.find(*it));
        }
        else if(fete.count(*it + 1) > 0)
        {
            ans++;
            fete.erase(fete.find(*it + 1));
        }
    }
    
    cout<<ans;

    return 0;
}
