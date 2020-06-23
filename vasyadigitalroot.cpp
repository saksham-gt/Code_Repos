#include <bits/stdc++.h>
using namespace std;

void printarray(char str[], int k)
{
    for(int i=0;i<k;i++)
        cout<<str[i];
    cout<<"\n";
}

int main()
{
    long long int k, d;
    cin>>k>>d;
    char str[k-1];
    
    if(k>1)
    {
        if(d!=0)
        {
            cout<<char(d) - char(0);
            for(int i=0;i<k-1;i++)
                str[i] = '0';
            printarray(str, k-1);
        }
        else
            cout<<"No solution\n";
    }
    else
        cout<<char(d) - char(0);
}