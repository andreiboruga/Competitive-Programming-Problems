#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    int max = a + b + c;
    int val = a * b * c;
    if(val > max)
        max = val;
    val = a * b + c;
    if(val > max)
        max = val;
    val = a + b * c;
    if(val > max)
        max = val;
    val = (a + b) * c;
    if(val > max)
        max = val;
    val = a * (b + c);
    if(val > max)
        max = val;
    cout<<max;


    return 0;
}
