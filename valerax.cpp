#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    }
    char x = arr[0][0];
    char y = arr[0][n-2];
    int i=0, j=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j || i+j == n-1)
            {
                if(arr[i][j]!=x)
                {
                    cout<<"NO\n";
                    exit(0);
                }
            }
            else
            {
                if(arr[i][j]==y)
                    continue;
                else
                {
                    cout<<"NO\n";
                    exit(0);
                }
            }
        }
    }
    if(y==x)
        cout<<"NO\n";
    else
        cout<<"YES\n";
}