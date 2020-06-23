#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x, y;
    cin>>x;
    cin>>y;

    int diffstrings = 0;
    int a[2];
    int m = 0;
    if(x.size()==y.size())
    {
        for(int i=0;i<x.size();i++)
        {
            if(x[i]!=y[i])
            {
                diffstrings++;
                a[m] = i;
                m++;
                if(diffstrings>2)
                {
                    cout<<"NO\n";
                    exit(0);
                }
            }
        }
        if(diffstrings==0)
        {
            int f = 0;
            for(int i=0;i<x.size();i++)
            {
                for(int j=i+1;j<x.size();j++)
                {
                    if(x[i]==x[j])
                    {
                        cout<<"YES\n";
                        exit(0);
                    }
                }
            }
            if(f==0)
                cout<<"NO\n";
        }
        else
        {
            if(diffstrings==2)
            {
                if(x[a[0]]==y[a[1]] && x[a[1]]==y[a[0]])
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
            else
                cout<<"NO\n";
        }
    }
    else
        cout<<"NO\n";
}