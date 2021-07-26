#include <iostream>
#include <cstdlib>
#include <string.h>
#include <cstdio>
using namespace std;
int main()
{
    int tc,i,j,max=0,psngr,sum=0,mum=0,k=0;
    int str[10001];
    cin>>tc;
    for (i=0; i<tc*2; i++)
    {
        cin>>str[i];
    }
    str[i]='\0';
    for (j=1; j<=1; j++)
    {
        psngr=abs(str[j]-str[j+1]+str[j+2]);
        sum=sum+psngr;
    }
    for (j=4; j<tc*2; j=j+2)
    {
        psngr=abs(str[j]-str[j+1]);
        mum=mum+psngr;
        if (mum>max)
        {
            max=mum;
            //k=1;
            //break;
        }
    }
    //if (k == 1)
    //{
        if (sum<max)
        {
            cout<<max<<endl;
        }
        else
        {
            cout<<sum<<endl;
        }
    //}
    return 0;
}
