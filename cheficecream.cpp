#include <bits/stdc++.h>
using namespace std;

string serve[100];

int main() {
	// your code goes here
	int t;
    cin>>t;
    int cf = 0, ct = 0, cfif = 0;
    
    for(int i=0;i<t;i++)
    {
        serve[i] = "YES";
        cf = 0, ct = 0, cfif = 0;
        int n;
        cin>>n;
        int coins[n];
        
        for(int j=0;j<n;j++)
        {
            cin>>coins[j];

            if(coins[j]==5)
                cf++;
            else
            {
                if(coins[j]==10)
                {
                    if(cf==0)
                        serve[i] = "NO";
                    else
                        cf--, ct++;
                }
                else if(coins[j]==15)
                {
                    if(ct>0)
                        ct--, cfif++;
                    else if(ct==0 && cf>1)
                        cfif++, cf-=2;
                    else
                        serve[i] = "NO";
                }
            }
        }
    }
    for(int i=0;i<t;i++)
        cout<<serve[i]<<"\n";
	
    return 0;
}
