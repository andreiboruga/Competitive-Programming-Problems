#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string ref ="hello";
    int j = 0;
    int ok = 0;
    cin>>s;
    if(s.size() < 5)
    {
        cout<<"NO";
        return 0;
    }
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ref[j])
        {
            j++;
            if(j == 5)
            {
                cout<<"YES";
                return 0;
            }
        }
    }

    cout<<"NO";


    return 0;
}
