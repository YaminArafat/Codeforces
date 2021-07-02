#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(arr[0]==0)
        {
            if(!count)
            {
                if(arr[i]==0)
                {
                    count++;
                }
            }
            else
            {
                printf("NO\n");
                    return 0;
            }
            if(arr[i]==1)
            {
                count--;
            }
        }
    }
}
/*int i=0,z=0,o=0;
    if(arr[0]==0)
    {
A:
        while(arr[i]!=1)
        {
            z++;
            i++;
            if(i==9)
            {
                break;
            }
        }
        if(i<n-1)
        {
            while(arr[i]!=0)
            {
                o++;
                i++;
                if(i==9)
                {
                    break;
                }
            }
            if(i<n-1)
            {
                if(o%z==0)
                {
                    goto A;
                }
                else
                {
                    printf("NO\n");
                    return 0;
                }
            }
            else
            {
                if(o%z==0)
                {
                    printf("YES\n");
                    return 0;
                }
                else
                {
                    printf("NO\n");
                    return 0;
                }
            }
        }
        else
        {
            if(o%z==0)
            {
                printf("YES\n");
                return 0;
            }
            else
            {
                printf("NO\n");
                return 0;
            }
        }
    }
    else
    {
        /*while(arr[i]!=0)
        {
            o++;
            i++;
        }
    }*/
