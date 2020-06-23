#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    long int arr[n];
    int f = 0;

    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    for(int i=1;i<n-1;i++)
    {
        if(arr[i-1]<arr[i])
        {
            //cout<<"grt\n";
            if(arr[i+1]>arr[i] || arr[i+1]<arr[i-1])
            {
                for(int j=i+1;j<n;j++)
                {
                    if(arr[j]>arr[i] || arr[j]<arr[i-1])
                    {
                        f = 1;
                        continue;
                    }
                    else
                    {
                        cout<<"yes\n";
                        exit(0);
                    }
                }
            }

            else if(arr[i+1]<arr[i] && arr[i+1]>arr[i-1])
            {
                for(int j=i+1;j<n;j++)
                {
                    if(arr[j]<arr[i] && arr[j]>arr[i-1])
                    {
                        //cout<<"sdfdhfuhf\n";
                        f=1;
                        continue;
                    }
                    else
                    {
                        cout<<"yes\n";
                        exit(0);
                    }
                }
            }
        }
        else if(arr[i-1]>arr[i])
        {
            //cout<<"small\n";
            if(arr[i+1]>arr[i] && arr[i+1]<arr[i-1])
            {
                for(int j=i+1;j<n;j++)
                {
                    if(arr[j]>arr[i] && arr[j]<arr[i-1])
                    {
                        f = 1;
                        continue;
                    }
                    else
                    {
                        cout<<"yes\n";
                        exit(0);
                    }
                }
            }

            else if(arr[i+1]<arr[i] || arr[i+1]>arr[i-1])
            {
                for(int j=i+1;j<n;j++)
                {
                    if(arr[j]>arr[i-1] || arr[j]<arr[i])
                    {
                        f=1;
                        continue;
                    }
                    else
                    {
                        cout<<"yes\n";
                        exit(0);
                    }
                }
            }
        }
        else
        {
            while(arr[i]==arr[i-1])
            {
                i++;
                continue;
            }
        }
    }
    cout<<"no\n";
}