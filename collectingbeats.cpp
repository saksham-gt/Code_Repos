#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    char arr[4][4];
    vector<int> a;
    cin>>k;
    int cnt[9];
    for(int i=0;i<9;i++)
        cnt[i] = 0;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
            cin>>arr[i][j];
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]!='.')
            {
                int ia = arr[i][j] - '0';
                a.push_back(ia);
            }
        }
    }
    
    for(auto i=a.begin();i<a.end();i++)
        cnt[*i-1] += 1;

    int max = 0;
    for(int i=0;i<9;i++)
    {
        if(cnt[i]>max)
            max = cnt[i];
    }
    //cout<<"max : "<<max<<"\n";
    if(max>2*k)
        cout<<"NO\n";
    else
        cout<<"YES\n"
;
}