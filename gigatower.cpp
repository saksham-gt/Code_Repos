#include <bits/stdc++.h>
using namespace std;

long long int check(long long int temp)             //-178
{
    while(temp>10 || temp<-10)                      
    {
        if(temp%10!=8 && temp%10!=-8)
            temp/=10;
        else
        {
            temp%=10;
            break;
        }
    }
    return temp;
}

int main()
{
    long long int x;
    cin>>x;
    //cout<<x%10<<"\n";
    long long int temp = x;
    int cnt = 0;
    int y = check(temp);
    //cout<<"y : "<<y<<"\n";
    if(y==8 || y==-8)
    {
        x++;
        temp = x;
        y = check(temp);
        cnt++;
        while(y!=8 && y!=-8)
        {
            x++;
            temp = x;
            y = check(temp);
            cnt++;
        }
    }

    else if(y!=8 || y!=-8)
    {
        while(y!=8 && y!=-8)
        {
            x++;
            temp = x;
            //cout<<temp<<"\n";
            y = check(temp);
            //cout<<"y : "<<y<<"\n";
            //exit(0);
            cnt++;  
            //cout<<"hfjhfch\n";
        }
    }
    cout<<cnt<<"\n";
}