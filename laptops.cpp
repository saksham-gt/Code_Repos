#include <bits/stdc++.h>
using namespace std;

void laptops(int n)
{
    int a[n], b[n];
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
    int d=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<b[i])
        {
            for(int j=0;j<n;j++)
            {
                if(a[j]>b[j])
                    {
                        cout<<"Happy Alex\n";
                        exit(0);
                    }
                    else
                        continue;
            }
        }
        else
            d=1;
    }
    if(d==1)
        cout<<"Poor Alex\n";
}

int main()
{
    int n;
    cin>>n;
    laptops(n);

    return 0;
}