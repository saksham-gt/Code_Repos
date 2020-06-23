#include <bits/stdc++.h>
using namespace std;

void raspberry(int n, int c)
{
    int arr[n], f[n-1];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n-1;i++)
        f[i]=arr[i]-arr[i+1];
    sort(f, f+n-1, greater<int>());
    f[0]-=c;
    if(f[0]>0)
        cout<<f[0]<<"\n";
    else
        cout<<0<<"\n";
}

int main()
{
    int n, c;
    cin>>n>>c;
    raspberry(n, c);
}