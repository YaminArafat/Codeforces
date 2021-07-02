#include <bits/stdc++.h>
using namespace std;
int arr[100005];
int flag[100005];
int main()
{
    int n,cnt=0,prev=0,mx=0,tmp=0,f=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        flag[arr[i]]++;
        cnt=flag[arr[i]];
        if(cnt==prev)
        {
            if(i+2<=n)
            {
                if(i+2>mx)
                {
                    mx=i+2;
                }
            }
            else
            {
                if(i+1>mx)
                {
                    mx=i+1;
                }
            }

        }
        else if(cnt>prev)
        {
            prev=cnt;
        }
        else
            tmp=i;
    }
    cout<<mx<<endl;
}
