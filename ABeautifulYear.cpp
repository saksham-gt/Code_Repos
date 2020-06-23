#include <bits/stdc++.h>
using namespace std;

int main()
{
    string y;
    int x;
    cin>>y;
    x=y.size();                 //to measure te size of string 
    //int z = y.length();             //to measure the size of string
    //x = strlen(y.c_str());     //The constructor of the string will set it to the C style writing.
    int arr[10];
    for(int i=0;i<10;i++)
        arr[i] = i;
    int yr[x];
    for(int i=0;i<x;i++)
    {
        switch(y[i])
        {
            case '0' : yr[i] = 0;
                       break;
            case '1' : yr[i] = 1;
                       break;
            case '2' : yr[i] = 2;
                       break;
            case '3' : yr[i] = 3;
                       break;
            case '4' : yr[i] = 4;
                       break;
            case '5' : yr[i] = 5;
                       break;
            case '6' : yr[i] = 6;
                       break;
            case '7' : yr[i] = 7;
                       break;
            case '8' : yr[i] = 8;
                       break;
            case '9' : yr[i] = 9;
                       break;
        }
    }
    int z = x;
    int d = 0;
    int fy = 0;
    while(z!=0)
    {
        fy+=yr[d]*pow(10,z-1);
        z--;
        d++;
    }
    int r = 10;
    
    int h = fy, pw = 0;
    while(r>9)
    {
        pw+=1;
        int k = (int)pow(10, pw);
        r = fy/k;  
    }
    

    cout<<x<<"\n"<< fy<<"\n"<< pw<<"\n";
    return 0;
}