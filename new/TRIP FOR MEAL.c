#include <stdio.h>
int main()
{
    int n,r_o,r_e,e_o,sum=0;
    scanf("%d",&n);
    scanf("%d",&r_o);
    scanf("%d",&r_e);
    scanf("%d",&e_o);
    if (n==1)
    {
        printf("0\n");
    }
    else
    {
        while(1)
        {
            if ((r_o<r_e)&&(r_o<e_o))
            {
                sum=sum+r_o;
                printf("%d\n",sum);
            }
            else if ((r_e<r_o)&&(r_e<e_o))
            {
                sum=sum+r_e;
                //printf("%d\n",sum);
            }
            else if ((e_o<r_o)&&(e_o<r_e))
            {
                sum=sum+e_o;
                //printf("%d\n",sum);
            }
        }
    }
    return 0;
}
