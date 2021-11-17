#include <bits/stdc++.h>

using namespace std;

struct DP
{
    int health;
    int nr_pots;
};
typedef struct DP DP;

int main()
{
    int n, x, h, ans = 0;
    cin>>n;

    vector<DP> dp(n);

    cin>>x;
    if(x >= 0)
    {
        dp[0].health = x;
        dp[0].nr_pots = 1;
    }
    else
    {
        dp[0].health = 0;
        dp[0].nr_pots = 0;
    }

    for(int i = 1; i < n; i++)
    {
        cin>>x;
        if(x >= 0)
        {
            dp[i].health = x;
            dp[i].nr_pots = 1;
        }
        else
        {
            dp[i].health = 0;
            dp[i].nr_pots = 0;
        }
        
        for(int j = 0; j < i; j++)
        {
            h = dp[j].health + x;
            if(h >= 0 && dp[j].nr_pots + 1 > dp[i].nr_pots)
            {
                dp[i].nr_pots = dp[j].nr_pots + 1;
                dp[i].health = h;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(dp[i].nr_pots > ans)
            ans = dp[i].nr_pots;
    }

    cout<<ans;


    return 0;

}
