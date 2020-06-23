#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int x[3];
    
    x[0]=k*l/nl;
    x[2]=c*d;
    x[1]=p/np;

    int min=x[0];
    for(int i=1;i<3;i++)
    {
        if(min>x[i])
            min = x[i];
    }
    cout<<min/n<<"\n";

    return 0;
}