#include <bits/stdc++.h>
using namespace std;

int rez(int n, int m)
{
    if(n > m / 2)
    {
        
    }
    else
        return rez(n, m/2);
}


int main()
{
    int n, n2, m, nr1, nr2, i = 0;
    cin>>n>>m;
    if(m <= n)
    {
        cout<<n - m;
        return 0;
    }

    n2 = n;

    while(n2 < m)
    {
        n2 *= 2;
        i++;
    }
    if(n2 == m)
    {
        cout<<i;
        return 0;
    }
    

    ////nr1: daca * 2 si scad
    nr1 = i + n - m;


    n /= 2;
    ////nr2 daca scad si *2
    if(m % 2 == 1)
    {
        m += 1;
        nr2 = i + n - m/2 + 1;
    }
    else
    {
        nr2 = i + n - m/2;
    }



    cout<<min(nr1, nr2);
    return 0;
}
