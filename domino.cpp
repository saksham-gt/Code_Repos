    #include <bits/stdc++.h>
    using namespace std;
     
    int upperhalf(int arr[][2], int n)
    {
        int uh=0;
        for(int i=0;i<n;i++)
            uh+=arr[i][0];
        return uh;
    }

    int lowerhalf(int arr[][2], int n)
    {
        int lh = 0;
        for(int i=0;i<n;i++)
            lh+=arr[i][1];
        return lh;
    }
     
    int main()
    {
        int n, cnt=0;
        cin>>n;
    
        int arr[n][2];
        int add=0, uh=0, lh=0;
    
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<2;j++)
                cin>>arr[i][j];
        }
        
        uh = upperhalf(arr, n);
        lh = lowerhalf(arr, n);
        add = uh+lh;
    
        if(add%2==1)
            cout<<"-1\n";
        
        else
        {
            if(uh%2==0)
                cout<<"0\n";
            else
            {
                int i;
                if(n==1)
                {
                    if(uh%2==1)
                        cout<<"-1\n";
                    else
                        cout<<"0\n";
                    exit(0);
                }
                else
                {
                    for(int i=0;i<n;i++)
                    {
                        if((arr[i][0]%2==1 && arr[i][1]%2==0) || (arr[i][0]%2==0 && arr[i][1]%2==1))
                        {
                            cout<<"1\n";
                            exit(0);
                        }
                    }
                }
                //cout<<"zmfbdjvhhd\n";
                cout<<"-1\n";
                exit(0);
            }
        }
    }