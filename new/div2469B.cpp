#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int  n,m,sum_N=0,sum_M=0,count=0,temp=-1;
    scanf("%d %d",&n,&m);
    int arr_N[n];
    int arr_M[m];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr_N[i]);
    }
    for(int i=0; i<m; i++)
    {
        scanf("%d",&arr_M[i]);
    }
    int j=0;
    for(int i=0; i<n; i++)
    {
        sum_N+=arr_N[i];
        for(; j<m; j++)
        {
            if(sum_M<sum_N)
            {
                if(j!=temp)
                {
                    sum_M+=arr_M[j];
                }
                temp=j;
            }
            if(sum_M>sum_N)
            {
                break;
            }
            else if (sum_M==sum_N)
            {
                count++;
                sum_M=0;
                sum_N=0;
                j++;
                break;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
/*8 9
5 3 4 25 7 11 9 2
5 7 15 10 7 11 2 8 1*/
