#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int cnt = 0;
    while(n>0 && m>0)
    {
        n--;
        m--;
        cnt++;
    }
    if(cnt%2==0)
        cout<<"Malvika\n";
    else
        cout<<"Akshat\n";

    return 0;
}