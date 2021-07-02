#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int m,n;
    while (scanf("%d %d",&m,&n)==2)
    {
        if(!m && !n)
            return 0;
        int ans;
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
        printf("%d knights may be placed on a %d row %d column board.\n",ans,m,n);
    }
    return 0;
}

/*int dx[]={-2,-1,+1,+2,-2,-1,+1,+2};
int dy[]={-1,-2,-2,-1,+1,+2,+2,+1};
bool valid(int tx,int ty,int m,int n)
{
    if(tx>=0 && tx<m && ty>=0 && ty<n)
        return true;
    return false;
}*/
/*

for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if((i%2 && j%2)||(!(i%2) && !(j%2)))
                {
                    vis[i][j]=1;
                }
            }
        }
        int cnt=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(!vis[i][j])
                {
                    cnt++;
                }
            }
        }


for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                /*if(!vis[i][j])
                {
                    for(int k=0;k<8;k++)
                    {
                        int tx=i+dx[k];
                        int ty=j+dy[k];
                        if(valid(tx,ty,m,n)&&!vis[tx][ty])
                        {
                            //vis[i][j]=1;
                            vis[tx][ty]=1;
                        }
                    }
                }

            }
        }

*/
