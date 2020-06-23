#include <bits/stdc++.h>
using namespace std;

long long int reduction(long long int a)
{
    long long int fa = 0;
    int x = 0;
    while(a!=0)
    {
        int t = a%10;
        if(t!=0)
        {
            int k = pow(10, x);
            fa += t*k;
            x++;
        }
        a/=10;
    }
    return fa;
}

void check(long long int a, long long int b, long long int c)
{
    long long int fa, fb, fc;
    fa = reduction(a);
    fb = reduction(b);
    fc = reduction(c);

    if(fa+fb==fc)
        cout<<"YES\n";
    else
        cout<<"NO\n";

}

int main()
{
    long long int a, b, c;
    cin>>a>>b;
    c = a+b;
    check(a, b, c);
}