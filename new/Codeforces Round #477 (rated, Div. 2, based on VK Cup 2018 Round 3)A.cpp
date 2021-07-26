#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,sum=0,mn=1000000000,sum2=0;
    scanf("%d %d %d",&n,&a,&b);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int x=(a*arr[0])/sum;
    if(x>=b && x<=a)
    {
        printf("0\n");
        return 0;
    }
    //sort(arr,arr+n,greater<int>());
    for(int i=1; i<n; i++)
    {
        /*int x=(a*arr[0])/(sum-arr[i]);
        if(x>=b && x<=a)
        {
            mn=1;
        }*/
        //sum2+=arr[i];
        int y;
        for(int j=i; j<n; j++)
        {
            sum2+=arr[j];
            y=(a*arr[i-1])/(sum-sum2);
            if(y>=b &&y <=a)
            {
                mn=min(mn,j-i+1);
            }
        }
        sum2=0;
    }
    printf("%d\n",mn);
    return 0;
}
/*int x=(a/(sum-arr[i]))*arr[i];
        if(x>=b)
        {
            printf("%d\n",n-1);
            return 0;
        }*/
/*cout<<i<<endl;
        int x=(a*arr[0])/(sum-arr[i]);
        if(x>=b && x<=a)
        {
            mn=1;
            //break;
        }
        sum2+=arr[i];
        for(int j=i+1; j<n; j++)
        {
            int y=(a*arr[0])/(sum-sum2);
            if(y>=b && y<=a)
            {
                mn=min(mn,j-i);
            }
            sum2+=arr[j];
        }
        int y=(a*arr[0])/(sum-sum2);
        cout<<y<<endl;
        if(y>=b && y<=a)
        {
            mn=min(mn,n-i-1);
        }
        //cout<<sum2<<endl;
        sum2=0;*/
/*//sort(arr,arr+n,greater<int>());
    for(int i=1; i<n; i++)
    {
        /*int x=(a*arr[0])/(sum-arr[i]);
        if(x>=b && x<=a)
        {
            mn=1;
        }*/
/*sum2+=arr[i];
int y;
for(int j=i+1; j<n; j++)
{
    y=(a*arr[0])/(sum-sum2);
    if(y>=b &&y <=a)
    {
        mn=min(mn,j-i+1);
    }
    sum2+=arr[j];
}
y=(a*arr[0])/(sum-sum2);
if(y>=b &&y <=a)
{
    mn=min(mn,n-i);
}
sum2=0;
}*/
