#include <bits/stdc++.h>

using namespace std;

int solve(int n, int m)
{
    if(m % 2 == 0)
    {
        if(n >= m / 2)
            return n - m / 2 + 1;
        else
            return 1 + solve(n, m / 2);
    }
    else
    {
        if(n >= (m + 1) / 2)
            return n - (m + 1) / 2 + 2;
        else
            return 2 + solve(n, m / 2 + 1);
    }
}

int main()
{
	int n, m;
    cin>>n>>m;

    if(m <= n)
    {
        cout<<n - m;
        return 0;
    }

    cout<<solve(n, m);



	return 0;
}