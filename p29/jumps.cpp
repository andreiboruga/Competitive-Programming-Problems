#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d, sum, minH = 0, maxH = 0, x, y;
    cin>>d>>sum;
    for(int i = 0; i < d; i++)
    {
        cin>>x>>y;
        minH+=x;
        maxH+=y;
    }
    if(sum < minH)
    {
        cout<<"NO";
        return 0;
    }
    if(sum > maxH)
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES";


    return 0;
}
