#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    vector<string> str;
    for(int i=0;i<T;i++)
    {
        string temp;
        cin>>temp;
        str.push_back(temp);
    }
    for(int i=0;i<T;i++)
    {
        //cout<<str[i]<<"\n";
        
        if(str[i].size()>10)
            cout<<str[i][0]<<str[i].size()-2<<str[i][str[i].size()-1]<<"\n";
        else
            cout<<str[i]<<"\n";
    }
    return 0;
}