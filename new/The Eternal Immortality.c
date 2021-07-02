#include <stdio.h>
int main()
{
    long long int a,b,i,x,y,ans=1;
    scanf("%lld %lld",&a,&b);
    //cout<<a<<b<<endl;
    /*if ((a>20))
    {
        x=a%10;
    }
    else
    {
        x=a;
    }
    if ((b>20))
    {
        y=b%10;
    }
    else
    {
        y=b;
    }
    //cout<<x<<y<<endl;
    if (x==0 && y==0)
    {
        cout<<"0"<<endl;
    }
    else if (a==b)
    {
        cout<<"1"<<endl;
    }
    else if (x>y)
    {
        cout<<"0"<<endl;
    }
    /* else if (x>y)
    {
        cout<<"0"<<endl;
    }*/
    // else
    // {
    //if ((b-a)<5)
    //{
    for (i=b; i>a ; i--)
    {
        ans=(ans*(i%10))%10;
        //printf("%d\n",ans);
        if (ans==0)
        {
            break;
        }
    }
    printf("%d\n",ans);
    /*}
    else
    {
        printf("0\n");
    }*/
    //  }
    return 0;
}
