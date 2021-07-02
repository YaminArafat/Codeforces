#include <bits/stdc++.h>
#define maxx 1000000005
using namespace  std;
int arr[maxx/5000];
vector<int>matrx[maxx/500];
int dx[]= {+1,0,-1,0};
int dy[]= {0,+1,0,-1};
void func(int x,int dim,int n)
{
    int i,j,count=1,m=1,tx,ty,f=1;
    if(x>dim && dim%x)
    {
        i=(dim/x)+1;
        j=dim%x;
    }
    else if (x>dim && dim%x==0)
    {
        i=dim/x;
        j=dim;
    }
    else
    {
        i=1;
        j=x;
    }
    //cout<<i<<" "<<j<<endl;
    while (i>=1 && i<=dim && j>=1 && j<=dim)
    {
        //cout<<i<<" "<<j<<endl;
        for(int k=0; k<4; k++)
        {
            tx=i+dx[k];
            ty=j+dy[k];
            //cout<<tx<<" "<<ty<<" "<<matrx[tx][ty]<<endl;
            if(tx>=1 && tx<=dim && ty>=1 && ty<=dim && arr[m]==matrx[tx][ty])
            {
                count++;
                m++;
                f=0;
                //i=tx;
                //j=ty;
                //cout<<tx<<" "<<ty<<" "<<arr[m]<<endl;
                break;
            }
        }
        i=tx;
        j=ty;
        if(m==n || f)
        {
            break;
        }
        f=1;
    }
    //cout<<count<<endl;
    if(count==n && !f)
    {
        printf("YES\n%d %d\n",dim,dim);
    }
    else if (n==1)
    {
        printf("YES\n%d %d\n",dim,dim);
    }
    else
    {
        printf("NO\n");
    }
}
int main()
{
    int n,i,j,mx=0,dim,mn=maxx;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(i>0)
        {
            if(arr[i]>arr[i-1])
            {
                dim=arr[i]%arr[i-1];
                if(arr[i-1]==1)
                {
                    dim=arr[i]-arr[i-1];
                }
            }
            if(dim>mx)
            {
                mx=dim;
            }
        }
    }
    dim=mx;
    //cout<<dim<<endl;
    for(i=1; i<=dim; i++)
    {
        for(j=0; j<=dim; j++)
        {
            int tmp=dim*(i-1)+j;
            matrx[i].push_back(tmp);
        }
    }
    /*for(i=1; i<=dim; i++)
    {
        for(j=1; j<=dim; j++)
        {
            //cout<<matrx[i][j]<<" ";
        }
        //cout<<endl;
    }*/
    func(arr[0],dim,n);
    return 0;
}
