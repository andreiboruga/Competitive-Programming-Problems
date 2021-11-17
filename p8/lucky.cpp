#include <bits/stdc++.h>
using namespace std;

bool lucky(int x)
{
    if((x % 10 != 4) && (x % 10 != 7))
        return false;
    while(x/=10)
    {
         if((x % 10 != 4) && (x % 10 != 7))
            return false;
    }
    return true;
}


int main()
{
    int n, sq;
    cin>>n;

    sq = n/2;

    if(lucky(n))
    {
        cout<<"YES";
        return 0;
    }
    for(int i = 4; i <= sq; i++)
    {
        if(n % i == 0 && lucky(i))
        {
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";

    return 0;
}
