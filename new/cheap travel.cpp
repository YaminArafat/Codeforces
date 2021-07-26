#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,temp,temp2=0,temp3,k=0,i,min=1000000;
    cin>>n>>m>>a>>b;
    if(n>=m)
    {
        temp=n/m;
        temp3=n%m;
        int arr[1000];
        for(i=0;; i++)
        {
            k++;
            if(n%m)
            {
                arr[i]=((temp)*b)+(temp3)*a;
                temp--;
                if(temp3==n)
                {
                    break;
                }
                temp3+=m;
            }
            else
            {
                arr[i]=temp*b+temp2*a;
                temp--;
                if(temp2==n)
                {
                    break;
                }
                temp2+=m;
            }
        }
        arr[k]=((n/m)+1)*b;
        for(i=0; i<=k; i++)
        {
            if(arr[i]<min)
            {
                min=arr[i];
            }
        }
    }
    else
    {
        temp=n*a;
        temp3=b;
        min=temp>=temp3?temp3:temp;
    }
    cout<<min<<endl;
    return 0;
}
