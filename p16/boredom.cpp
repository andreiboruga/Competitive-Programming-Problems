#include <bits/stdc++.h>
using namespace std;

#define LEN 100003


int main()
{
    int n, x, i, score = 0;
    cin>>n;
    vector<int> v(LEN, 0);
    bool empty = false;

    for(i = 0; i < n; i++)
    {
        cin>>x;
        v[x]++;
    }
    for(i = 1; i < LEN; i++)
        v[i] = i * v[i];

    while(!empty)
    {
        empty = true;
        int nr = 0;
        int sum1 = 0, sum2 = 0;
        bool seq = false;
        for(i = 1; i < LEN; i++)
            if(v[i] > 0)
            {
                empty = false;
                break;
            }
        if(i == LEN)
            break;
        for(i = 1; i < LEN; i++)
        {
            if(seq)
            {
                nr++;
                if(v[i] == 0)
                {
                    score += max(sum1, sum2);
                    for(int j = i - 1; j >= 0; j--)
                    {
                        if(v[j] == 0)
                            break;
                        v[j] = 0;
                    }
                    seq = false;
                    sum1 = 0;
                    sum2 = 0;
                    nr = 0;
                }
                else if(v[i] >= v[i - 1] + v[i + 1])
                {
                    score += v[i];
                    v[i - 1] = v[i + 1] = v[i] = 0;
                    seq = false;
                    sum1 = 0;
                    sum2 = 0;
                    nr = 0;
                }
                else if(nr % 2 == 0)
                    sum2 += v[i];
                else
                    sum1 += v[i];

                continue;
            }
            if(v[i] > 0)
            {
                if(v[i] >= v[i + 1])
                {
                    score += v[i];
                    v[i] = v[i + 1] = 0;
                    continue;
                }
                seq = true;
                sum1 += v[i];
                nr = 1;
            }
        }
    }

    cout<<score;

    return 0;
}
