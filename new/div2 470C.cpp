#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,melt=0;
    scanf("%d",&n);
    int arr_V[n];
    int arr_T[n];
    int arr_A[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr_V[i]);
    }
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr_T[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
            if(arr_T[i]>=arr_V[j])
            {
                melt+=arr_V[j];
                arr_V[j]=0;
            }
            else
            {
                melt+=arr_T[i];
                arr_V[j]=arr_V[j]-arr_T[i];
            }
        }
        arr_A[i]=melt;
        melt=0;
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",arr_A[i]);
    }
    return 0;
}

