#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int count = 0;
    long long int y, n, k, rem;
    cin>>y>>k>>n;
    rem = k;
    long long int i = 1;
    while(k*i<=n)
    {
        if(k*i>y)
        {
            count = 1;
            cout<<k*i-y<<" ";
        }
        i++;
    }
    if(count==0)
        cout<<"-1\n";
    else
        cout<<"\n";
}