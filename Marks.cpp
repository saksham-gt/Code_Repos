#include <bits/stdc++.h>
using namespace std;

void ip(int n, int m)
{
    char ar[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>ar[i][j];
    }
    char *arr = &ar[0][0];

    char mx[m];
    for(int i=0;i<m;i++)
    {
        mx[i] = *(arr+i);
        for(int j=0;j<n;j++)
        {
            if(*((arr+j*m)+i)>mx[i])
                mx[i] = *((arr+j*m)+i);
        }
    }
    
    int count = 0, k=0, flag = 1;
    int x[n];
    
    for(int i=0;i<n;i++)
        x[i] = -1;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(*((arr+j*m)+i)==mx[i])
            {
                k = 0;
                while(k<count)
                {
                    flag = 0;
                    if(x[k]==j)
                        break;
                    else
                        flag = 1;
                    k++;
                }
                if(flag==1)
                {
                    x[count]=j;
                    count++;
                }
            }
        }
    }
    cout<<count<<"\n";
}



int main()
{
    int n, m;
    int *k;
    cin>>n>>m;
    ip(n, m);
}