#include <bits/stdc++.h>
using namespace std;

int cake(int r, int c)
{
    int d=0, cnt=0;
    char ck[r][c];
    int s[2][2], cntc=0, cntr=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cin>>ck[i][j];
        for(int j=0;j<c;j++)
        {
            d=0;
            if(ck[i][j]=='S')
                break;
            else
                d=1;
        }
        if(d==1)
        {
            cntc+=c;
            cnt++;
            d=0;
        }
    }
    
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            if(ck[j][i]=='S')
            {
                d=0;
                break;
            }
            else
                d=2;
        }
        if(d==2)
            cntr+=r-cnt;  
    }
    return (cntc+cntr);
}

int main()
{
    int r, c, h;
    cin>>r>>c;
    h = cake(r, c);
    cout<<h<<"\n";

    return 0;
}