#include <stdio.h>
int main()
{
    int x1,y1,x2,y2,dif,midX,midY;
    //while (1)
    //{
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    if (x1 == x2)
    {
        dif=abs(y1-y2);
        printf("%d %d %d %d\n",x1+dif,y1,x1+dif,y2);
    }
    else if (y1 == y2)
    {
        dif=abs(x1-x2);
        printf("%d %d %d %d\n",x1,y1+dif,x2,y1+dif);
    }
    else if (x1 != x2 && y1 != y2)
    {
        /*midX=(x1+x2)/2;
        midY=(y1+y2)/2;*/
        if (abs(x1-x2) == abs(y1-y2))
        {
            //if (abs(x1-y1) == abs(x2-y2))
            //{
            //if ((abs(x2) > abs(x1)))
            //{
            //dif=abs(x1-x2);
            printf("%d %d %d %d\n",x1,y2,x2,y1);
            //}
            /*else
            {
                dif=abs(x1-x2);
                printf("%d %d %d %d\n",x1,y1dif,x2,y2+dif);
            }*/
            //}
            /*else if (abs(x1-y1) != abs(x2-y2))
            {
                //if (abs(y2) > abs(y1))
                //{
                    //dif=abs(y1-y2);
                    printf("%d %d %d %d\n",x1,y2,x2,y1);
                //}
                /*else
                {
                    dif=abs(y1-y2);
                    printf("%d %d %d %d\n",x1,y1-dif,x2,y2+dif);
                }*/
            //}
        }
        else
        {
            printf("-1\n");
        }
    }
    else
    {
        printf("-1\n");
    }
    //}
    return 0;
}
