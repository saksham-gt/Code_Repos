#include <bits/stdc++.h>
using namespace std;

int fox(int arr[], int n)
{
    int i;
    for(int k=0;k<n;k++)
    {
        i = n-1;
        while(i>0)
        {
            if(arr[i]>arr[i-1])
            {
                arr[i]-=arr[i-1];
                sort(arr, arr+n);
            }
            else
                i--;
        }
    }
    int add = 0;

    for(int i=0;i<n;i++)
        add+=arr[i];
    
    return add;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr, arr+n);
    int num = fox(arr, n);

    cout<<num<<"\n";
}