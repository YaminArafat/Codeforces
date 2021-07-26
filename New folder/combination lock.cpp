#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <strings.h>
using namespace std;
int main()
{
    int n,i,j,k,sum=0;
    char str[1001];
    char str1[1001];
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>str[i];
    }
    str[i]='\0';
    for (i=0; i<n; i++)
    {
        cin>>str1[i];
    }
    str1[i]='\0';
    for (j=0; j<n; j++)
    {

        if (str[j]>str1[j])
        {
            if (str[j]-str1[j]>5)
            {
                k=10-str[j]+str1[j];
            }
            else
            {
                k=str[j]-str1[j];
            }
            sum=sum+k;
        }
        else if (str[j]<str1[j])
        {
            if (str1[j]-str[j]>5)
            {
                k=10-str1[j]+str[j];
            }
            else
            {
                k=str1[j]-str[j];
            }
            sum=sum+k;
        }
    }
    cout<<sum<<endl;
    return 0;
}
