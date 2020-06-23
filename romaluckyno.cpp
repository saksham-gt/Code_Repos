#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    long long int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int t, cnt = 0;
    for(int i=0;i<n;i++)
    {
        t=0;
        while(arr[i]>0)
        {
            if(arr[i]%10 == 4 || arr[i]%10 == 7)
                t+=1;
            arr[i]/=10;
        }
        if(t<=k)
            cnt+=1;
        else
            continue;
    }
    cout<<cnt<<"\n";
}