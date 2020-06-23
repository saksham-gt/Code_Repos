#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int cnt[3];
    for(int i=0;i<3;i++)
        cnt[i] = 0;
    for(int i=0;i<n;i++)
        cnt[a[i]-1]++;
    int min=cnt[0];
    for(int i=1;i<3;i++)
    {
        if(min>=cnt[i])
            min = cnt[i];
    }
    cout<<min<<"\n";
    
    int c[min][3];
    for(int i=0;i<min;i++)
    {
        for(int j=0;j<3;j++)
            c[i][j]=0;
    }
    int i=0, k=0, l=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]==1 && i<min)
            {
                c[i][0] = j+1;
                i++;
            } 
            else if(a[j]==2 && k<min)
            {
                c[k][1] = j+1;
                k++;
            }
            else if(a[j]==3 && l<min)
            {
                c[l][2] = j+1;
                l++;
            }
            else 
                continue;  
        }
        for(int x=0;x<min;x++)
            cout<<c[x][0]<<" "<<c[x][1]<<" "<<c[x][2]<<"\n";
            
        return 0;
}