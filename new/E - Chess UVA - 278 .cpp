#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char ch;
        int m,n,ans;
        cin>>ch;
        scanf("%d %d",&m,&n);
        if(ch=='k')
        {
            if((m==2 && n==3)||(m==3 && n==2))
                ans=4;
            else if((m<3&&n<=3)||(m<=3&&n<3)||(m<3&&n<3))
                ans=n*m;
            else if(m==1||n==1)
                ans=n*m;
            else if ((m==2&&n!=2)||(m!=2&&n==2))
            {
                ans=max(n,m);
                if(ans%2)
                    ans--;
                if((n*m)%8)
                {
                    ans+=2;
                }
            }
            else if(n%2==0)
            {
                ans=(n/2)*m;
            }
            else
            {
                if(m%2==0)
                {
                    ans=(m/2)*n;
                }
                else
                {
                    ans=((n*m)+1)/2;
                }
            }
        }
        else if(ch=='r'||ch=='Q')
        {
            ans=min(m,n);
        }
        else if(ch=='K')
        {
            if(n%2==0)
            {
                ans=(n/2)*m;
            }
            else
            {
                if(m%2==0)
                {
                    ans=(m/2)*n;
                }
                else
                {
                    ans=((n*m)+1)/2;
                }
            }
            int x=((n/2)*(m/2));
            ans-=x;
        }
        printf("%d\n",ans);
    }
    return 0;
}
