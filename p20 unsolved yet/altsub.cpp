#include <bits/stdc++.h>
using namespace std;

struct DP
{
    int max_seq;
    int parent;
};
typedef struct DP dp;

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    vector<dp> v(n);
    pair<int, int> maxp = {0, -1};
    pair<int, int> maxn = {0, -1};
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i] > 0)
        {
            v[i].max_seq = maxn.first + 1;
            v[i].parent = maxn.second;
            if(v[i].max_seq > maxp.first)
                maxp = make_pair(v[i].max_seq, i);

        }
    }

    pair<int, int> aux;
    aux = max(maxp, maxn);
    dp rez = v[aux.second];

    vector<int> ans;
    ans.push_back(aux.second);

    while(rez.parent != -1)
    {
        ans.push_back(rez.parent);
        rez = v[rez.parent];
    }

    for(int i = ans.size() - 1; i >= 0; i--)
    {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";



}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
