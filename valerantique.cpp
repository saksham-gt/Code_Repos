#include <bits/stdc++.h>
using namespace std;

void ant(int n, int v)
{
    int h=0, d=0;
    vector<vector<int>> arr(n); 
    for(int i=0;i<n;i++)
    {
        cin>>d;
        //arr.push_back(d);
        for(int j=0;j<d;j++)
        {
            cin>>h;
            arr[i].push_back(h);
        }

    }
    int e=0, cnt=0;
    vector<int> ct;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            e = 0;
            if(arr[i][j]<v)
            {
                e=1;
                break;
            }
            else 
                continue;
        }
        if(e==1)
        {
            cnt++;
            ct.push_back(i+1);
        }
        //cout<<"\n";
    }
    sort(ct.begin(), ct.end());
    cout<<cnt<<"\n";
    for(int i=0;i<ct.size();i++)
        cout<<ct[i]<<" ";
    cout<<"\n";
}

int main()
{
    int n, v;
    cin>>n>>v;

    ant(n, v);

    return 0;
}