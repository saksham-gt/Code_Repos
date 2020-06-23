#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[5][5];
    int sum = 0, x = 0, y = 0, d = 1;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                x = i - 2;
                y = j - 2;
            }
            else
            {
                continue;
            }
        }
    }
    if(x<0)
        x*=-1;
    if(y<0)
        y*=-1;
    sum = x+y;
    cout<<sum;
    cout<<"\n";

    return 0;
}