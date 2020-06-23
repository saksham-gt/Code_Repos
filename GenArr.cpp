#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n], max=0, mxi=0, min=100, mni=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            mxi=i;
        }   
        if(a[i]<=min)
        {
            min=a[i];
            mni=i; 
        }
    }
    //cout<<max<<" ";
    if(mni<mxi)
        cout<<mxi+n-mni-2<<"\n";
    else
        cout<<mxi+n-mni-1<<"\n";
        
    return 0;
}