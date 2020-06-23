#include <bits/stdc++.h>
using namespace std;

void printarray(vector<int> s1, vector<int> s2, vector<int> s3, int n, int p, int z)
{
    cout<<n<<" ";
    for(auto i=s1.begin();i!=s1.end();i++)
        cout<<*i<<" ";
    cout<<"\n"<<p<<" ";
    for(auto i=s2.begin();i!=s2.end();i++)
        cout<<*i<<" ";
    cout<<"\n"<<z<<" ";
    for(auto i=s3.begin();i!=s3.end();i++)
        cout<<*i<<" ";
    cout<<"\n";
}

int main()
{
    int ab, x, y, h;
    cin>>ab;
    int arr[ab], p=0, n=0, z=0;
    vector<int> pos, neg, zer, s1, s2, s3;
    for(int i=0;i<ab;i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
        {
            n++;
            neg.push_back(arr[i]);
        }
        else if(arr[i]>0)
        {
            p++;
            pos.push_back(arr[i]);
        }
        else
        {
            z++;
            zer.push_back(arr[i]);
        }
    }
    
    if(n%2==0)
    {
        s1.push_back(neg[0]);
        s3.push_back(neg[1]);
        for(int i=2;i<n;i++)
            s2.push_back(neg[i]);
        for(int i=0;i<p;i++)
            s2.push_back(pos[i]);
        for(int i=0;i<z;i++)
            s3.push_back(zer[i]);
        x = 1;
        h = z+1;
        y = n+p-2;
    }
    else
    {
        s1.push_back(neg[0]);
        for(int i=1;i<n;i++)
            s2.push_back(neg[i]);
        for(int i=0;i<p;i++)
            s2.push_back(pos[i]);
        for(int i=0;i<z;i++)
            s3.push_back(zer[i]);
        x = 1;
        y = n+p-1;
        h = z;
    }
    printarray(s1, s2, s3, x, y, h);
}