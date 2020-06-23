#include <bits/stdc++.h>
using namespace std;

void soroban(int x)
{
    switch (x){
        case 0 : cout<<"O-|-OOOO\n";
            break;

        case 1 : cout<<"O-|O-OOO\n";
            break;

        case 2 : cout<<"O-|OO-OO\n";
            break;
        
        case 3 : cout<<"O-|OOO-O\n";
            break;

        case 4 : cout<<"O-|OOOO-\n";
            break;

        case 5 : cout<<"-O|-OOOO\n";
            break;
        
        case 6 : cout<<"-O|O-OOO\n";
            break;

        case 7 : cout<<"-O|OO-OO\n";
            break;
        
        case 8 : cout<<"-O|OOO-O\n";
            break;
        
        case 9 : cout<<"-O|OOOO-\n";
            break;
    }
}

int main()
{
    long long int n;
    cin>>n;
    
    while(n>=0)
    {
        soroban(n%10);
        n/=10;
        if(n==0)
            break;
    }
}