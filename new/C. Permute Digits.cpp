#include <bits/stdc++.h>
using namespace std;
bool flag[20];
bool f2[20];
long long used[20],number[20],dig[20],fact,temp2,f=0,k=0;
vector<long long>vec;
void permute(long long at_,long long n)
{
    if(at_== n+1)
    {
        long long fact_=fact,sum=0;;
        for(long long i=1; i<=n; i++)
        {
            //printf("%lld",number[i]);
            sum+=number[i]*fact_;
            fact_/=10;
        }
        //printf("\n");
        vec.push_back(sum);
        return;
    }
    //if(f--)
    {
    for(long long i=1; i<=f+1; i++)
    {
        //if(f>0&&f--)
        {
            //continue;
            //cout<<dig[i-1]<<" ";
            if(!used[i])
            {
                used[i]=1;
                number[at_]=dig[i-1];
                //cout<<dig[i-1];
                //if( f)//&& !flag[dig[i-1]])
                {
                    //cout<<dig[i-1]<<" ";


                    permute(at_+1,n);
                }
                used[i]=0;
            }
        }
    }
    }
}
int main()
{
    long long a,b,i=0;
    char s[20];
    scanf("%lld %lld",&a,&b);
    sprintf(s,"%d",b);
    temp2=s[0]-'0';
    long long temp=a;
    while(temp)
    {
        dig[i++]=temp%10;
        temp/=10;
    }
    if(strlen(s)>i)
    {
        sort(dig,dig+i,greater<long long>());
        for(int j=0; j<i; j++)
        {
            printf("%lld",dig[j]);
        }
        printf("\n");
        return 0;
    }
    else
    {
        for(int j=0; j<i-1; j++)
        {
            for(int k=j+1; k<i; k++)
            {
                if(dig[k]==temp2)
                {
                    int temp3=dig[k];
                    dig[k]=dig[j];
                    dig[j]=temp3;
                    //f=1;
                    break;
                }
                else if (dig[k]<temp2 && dig[k]>dig[j])
                {
                    int temp3=dig[k];
                    dig[k]=dig[j];
                    dig[j]=temp3;
                    //break;
                }
                else if(dig[j]>temp2 && dig[j]>dig[k])
                {
                    int temp3=dig[j];
                    dig[j]=dig[k];
                    dig[k]=temp3;
                }
            }
        }
        for(int j=0; j<i; j++)
        {
            cout<<dig[j];
            /*if(dig[j]<=temp2 && !f2[dig[j]])
            {
                flag[j]=1;
                f2[dig[j]]=1;
                f++;
            }*/
            //cout<<dig[j]<<" "<<flag[j]<<" ";
        }
        return 0;
        //cout<<f<<endl;
        fact=powl(10,i-1);
        permute(1,i);
        sort(vec.begin(),vec.end());
        for(i=vec.size()-1; i>=0; i--)
        {
            if(vec[i]>b)
            {
                continue;
            }
            else
            {
                printf("%lld\n",vec[i]);
                break;
            }
        }
        return 0;
    }
}
//23498743322
/*cout<<dig[0]<<" "<<dig[i-1]<<endl;
//cout<<temp2<<endl;
/*if(b>=10 && b<100)
{
        temp=b/10;
}
else if(b>=100 && b<1000)
{
    temp=b/100;
}
else if(b>=1000 && b<10000)
{
    temp=b/1000;
}
else if(b>=10000 && b<100000)
{
    temp=b/10000;
}
else if(b>=100000 && b<1000000)
{
    temp=b/100000;
}
else if(b>=1000000 && b<10000000)
{
    temp=b/1000000;
}
else if(b>=1000000 && b<10000000)
{
    temp=b/1000000;
}*/
