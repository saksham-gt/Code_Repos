#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin>>n>>d;
    int a[n];
    int sum=0, cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sum+=(n-1)*10;
    cnt+=2*(n-1);
    //cout<<cnt<<"\n";
    if(sum>d)
    {
        cout<<-1<<"\n";
        exit(0);
    }
    else
    {
        sum=d-sum;
        if(sum>=5)
            cnt+=sum/5;    
    }

    cout<<cnt<<"\n";

    return 0;
}