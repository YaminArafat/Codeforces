#include <bits/stdc++.h>
using namespace std;
long long matrx[100000000];
int main()
{
    long long n,i,j,temp;
    scanf("%lld",&n);
    long long arr[n];
    for (i=0; i<n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        matrx[arr[i]]++;
        for(j=2; j*j<=arr[i]; j++)
        {
            if(arr[i]%j==0)
            {
                matrx[j]++;
                if((j*j)!=arr[i])
                {
                    matrx[(arr[i]/j)]++;
                }
            }
        }
    }
    for(i=0;i<100000000;i++)
    {
        if(matrx[i]==n-1)
        {
            printf("%lld\n",i);
            return 0;
        }
    }
    return 0;
}
