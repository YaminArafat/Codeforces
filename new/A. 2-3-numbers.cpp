#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,u,f=0,x=0,count=0,y=0;
    scanf("%d %d",&l,&u);
    for(int i=l;i<=u;i++)
    {
        int temp=i;
        while(1)
        {
            if(temp%2==0)
            {
                temp/=2;
                f=1;
            }
            else if(temp%3==0)
            {
                temp/=3;
                x=1;
            }
            else
            {
                break;
            }
            if(temp==1)
            {
                y=1;
                break;
            }
        }
        if((f||x)&&y)
        {
            count++;
            cout<<i<<endl;
        }
        f=0;
        x=0;
        y=0;
    }
    printf("%d\n",count);
    return 0;
}
/*



        int temp=i;
        if((temp%2==0))
        {
            count++;
            temp=temp/2;
        }
        if((temp%3==0))
        {
            count++;
            temp/=3;
        }
        if ((temp%6==0))
        {
            count++;
            temp=temp/6;
        }
        */
