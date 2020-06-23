#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int n;
    long int a, b;
    cin>>n;

    if(n>=0)
        cout<<n<<"\n";
    else
    {
        a=n/10;
        b=(n/100)*10+(n%10);
        if(a<b)
            cout<<b<<"\n";
        else
            cout<<a<<"\n";
    }

    return 0;
}