#include <bits/stdc++.h>
using namespace std;
void Vectors(int z)
{

    int d = 3, h = 1;
    int frc[z][d];
    int sum[3];
    for(int i=0;i<3;i++)
    {
        sum[i] = 0;
    }
    for(int i=0;i<z;i++)
    {
        for(int j=0;j<d;j++)
            cin>>frc[i][j];
    }
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<z;j++)
        {
            sum[i]+=frc[j][i];
        }
    }
    for(int i=0;i<3;i++)
    {
        if(sum[i]==0)
            h = 1;
        else
        {
            h = 0;
            break;
        }
    }
    if(h==1)
        cout<<"YES\n";
    else 
        cout<<"NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin>>a;
    Vectors(a);

    return 0;
}