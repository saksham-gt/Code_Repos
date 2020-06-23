#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    long long js[t];
    long long int njs = 0;
    
    for(int i=0;i<t;i++)
    {
        njs = 0;
        long long int ts;
        cin>>ts;
        long long int j = 2;
        
        while(ts%2==0)
            ts/=2;
            
        while(j<ts)
        {
            njs++;
            j+=2;
        }
        js[i] = njs;
    }

    for(int i=0;i<t;i++)
        cout<<js[i]<<"\n";
}