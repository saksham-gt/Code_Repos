#include <bits/stdc++.h>
using namespace std;

int teams(int n, int *v, int *arr)
{
    int x=2, cnt=0;
    while(x<=n)
    {
        if(*(arr+x) + *v <=5)
            cnt++;
        else
            cnt+=0;
        x+=3;
    }
    return cnt;
}

int main()
{
    int n, k;
    cin>>n>>k;
    int *v;
    v = &k;
    int h;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a, a+n);
    int *arr = a;
    if(n%3==0)
        h = teams(n, v, arr);  
    else if(n%3==1)
        h = teams(n-1, v, arr);
    else if(n%3==2)
        h = teams(n-2, v, arr);

    cout<<h<<"\n";

    return 0;   
}