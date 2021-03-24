#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,h,m,i,j,f=0,k=-1;
    scanf("%d",&x);
    scanf("%d %d",&h,&m);
    j=m;
    if((h==7||h==17)||(m==7||m==17||m==27||m==37||m==47||m==57))
    {
        printf("0\n");
    }
    else
    {
        if(x!=60)
        {
            for(i=h;; i--)
            {
                for(; j>=0; j-=x)
                {
                    k++;
                    if(j%10==7)
                    {
                        printf("%d\n",k);
                        f=1;
                        break;
                    }
                    if(i%10==7)
                    {
                        printf("%d\n",k);
                        f=1;
                        break;
                    }
                }
                if (j<0)
                {
                    j=60+j;
                }
                if(f==1)
                {
                    break;
                }
                if(i%10==7)
                {
                    printf("%d\n",k);
                    break;
                }
                if(i==0)
                {
                    i=24;
                }
            }
        }
        else if (x==60)
        {
            if (h>7)
            {
                printf("%d\n",h>17?(h-17):(h-7));
            }
            else
            {
                printf("%d\n",(24+h-17));
            }
        }
    }
    return 0;
}
