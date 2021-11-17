#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    int N = n;
    if(n < 10)
    {
        cout<<n<<"\n";
        return;
    }
    int nr = 0;
    int aux;
    do
    {
        nr++;
        aux = n%10;
    } while (n/=10);
    
    int rez = (nr-1) * 9;
    int p = 10;
    int aux2 = 0;
    while(nr--)
    {
        aux2 *= p;
        aux2 += aux;
    }

    if(N < aux2)
    {
        rez += (aux-1);
        cout<<rez<<"\n";
        return;
    }
    rez += aux;
    cout<<rez<<"\n";

}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}