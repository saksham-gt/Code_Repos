#include <bits/stdc++.h>
using namespace std;

void printarray(int op[2][2])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
            cout<<op[i][j]<<" ";
        cout<<"\n";
    }
}

int check(int op[2][2])
{
    int x = 0;
    if(op[0][0] != op[0][1] && op[0][0] != op[1][1] && op[0][0] != op[1][0] && op[0][1] != op[1][0] && op[0][1] != op[1][1] && op[1][0] != op[1][1])
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                if(1<=op[i][j] && op[i][j]<=9)
                    x = 1;
                else
                {
                    x = 0;
                    break;
                }
            }
            if(x==0)
                break;
        }
    }
    return x;
}

int sum(int x, int y, int r)
{
    int k;
    if(x+y==r)
        k = 1;
    else 
        k = 0;
    return k;
}

int main()
{
    int r1, r2, c1, c2, d1, d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    int op[2][2];

    for(int i=1;i<=9;i++)
    {
        int f = 0;
        op[0][0] = i;
        op[0][1] = r1 - i;
        op[1][0] = c1 - i;
        op[1][1] = c2 - op[0][1];
        
        if(sum(op[1][0], op[1][1], r2))
        {
            if(sum(op[0][0], op[1][1], d1))
            {
                if(sum(op[0][1], op[1][0], d2))
                {
                    if(check(op)==1)
                    {
                        printarray(op);
                        exit(0);
                    }
                }
            }
        }
    }
    cout<<"-1\n";
}