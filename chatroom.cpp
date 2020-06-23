#include <bits/stdc++.h>
using namespace std;

void yon(string s)
{
    int n=s.size();
    int j=0;
    int d=1;
    int e=0, f, g;
    for(int a=0; a!=n; a++)
    {
        if(s[a]!='h')
            continue;
        else
        {
            for(int c=a; c!=n; c++)
            {
                if(s[c]!='e')
                    continue;
                else
                {
                    for(int f=c; f!=n; f++)
                    {
                        if(s[f]!='l')
                            continue;
                        else
                        {    
                            for(int g=f; g!=n; g++)
                            {
                                if(j==0)
                                {
                                    g++;
                                    j++;
                                    continue;
                                }
                                if(s[g]!='l')
                                    continue;
                                else
                                {
                                    for(int h=g; h!=n; h++)
                                    {
                                        if(s[h]!='o')
                                            continue;
                                        else
                                        {
                                            cout<<"YES\n";
                                            exit(0);
                                        }
                                    }
                                }
                            }
                        }   
                    }
                }
            }
        }
    }
    cout<<"NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {return tolower(c);});
    yon(s);

    return 0;
}