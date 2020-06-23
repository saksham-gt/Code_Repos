#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    int max[6], mx;
    max[0] = a+b*c;
    max[1] = a*(b+c);
    max[2] = a*b*c;
    max[3] = (a+b)*c;
    max[4] = a+b+c;
    max[5] = a*b+c;
    mx = max[0];
    for(int i=0;i<6;i++)
    {
        if(mx<max[i])
            mx = max[i];
    }
    cout<<mx<<"\n";

    return 0;
}