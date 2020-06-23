#include <bits/stdc++.h>
using namespace std;

int main()
{
    string opt[4];
    int arr[4];
    int amn, amx;
    int min = 100, max = 0;
    for(int i=0;i<4;i++)
    {
        cin>>opt[i];
        arr[i] = opt[i].size() - 2;
        if(min>arr[i])
        {
            amn = i;
            min = arr[i];}
        if(max<arr[i])
        {
            amx = i;
            max = arr[i];}
    }

    char ans;
    int cmn = 0, cmx = 0;
    
    for(int i=0;i<4;i++)
    {
        if(max<arr[i]*2)
            cmx += 1;
        if(min>arr[i]/2)
            cmn += 1;
    }
    //cout<<cmn<<" "<<cmx<<"\n";
    
        if(cmn==1 && cmx!=cmn)
            cout<<opt[amn][0]<<"\n";
        
        else if(cmn==1 && cmn == cmx)
            cout<<"C\n";
        
        else if(cmn>1)
        {
            if(cmx==1)
                cout<<opt[amx][0]<<"\n";
            else
                cout<<"C\n";
        }
        
}