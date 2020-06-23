#include <bits/stdc++.h>
using namespace std;

int  max(int p, int t)
{
    int x = 3*p/10;
    int y = p-p*t/250;
    if(x>=y)
        return x;
    else 
        return y;
}

int main()
{
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int m = max(a, c);
    int v = max(b, d);
    if(m>v)
        cout<<"Misha\n";
    else if(m<v)
        cout<<"Vasya\n";
    else
        cout<<"Tie\n";
    return 0;
}