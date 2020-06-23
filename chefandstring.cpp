#include <bits/stdc++.h>
using namespace std;

int p(int pairs[], int i, string stud, int j, char f)
{
    int x;
    if(stud[j+1]==f)
        pairs[i]+=1, x = j+2;
    else
        x = j+1;
    return x;
}

void printarray(int pairs[], int t)
{
    for(int i=0;i<t;i++)
        cout<<pairs[i]<<"\n";
}

int main()
{
    int t;
    cin>>t;
    int pairs[t];
    for(int i=0;i<t;i++)
    {
        
        pairs[i] = 0;
        
        int n;        
        string stud;

        cin>>stud;
        n = stud.size();

        int j = 0;
        while(j<n)
        {
            if(stud[j]=='x')
                j = p(pairs, i, stud, j, 'y');
            else
                j = p(pairs, i, stud, j, 'x');
        }
    }
    printarray(pairs, t);
}