#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    int w = 0, d = 0, l = 0;
    for(int i=1;i<=6;i++)
    {
        int ya, yb;
        ya = i-a;
        yb = i-b;
        
        if(ya<0)
            ya*=-1;
        if(yb<0)
            yb*=-1;

        if(ya<yb)
            l++;
        else if(ya>yb)
            w++;
        else if(ya==yb)
            d++;    
    }
    cout<<l<<" "<<d<<" "<<w<<"\n";
}