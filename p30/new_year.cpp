#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    int poz = 1;
    cin>>n>>t;
    vector<int> a(n);
    for(int i = 1; i < n; i++)
    {
        cin>>a[i];
    }
    while(poz < t)
        poz += a[poz];

    if(poz == t)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
