#include <stdio.h>
int main()
{
    int m,n,x,y,s,q,c,t,u,l,r,sum;

    scanf("%d %d", &m, &n);


    if (m>=1 && n>=1 && m<=16 && n<=16)
    {
        if ((m%2)==0 && (n%2)==0)
        {
            if (m>n)
            {
                x=m/2;
                y=x*n;
                printf("%d",y);
            }
            else
            {
                x=n/2;
                y=x*m;
                printf("%d",y);
            }
        }
        if ((m%2)==0 && (n%2)!=0)
        {
            if (m>n)
            {
                s=m/2;
                q=s*n;
                printf("%d",q);
            }
            else
            {
                s=m/2;
                q=s*n;
                printf("%d",q);
            }
        }
        if ((m%2)!=0 && (n%2)==0)
        {
            if (m<n)
            {
                c=n/2;
                t=c*m;
                printf("%d",t);
            }
            else
            {
                c=n/2;
                t=c*m;
                printf("%d",t);
            }

        }
        if ((m%2)!=0 && (n%2)!=0)
        {
            u=m/2;
            l=u*n;
            r=n/2;
            sum=l+r;
            printf("%d",sum);
        }
    }
    return 0;
}
