#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int m)
{
    n%=m;
    if(n!=0)
        gcd(m, n);
    //cout<<"gcd "<<m<<"\n";
    
    return m;
}

int stairs(int n, int m)
{
    int x=0, i=1;
    if(m>n)
        m=-1;
    else if(m==n)
        return m;
    else
    {
        x = gcd(n, m);
        if(n%2==0)
        {
            while(m*i<n/2)
                i++;
        }
        else
        {
            //cout<<m<<" "<<n<<" "<<i<<"\n";
            while(m*i<1+n/2)
                i++;
        }
        m*=i;
    }

    return m; 
}

int main()
{
    int n, m;
    cin>>n>>m;
    int h;
    h=stairs(n, m);

    cout<<h<<"\n";

    return 0;
}