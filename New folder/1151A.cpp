#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,mn=INT_MAX,sum=0,ans=INT_MAX;
    cin>>n;
    string s,giv="ACTG";
    cin>>s;
    for(int i=0;i<s.size()-3;i++)
    {
        //cout<<s[i]<<endl;
        for(int j=i;j<i+4;j++)
        {
            //if(s[j]<'Z' && s[j]>'A')
            {
                if(s[j]>giv[j-i])
                {
                    //cout<<s[j]<<" "<<giv[j-i]<<" ";
                    x=min(s[j]-giv[j-i],'Z'-s[j]+1+giv[j-i]-'A');
                    mn=min(mn,x);
                    //cout<<x<<" "<<mn<<endl;
                    sum+=(int)mn;
                    mn=INT_MAX;
                }
                else if(s[j]<giv[j-i])
                {
                    //cout<<s[j]<<" "<<giv[j-i]<<" ";
                    x=min(giv[j-i]-s[j],'Z'-giv[j-i]+1+s[j]-'A');
                    mn=min(mn,x);
                    //cout<<x<<" "<<mn<<endl;
                    sum+=(int)mn;
                    mn=INT_MAX;
                }
            }
            /*else
            {
                x=min(1+giv[j-i]-'A',s[j]-giv[j-i]);
            }
            else
            {
                x=min(1+giv[j-i]-'A',s[j]-giv[j-i]);
            }*/
            //cout<<mn<<" "<<sum<<endl;

        }
        //cout<<sum<<endl;
        ans=min(ans,sum);
        sum=0;
        mn=INT_MAX;
    }
    cout<<ans<<endl;
    return 0;
}
