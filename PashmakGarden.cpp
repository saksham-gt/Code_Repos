#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, x3, x4, y1, y2, y3, y4;
    cin>>x1>>y1>>x2>>y2;
        int f, e;
        f=x1-x2;
        e=y1-y2;
        if(f<0)
            f*=-1;
        if(e<0)
            e*=-1;
        if(x1==x2)
        {
        x3 = x1-(y2-y1);
        x4 = x1-(y2-y1);
        y3 = y1;
        y4 = y2;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<"\n";
        }
        else if(y1==y2)
        {
            x4 = x1;
            x3 = x2;
            y4 = y1-(x2-x1);
            y3 = y1-(x2-x1);
            cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<"\n";
        }
        else if(f==e)
        {
            x3 = x2;
            x4 = x1;
            y3 = y1;
            y4 = y2;
            cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<"\n";
        }
        else
            cout<<-1<<"\n";
    return 0;
}