#include <bits/stdc++.h>
using namespace std;
int d=0;
void ld(int n)
{

    if(n%10==4 || n%10==7)
        d=1;
    else
        {
            cout<<"NO\n";       
            exit(0);
        }
}

int main()
{
    int n;
    cin>>n;
    int x=10;
    //int d=0;
    int f=n;
        while(n/x!=0)
            x*=10;
        x/=10;
        if((n%4==0 && (n/4)%2==0 )|| ((n/7)%2==0 && n%7==0))
        {
            //cout<<n/4<<"\n";
            cout<<"YES\n";
            exit(0);
        }
        else
        {
            //cout<<x<<" "<<n<<"\n";
            while(n/x!=0&&x>1)
            {
                ld(n/x);
                n=n%x;
                x/=10;
            }
        }
        ld(n%10);
        //cout<<n%10<<"\n";
        //cout<<d<<"\n";
        if(d==1)
            cout<<"YES\n";
    
    return 0;
}