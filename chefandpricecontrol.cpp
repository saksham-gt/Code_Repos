#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\n";
}

int main()
{
    int t;
    cin>>t;
    int op[t];

    for(int i=0;i<t;i++)
    {
        op[i] = 0;
        int n, k;
        cin>>n>>k;
        int p[n];

        for(int j=0;j<n;j++)
        {
            cin>>p[j];
            if(p[j]>k)
                op[i]+=p[j]-k;
        }       
    }
    printarray(op, t);
}