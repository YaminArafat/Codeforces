#include <bits/stdc++.h>
using namespace std;
int arr[500];
int main()
{
    int n,tmp=0,ans=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            arr[s[i]]=1;
            tmp=1;
            i++;
            while(s[i]>='a' && s[i]<='z')
            {
                if(!arr[s[i]])
                {
                    arr[s[i]]=1;
                    tmp++;
                }
                i++;
            }
            memset(arr,0,sizeof(arr));
        }
        else
            continue;
        ans=max(ans,tmp);
    }
    cout<<ans<<endl;
    return 0;
}
