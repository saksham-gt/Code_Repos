#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int arr[m], b[m-n+1];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }    
    sort(arr, arr+m, greater<int>());
    int min=1000;
    int c=0;
    for(int i=0;i<=m-n;i++)
    {
        b[i] = arr[i] - arr[i+n-1];
        if(min>b[i])
            min = b[i];
    }

    cout<<min<<"\n";
    return 0;
}