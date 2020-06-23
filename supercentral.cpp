#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n], y[n];
    for(int i=0;i<n;i++)
        cin>>x[i]>>y[i];
    int j=0;
    int upper = 0, lower = 0, right = 0, left = 0, cnt = 0;
    for(int i=0;i<n;i++)
    {
        upper = 0, lower = 0, right = 0, left = 0;
        j = 0;
        while(j<n)
        {
            if(i==j)
            {
                j++;
                continue;
            }
            else
            {
                if(x[j]>x[i] && y[j]==y[i])
                    right+=1;
                else if(x[j]<x[i] && y[j]==y[i])
                    left+=1;
                else if(x[j]==x[i] && y[j]>y[i])
                    upper+=1;
                else if(x[j]==x[i] && y[j]<y[i])
                    lower+=1;
            }
            //cout<<"lower = "<<lower<<" upper = "<<upper<<" right = "<<right<<" left = "<<left<<"\n";
            j++;
        }
        if(upper>=1 && lower>=1 && left>=1 && right>=1)
            cnt+=1;   
        //cout<<"cnt = "<<cnt<<"\n";
    }
    cout<<cnt<<"\n";
}