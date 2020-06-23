#include <bits/stdc++.h>
using namespace std;

void swap(int arr[], int j, int i)
{
    int t;
    t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}

void printarray(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        arr[i] = i+1;
    int i;
    if(n%2==1)
        cout<<"-1\n";
    else
    {
        i = 1;
        while(i<n)
        {
            swap(arr, i, i-1);
            i+=2;
        }
        printarray(arr, n);
    }
}