#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i=1 , arr[10002] , temp=19,count=1,m=10;
    for(i=19;count<=10000;i+=9)

    {
        temp = i;
        int sum=0;
        while(temp)
        {
           sum+=temp%10;
           temp/=10;
        }
        if(sum==10)arr[count++]=i;


    }
    int k;
    while(1==scanf("%d",&k))
    {
        cout<<arr[k]<<endl;
    }
}
