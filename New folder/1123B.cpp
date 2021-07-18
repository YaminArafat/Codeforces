#include <bits/stdc++.h>
using namespace std;
int vis[200],chk[200][200],prime[220];
int main()
{
    prime[0]=1;
    prime[1]=1;
    for(int i=4; i<=150; i+=2)
    {
        prime[i]=1;
    }
    for(int i=3; i*i<=150; i+=2)
    {
        if(!prime[i])
        {
            //cout<<i<<endl;
            for(int j=i*i; j<=150; j+=2*i)
            {
                prime[j]=1;
                //cout<<1<<" "<<j<<endl;
            }
        }
    }
    /*for(int i=0; i<=150; i++)
    {
        if(!prime[i])
            cout<<i<<endl;
    }*/
    int n;
    cin>>n;
    int arr[n+10],sum=0,mn;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    mn=sum;
    //cout<<sum<<endl;
    sort(arr,arr+n);
    //cout<<endl<<endl<<endl;
    /*for(int i=0; i<n-1; i++)
    {
        cout<<arr[i]<<" ";
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]!=arr[j])
            {
                i=j-1;
                break;
            }
        }
    }*/
    //cout<<endl<<endl<<endl;
    int tmp=1000000;
    for(int i=0; i<n-1; i++)
    {
        if(!vis[arr[i]])
        {
            for(int j=i+1; j<n; j++)
            {
                if(prime[arr[j]] && arr[i]+arr[i]!=arr[j] && arr[i]!=arr[j] && !chk[arr[i]][arr[j]])
                {
                    //cout<<arr[i]<<" "<<arr[j]<<endl;
                    tmp=1000000;
                    for(int k=2; k*k<=arr[j]; k++)
                    {
                        if(arr[j]%k==0)
                        {
                            tmp=min((arr[i]*(arr[j]/k))+k,min(tmp,(arr[i]*k)+(arr[j]/k)));
                            //tmp=min(tmp,(arr[i]*k)+(arr[j]/k));
                        }
                    }
                    mn=min(mn,sum-(arr[j]+arr[i])+tmp);
                    //cout<<mn<<" "<<sum<<" "<<tmp<<" "<<sum-(arr[j]+arr[i])+tmp<<endl;
                    chk[arr[i]][arr[j]]=1;
                }
            }
            vis[arr[i]]=1;
        }
    }
    cout<<mn<<endl;
    return 0;
}
/*
184
81 32 32 64 17 64 17 32 16 2 32 9 9 17 17 49 8 2 16 9 2 4 27 27 17 8 17 2 32 17 8 2 32 8 17 9 29 8 17 8 16 2 9 8 8 32 13 9 64 8 27 2 32 27 16 8 8 9 32 2 81 16 16 2 4 81 64 49 17 2 2 17 32 9 2 17 17 8 16 64 13 8 64 2 3 9 64 32 17 49 31 13 2 8 27 16 16 32 32 2 49 16 81 32 27 9 17 32 27 32 17 4 4 17 32 9 32 8 2 4 27 16 4 7 32 29 9 8 8 27 32 31 32 3 2 8 17 64 2 5 8 2 17 81 27 9 64 3 9 2 49 49 25 4 16 32 17 64 16 3 8 8 32 2 9 2 32 27 27 9 4 32 2 8 64 13 64 29 8 64 13 2 27 2
*/
