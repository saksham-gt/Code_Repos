#include <bits/stdc++.h>
using namespace std;

void cifera(long long int k, long long int l)
{
    int cnt=0;
    while(l>k)
    {
        l/=k;
        cnt++;
    }
    if(l==k)
        cout<<"YES\n"<<cnt<<"\n";
    else
        cout<<"NO\n";
    
}

int main()
{
    long long int k, l;
    cin>>k>>l;
    
    cifera(k, l);
}