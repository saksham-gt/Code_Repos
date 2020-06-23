#include <bits/stdc++.h>
using namespace std;

void lunchjoy(int n, int k)
{
    int f[n], t[n], joy[n];
    for(int i=0;i<n;i++)
    {
        cin>>f[i]>>t[i];
        if(t[i]>k)
            joy[i]=f[i]-t[i]+k;
        else
            joy[i] = f[i];
    }
    sort(joy, joy+n, greater<int>());
    cout<<joy[0]<<"\n";
}

int main()
{
    int n, k;
    cin>>n>>k;
    lunchjoy(n, k);
    
    return 0;
}