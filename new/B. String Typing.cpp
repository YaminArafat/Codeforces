#include <bits/stdc++.h>
using namespace  std;
int main()
{
    int n,i=0,j,count=0,ans,tmp=0,k,x=0,mx=0,temp=0,y=0,f=1;
    string s;
    scanf("%d",&n);
    ans=n;
    cin>>s;
    while(i<s.size()/2)
    {
        for(j=i+1; j<=2*i+1; j++)
        {
            if(s[j-i-1]!=s[j])
            {
                /*if(f)
                {
                    temp=j;
                    f=0;
                }*/
                count++;
                //j++;
            }
        }
        //cout<<count<<" "<<j-temp<<endl;
        if(!count)
        {
            //if(count>mx)
            //{
            ans=min(n-i,ans);
            //y=j-1;
            //mx=count;
            //ans=mx+tmp-0+s.size()-y;
            //break;
            //cout<<tmp<<" "<<j<<endl;
            //}
        }
        i++;
        //f=1;
        count=0;
    }
    //cout<<mx<<endl;
    //cout<<min(n-tmp+1,n)<<endl;
    cout<<ans<<endl;
    return 0;
}
/*for(i=0; i<s.size()-1; i++)
    {
        for(j=i+1; j<s.size(); j++)
        {
            if(s[i]==s[j])
            {
                k=j;
                while (s[i]==s[k])
                {
                    tmp=j;
                    k++;
                }
                break;
            }
        }
        int dif=tmp-i;
        for(k=tmp,j=i; k<s.size()&& j<tmp; k++,j++)
        {
            if(s[j]==s[k])
            {
                count++;
            }
        }
        if(count==dif)
        {
            if(count>mx)
            {
                temp=i;
                y=k-1;
                mx=count;
                cout<<count<<endl;
            }
        }
    }*/
