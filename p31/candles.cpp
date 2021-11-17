#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    int rez = a;

    int burnt = a;
    int aux; //reprezinta cate grupuri de lumanari se pot forma
    while(burnt >= b)
    {
        aux = burnt/b;
        rez += aux;
        burnt = burnt % b + aux;
    }

    cout<<rez;


    return 0;
}