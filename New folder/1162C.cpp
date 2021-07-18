#include <bits/stdc++.h>
using namespace std;
int flag[100005];
int main()
{
    int n,k,ans;
    cin>>n>>k;
    int arr[n+5];
    //int chk[n+5][n+5];
    //memset(chk,0,sizeof(chk));
    for(int i=0;i<k;i++)
    {
        cin>>arr[i];
        flag[arr[i]]=1;
    }
    //chk[arr[k-1]][arr[k-1]]=1;
    //chk[arr[0]][arr[k-1]]=1;
    ans=(n*3)-2;
    ans-=k;
    if(abs(arr[0]-arr[k-1])==1)
        ans--;
    for(int i=0;i<k-1;i++)
    {
        if(abs(arr[i]-arr[i+1])==1 && ans>0)
        {
            ans--;
        }
        //else if (arr[i]==arr[i+1])
        //chk[arr[i]][arr[i+1]]=1;
        //chk[arr[i+1]][arr[i]]=1;
        //chk[arr[i]][arr[i]]=1;
    }
    /*for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j || abs(i-j)==1)
            {
                if(chk[i][j]==1)
                    ans--;
            }
        }
    }*/
    cout<<ans<<endl;
    return 0;
}

