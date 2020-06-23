#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    cin>>n;
    int num[n];
    
    for(int i=0;i<n;i++)
        num[i] = i+1;
    
    cin>>a;
    
    int x[a];
    for(int i=0;i<a;i++)
        cin>>x[i];
    
    cin>>b;
    int y[b];
    int d=0;
    
    for(int i=0;i<b;i++)
        cin>>y[i];
    
    int c[a+b];
    
    for(int i=0;i<a;i++)
        c[i] = x[i];
    
    for(int i=a;i<a+b;i++)
        c[i] = y[i-a];
    
    sort(c, c+a+b);
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<a+b;j++)
        {
            if(c[j]==num[i] && c[j+1]!=c[j])
            {
                d=1;
                break;
            }
            else if(c[j]==num[i] && c[j+1]==c[j])
            {
                d=1;
                continue;   
            }
            else
                d=0;
        }
        if(d==0)
        {
            cout<<"Oh, my keyboard!\n";
            exit(0);
        }
        else 
            continue;
    }
    /*
    for(int i=0;i<a+b;i++)
        cout<<c[i]<<" ";
    cout<<"\n";
    */
    if(d==1)
        cout<<"I become the guy.\n";
    
    return 0;
}