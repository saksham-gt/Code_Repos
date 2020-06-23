#include <bits/stdc++.h>
using namespace std;

int chess(char z)
{
    int y;
    if(z == '.')
        y = 1;
    else if(z =='-')
        y = 0;
    return y;
}

void printarray(char *arr, int n, int m)
{
    
}

int main()
{
    int n, m;
    cin>>n>>m;
    char arr[n][m], ans[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int x = chess(arr[i][j]);
            //cout<<x<<"\n";
            if(x==0)
                ans[i][j] = '-';
            else if(x==1)
            {
                if((i+j)%2==0)
                    ans[i][j] = 'B';
                else
                    ans[i][j] = 'W';
                
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<ans[i][j];
        cout<<"\n";
    }
    cout<<"\n";
}