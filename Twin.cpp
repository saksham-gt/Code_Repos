#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int coins[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>coins[i];
        sum+= coins[i];
    }
    sort(coins, coins+n, greater<int>());
    //sort(begin(coins), end(coins), greater<>());
    //cout<<"sorted array is : ";
    //for(int i=0;i<n;i++)
    //    cout<<coins[i]<<" ";
    int i=0;
    int cnt=0;
    int x=0;
    while(x<=sum/2)
    {
        x+=coins[i];
        cnt++;
        i++;
    }
    cout<<"\n"<<cnt<<"\n";
    
    return 0;
}