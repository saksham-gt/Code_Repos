#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b;
    int cost=0;
    cin>>n>>m>>a>>b;
    int c=b/m;
    if(c<a)
    {   if(a*(n%m)>b)
            cost=b*(n/m+1);
        else
            cost=b*(n/m)+a*(n%m);
    }
    else
        cost=a*n;
    cout<<cost<<"\n";
    return 0;
}