#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt[n];
    int k[n];
    for(int i=0;i<n;i++)
        cin>>k[i];
    int x;

    for(int i=0;i<n;i++)
    {
        int add = 0;
        for(int j=0;j<k[i];j++)
        {
            cin>>x;
            add+=x;
        }
        cnt[i] = add*5 + k[i]*15;
    }

    sort(cnt, cnt+n);
    cout<<cnt[0]<<"\n";

}