#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pi pair<int,int>
#define IOS ios_base::sync_with_stdio(false); cin.tie(0)

const int maxn=3e5+10;
const int INF=1e18;


int32_t main()
{
    IOS;
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,i,j,ans;
        cin>>n;
        int arr[n+1];
        set<int> s;
        for(int i=1; i<=n;i++)
        {
            cin>>arr[i];
            s.insert(arr[i]);
        }
        if(n==1) {
            ans=arr[1]*arr[1];
        }
        else{
            ///if there is some non-divisors
            sort(arr+1,arr+n+1);
            ans=arr[1]*arr[n];
            for(int i=2; i<=n;i++)
            {
                if(arr[i]*arr[n-i+1]!=ans){
                    ans=-1;
                    break;
                }
            }
        }

        ///check whether any divisor is missing
        if(ans!=-1)
        {
            int x=sqrt(ans);
            for(int i=2; i<=x; i++)
            {
                if(ans%i!=0) continue;
                if(s.find(i)==s.end()){
                    ans=-1;
                    break;
                }
                if(s.find(ans/i)==s.end()){
                    ans=-1;
                    break;
                }
            }
        }

        cout<<ans<<endl;

    }

    return 0;
}
