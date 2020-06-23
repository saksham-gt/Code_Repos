#include <bits/stdc++.h>
using namespace std;

int count(int arr[], int n, int i)
{
    int x = 0;
    while(i<n)
    {
        x+=arr[i];
        i+=3;    
    }
    return x;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int c[3];
    for(int i=0;i<3;i++)
        c[i] = count(arr, n, i);
    int d=0;
    int max = c[0];
    for(int i=0;i<3;i++)
    {
        if(max<c[i])
        {
            max = c[i];
            d=i;
        }
    }
    //cout<<d<<"\n";
    switch(d){
        case 0 : cout<<"chest\n";
                 break;
        case 1 : cout<<"biceps\n";
                 break;
        case 2 : cout<<"back\n";
                 break;
    }
}