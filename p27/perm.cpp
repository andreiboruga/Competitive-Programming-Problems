#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n % 2 == 1)
    {
        for(int i = 2; i <= n - 3; i+=2)
        {
            cout<<i<<" "<<i - 1<<" ";
        }
        cout<<n - 1<<" "<<n<<" "<<n - 2<<"\n";
        return;
    }
    for(int i = 2; i <= n; i+=2)
        cout<<i<<" "<<i - 1<<" ";
    cout<<"\n";
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
