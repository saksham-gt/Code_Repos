#include <bits/stdc++.h>
using namespace std;

int check(int *arr, int i, int j, int m)
{
    int x;

    if(*((arr+i*m) + j)==1)
        x = 1;
    else
        x = 0;
    return x;
}

int main()
{
    int n, m;
    cin>>n>>m;
    int arr[n][m];
    int *a = &arr[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    }
    if(check(a, 0, 0, m) == 1 || check(a, n-1, m-1, m) == 1 || check(a, 0, m-1, m) == 1 || check(a, n-1, 0, m) == 1)
        cout<<"1\n";
    
    else
    {
        int i=1;
        while(i<n-1 && check(a, i, 0, m) != 1 && check(a, i, m-1, m) != 1)
        {
            i++;
            continue;
        }
        if(i!=n-1)
            cout<<"2\n";
        else
        {
            i = 1;
            while(i<m-1 && check(a, 0, i, m) != 1 && check(a, n-1, i, m) != 1)
            {
                i++;
                continue;
            }
            if(i!=m-1)
                cout<<"2\n";

            else
                cout<<"4\n";
        }
    }
}