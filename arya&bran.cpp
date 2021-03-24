#include<iostream>
#include<cstdio>
#include <cstdlib>
#include<string.h>
using namespace std;
int main()
{
    int n,k,i,j,sum=0,x;
    int array[n];
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    array[i]='\0';
    for (j=0;j<n;j++)
    {
        sum=sum+array[j];
    }
    cout<<sum<<endl;
    if (k%8 == 0)
    {
        x=k/8;
        if ((x>n || x==n) && (sum>k || sum == k))
        {
            cout<<x<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    /*else
    {
        while (k%8 !=0)
        {
            k=k-1;
        }
        x=(k/8)+1;
        if ((x>n || x==n) && (sum>k || sum == k))
        {
            cout<<x<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }*/
    /*else if (k<8)
    {
        if ((sum>k || sum==k) && (sum<9))
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }*/
    return 0;
}
