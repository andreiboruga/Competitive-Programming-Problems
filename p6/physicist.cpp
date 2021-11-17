#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x, y, z;
    int ans1 = 0, ans2 = 0, ans3 = 0;

    for(int i = 0; i < n; i++)
    {
        cin>>x>>y>>z;
        ans1 +=x;
        ans2 += y;
        ans3 += z;
    }

    if(!ans1 && !ans2 && !ans3)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
