#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int glen = 0;
    int ans = 0;
    vector<int> e(n);
    for(int i = 0; i < n; i++)
        cin>>e[i];
    
    sort(e.begin(), e.end());

    for(int i = 0; i < n; i++)
    {
        glen++;
        if(glen == e[i])
        {
            ans++;
            glen = 0;
        }

    }

    cout<<ans<<"\n";

}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
