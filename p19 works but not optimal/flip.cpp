#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, max = 0, initones = 0;
    cin>>n;
    int ans;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        cin>>x;
        if(x == 1)
            initones++;
        v.push_back(x);
    }

    vector<int> zeros(n);
    vector<int> ones(n);
    zeros[0] = v[0] == 0;
    ones[0] = v[0] == 1;
    for(int i = 1; i < n; i++)
    {
        zeros[i] = zeros[i - 1] + (v[i] == 0);
        ones[i] = ones[i - 1] + (v[i] == 1);
    }

    if(initones == n)
    {
        cout<<n - 1;
        return 0;
    }
    if(initones == 0)
    {
        cout<<n;
        return 0;
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            int val = (zeros[j] - zeros[i] + (v[i] == 0)) - (ones[j] - ones[i] + (v[i] == 1));
            if(val > max)
            {
                max = val;
            }
        }
    }
    cout<<initones + max;

    return 0;
}
