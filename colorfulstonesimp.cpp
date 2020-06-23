#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> s, t;
    string x="d";
    while(x!="\0")
    {
        cin>>x;
        s.push_back(x);
    }
    x="s";
    while(x!="\0")
    {
        cin>>x;
        t.push_back(x);
    }
    cout<<"skjfdf"<<"\n";
    int i=0;
    cout<<sizeof(s)<<sizeof(t)<<"\n";
    while(i<sizeof(s))
    {
        int j=0;
        while(j<sizeof(t))
        {
            if(t[j]==s[i])
                i++;
            j++;
        }
    }
    cout<<i+1<<"\n";
}