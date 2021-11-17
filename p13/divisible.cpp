#include <bits/stdc++.h>
using namespace std;


void solve2()
{
    int n, k, ans = 0;
    cin>>n>>k;
    int c = k/(n-1);
    int r = k % (n - 1);
    if(c == 0)
    {
        cout<<k<<"\n";
        return;
    }
    ans = n * c + r;
    if(r == 0)
        ans--;
    cout<<ans<<"\n";
}


void solve()
{
    int n, k, count = 0, ans = 0;
    cin>>n>>k;
    while(count + n - 1 < k)
    {
        ans += n;
        count = count + n - 1;
    }

    ans = ans + k - count;
    cout<<ans<<"\n";


}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve2();
    }


    return 0;
}
