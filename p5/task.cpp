#include <bits/stdc++.h>

using namespace std;

bool vowel(char x)
{
    if(x == 'a' || x == 'A' || x == 'e' || x =='E'
       || x == 'o' || x == 'O' || x == 'y' || x =='Y'
       || x == 'u' || x == 'U' || x == 'i' || x =='I')
       return true;
    return false;
}

int main()
{
    string s;
    cin>>s;
    char c;
    for(int i = 0; i < s.size(); i++)
    {
        if(vowel(s[i]))
            continue;
        else
        {
            if(s[i] <= 'Z')
                s[i] += 32;
            cout<<"."<<s[i];
        }
    }




    return 0;
}
