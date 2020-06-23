#include <bits/stdc++.h>
using namespace std;
 
int minimum(int m[], int n)
{
    int x = 0, i = 0;
    int min = m[0];
    for(int x=0;x<n;x++)
    {
        if(min>m[x])
            i = x, min = m[x];
        x++;
    }
    return i;
}
 
void diff(int a[], int m[], int i, int ai, int si, int ind[][2])
{
    int x = a[i] - a[ai];
    int y = a[i] - a[si];
    int *o;
 
    if(x<0)
        x*=-1;
    if(y<0)
        y*=-1;
    
    if(x<=y)
        m[i] = x, ind[i][0] = i+1,ind[i][1] = ai+1;
    else
        m[i] = y, ind[i][0] = i+1, ind[i][1] = si+1;
        
    //cout<<ind[i][0]<<" "<<ind[i][1]<<"\n";
}
 
int main()
{
    int n;
    cin>>n;
 
    int ind[n][2];
    int a[n], m[n];
    
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    int i=0;
    while(i<n)
    {
        //cout<<"jxdjdf\n";
        if(i==0 || i==n-1)
        {
            if(i==0)
                diff(a, m, i, i+1, n-1, ind);
            else
                diff(a, m, i, 0, i-1, ind);
        }
        else
            diff(a, m, i, i+1, i-1, ind);
        i++;
    }
    cout<<ind[minimum(m, n)][0]<<" "<<ind[minimum(m, n)][1]<<"\n";
}