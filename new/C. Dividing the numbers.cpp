#include <bits/stdc++.h>
using namespace std;
bool flag[70000];
int main()
{
    vector <int>vec;
    int n,i,j,sum_a=0,sum_b=0,mn=1000000000,f=0,temp,temp2,ans1,ans2,temp3,ans;
    scanf("%d",&n);
    temp=(n*(n+1))/2;
    temp2=temp;
    for(i=1; i<=n; i++)
    {
        sum_a+=i;
        flag[i]=1;
        for(j=1; j<=n; j++)
        {
            if (i==j)
            {
                continue;
            }
            temp2=temp2-sum_a;

            if(abs(sum_a-temp2)<mn)
            {
                mn=abs(sum_a-temp2);
                if(vec.empty())
                {
                    //vec.push_back(i);
                    for(int k=1; k<=n; k++)
                    {
                        if(flag[k])
                        {
                            vec.push_back(k);
                            //flag[k]=0;
                        }
                    }
                }
                else
                {
                    vec.clear();
                    //vec.push_back(i);
                    for(int k=1; k<=n; k++)
                    {
                        if(flag[k])
                        {
                            vec.push_back(k);
                            //flag[k]=0;
                        }
                    }
                }
                //cout<<i<<" "<<j<<" "<<mn<<" "<<sum_a<<" "<<temp2<<endl;
            }
            sum_a+=j;
            flag[j]=1;
            temp2=temp;
        }
        sum_a=0;
    }
    //cout<<mn<<endl;
    for(i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    /*for (i=n; i>1; i--)
    {
        sum_a+=i;
        for(j=i-1; j>1; j--)
        {
            sum_b+=j;
        }
        if(abs(sum_a-sum_b)<mn)
        {
            mn=abs(sum_a-sum_b);
            temp2=i;
            sum_b=0;
        }
        else
        {
            break;
        }
    }
    ans1=mn;
    mn=1000000000;
    sum_a=0;
    sum_b=0;
    for(i=1; i<=n; i++)
    {
        sum_a+=i;
        if(f)
        {
            for(j=n; j>i; j--)
            {
                sum_b+=j;
            }
            f=0;
        }
        else
        {
            sum_b-=i;
        }
        if(abs(sum_a-sum_b)<mn)
        {
            mn=abs(sum_a-sum_b);
            temp=mn;
            temp3=i;
        }
        else
        {
            break;
        }
    }
    ans2=mn;
    ans=min(ans1,ans2);
    if(ans1==ans)
    {
        temp=temp2;
        temp2=n-temp2+2;
        printf("%d\n%d %d ",ans,temp2,1);
        for(i=temp; i<=n; i++)
        {
            printf("%d ",i);
        }
    }
    else
    {
        printf("%d\n%d ",ans,temp3);
        for(i=1;i<=temp3;i++)
        {
            //printf("%d ",i);
        }
    }*/
}
