#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int max, min;
    for(int i=n-1;i>0;i--)
        arr[i] = arr[i] - arr[i-1];
    max = arr[1];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
            max = arr[i];
    }
    for(int i=n-1;i>1;i--)
        arr[i] = arr[i]+arr[i-1];
    min = arr[2];
    for(int i=2;i<n;i++)
    {
        if(arr[i]<min)
            min = arr[i];
    }
    if(min>max)
        cout<<min<<"\n";
    else
        cout<<max<<"\n";
}