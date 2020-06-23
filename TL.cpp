#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a, a+n);
    for(int i=0;i<m;i++)
        cin>>b[i];
    sort(b, b+m);
    int v = -1;
    for(int i=a[n-1];i<b[0];i++)
    {
        if(i>0)
        {
            if(2*a[0]<=i)
            {
                v = i;
                break;
            }   
        }
    }
    cout<<v<<"\n";
}