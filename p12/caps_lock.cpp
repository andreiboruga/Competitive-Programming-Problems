#include <bits/stdc++.h>
using namespace std;

string lower(string s)
{
    for(int i = 1; i < s.size(); i++)
    {
        s[i] += 32;
    }
    return s;
}

int main()
{
    string s, rez;
    cin>>s;
    int first = 1;
    int caps = 1;
    if(s[0] < 'a')
    {
        first = 0;
    }
    for(int i = 1; i < s.size(); i++)
    {
        if(s[i] > 'Z')
        {
            caps = 0;
            break;
        }
    }

    if(caps == 1)
    {
        rez = lower(s);
        if(first == 1)
            rez[0] -= 32;
        else
            rez[0] += 32;
        cout<<rez;
        return 0;
    }

    cout<<s;



    return 0;
}
