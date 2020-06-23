#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin>>str;
    transform(str.begin(), str.end(), str.begin(), [](unsigned char c){return tolower(c);});
    //enum task = {'a', 'e', 'i', 'o', 'u', 'y'};
    int h = str.size();
    int d=0;
    int i=0;
    int x = str.size()-1;
    while(i<h)
    {   /*
        if(d==1)
            i--;
        d=0;
        */
        if(str[i]=='a' || str[i]=='e' || str[i]=='i'|| str[i]=='o' || str[i]=='u' || str[i]=='y')
        {
            int j=i;
            while(j!=x)
            {
                str[j] = str[j+1];
                j++;
            }
            x--;
            h--;
            continue;
        }
        else 
        {
            i++;
            continue;
        }
    }
    //cout<<h<<"\n";
    int f = 2*h;
    char op[f];
    for(int i=0;i<h;i++)
    {
        //cout<<str[i];
        op[1+2*i] = str[i];    
        op[2*i] = '.';
    }
    for(int i=0;i<f;i++)
        cout<<op[i];
    cout<<"\n";    
    return 0;  
}