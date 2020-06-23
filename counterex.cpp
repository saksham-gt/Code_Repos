#include <bits/stdc++.h>
using namespace std;

//int t = 1;
long long int gcd(long long int x, long long int y)
{
    long long int i= 1;
    long long int t = x;
    x = y%x;
    y = t;
    //cout<<"t = "<<t<<"\n";
    if(x!=0)
        t = gcd(x, y);
    return t;
}

int main()
{
    long long int l, r;
    cin>>l>>r;
    long long int i, j, k, y;
    long long int x = gcd(l, r);
    //cout<<x<<"\n";
    
    for(i=l;i<=r-2;i++)
    {
        for(j=i+1;j<=r-1;j++)
        {
            //cout<<i<<" "<<j<<"\n";
            x = gcd(i, j);
            //cout<<x<<"\n";
            if(x==1)
            {
                for(k=j+1;k<=r;k++)
                {
                    y = gcd(j, k);
                    if(y==1)
                    {
                        if(gcd(i, k)!=1)
                        {
                            cout<<i<<" "<<j<<" "<<k<<"\n";
                            exit(0);
                        }
                        else 
                            continue;
                    }
                }
            }
            
        }
    }
    cout<<"-1\n";
    
}