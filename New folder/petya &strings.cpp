#include <iostream>
#include <cstdlib>
#include <string.h>
#include <cstdio>
using namespace std;
int main()
{
    int i,j,k,sum=0,mum=0;
    char str[101];
    char str1[101];
    scanf(" %[^\n]",str);
    //gets(str);

    for (i=0; i<strlen(str); i++)
    {
        //getchar();
        cin>>str1[i];
    }
    //str1[i]='\0';
    for (j=0; j<strlen(str); j++)
    {
        if (str[j]>='A' && str[j]<='Z')
        {
            str[j]=str[j]+32;
        }
        else
        {
            str[j]=str[j];
        }
        //str[j]='\0';

    }
    //cout<<str<<endl;
    for (k=0; k<strlen(str1); k++)
    {
        if (str1[k]>='A' && str1[k]<='Z')
        {
            str1[k]=str1[k]+32;
        }
        else
        {
            str1[k]=str1[k];
        }
    }
    for(j=0; j<strlen(str); j++)
    {
        //cout<<str[j];
        sum=sum+str[j];
        //cout<<sum<<endl;
    }
    str[j]='\0';
    //cout<<endl;

    for(k=0; k<strlen(str); k++)
    {
        // if (str[j]>str1[k])
        //{
        // cout<<str[j]<<" ";
        //sum++;
        //  cout<<sum<<endl;
        //}
        //else if (str[j]<str1[k])
        //{
        //  cout<<str1[k]<<" ";
        //mum++;
        //cout<<mum<<endl;
        //}

        //cout<<str1[k];
        mum=mum+str1[k];
        //cout<<mum<<endl;
    }
    //}
    str1[k]='\0';
    //cout<<sum<<endl<<mum<<endl;
    if (sum>mum)
    {
        cout<<"1"<<endl;
    }
    else if (sum==mum)
    {
        cout<<"0"<<endl;
    }
    else if (sum<mum)
    {
        cout<<"-1"<<endl;
    }
    return 0;
}
