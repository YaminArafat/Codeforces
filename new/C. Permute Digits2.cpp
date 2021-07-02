#include <bits/stdc++.h>
using namespace std;
bool flag[20];
int arr[20];
int tmp[20];
int main()
{
    long long a,b,i=0,tempb,temp,f=1,w;
    char sa[20],sb[20];
    scanf("%lld %lld",&a,&b);
    sprintf(sb,"%lld",b);
    sprintf(sa,"%lld",a);
    if(strlen(sb)>strlen(sa))
    {
        string stra=sa;
        sort(stra.begin(),stra.end(),greater<long long>());
        cout<<stra<<endl;
        return 0;
    }
    else
    {
        //tempb=sb[0]-'0';
        int zero=0;
        string stra=sa;
        //cout<<stra<<endl;
        for(int j=0; j<stra.size()-1; j++)
        {
            if(stra[j]-'0'==0)
            {
                zero++;
            }
            if(!flag[stra[j]-'0'])
            {
                //cout<<stra[j]-'0'<<endl;
                int c=1;
                if(stra[j]-'0'>=sb[0]-'0')
                {
                    //cout<<stra[j]<<" "<<tempb<<endl;
                    f=0;
                }
                for(int k=j+1; k<stra.size(); k++)
                {
                    if(stra[k]-'0'>=sb[0]-'0')
                    {
                        //cout<<stra[j]<<" "<<tempb<<endl;
                        f=0;
                    }
                    if(stra[j]-'0'==stra[k]-'0')
                    {
                        c++;
                    }
                    //flag[stra[k]-'0']=1;
                }
                arr[stra[j]-'0']=c;
                //vec.push_back(p);
                flag[stra[j]-'0']=1;
            }
        }
        if(!flag[stra[stra.size()-1]-'0'])
        {
            arr[stra[stra.size()-1]-'0']=1;
            flag[stra[stra.size()-1]-'0']=1;
        }
        /*for(int j=0;j<stra.size();j++)
        {
            cout<<stra[j]-'0'<<" "<<flag[stra[j]-'0']<<endl;
        }
        return 0;*/
        if(f)
        {
            sort(stra.begin(),stra.end(),greater<long long>());
            cout<<stra<<endl;
        }
        else
        {
            if(zero)
            {
                for(int j=0; j<stra.size()-1; j++)
                {
                    if(stra[j]-'0'!=0)
                    {
                        for(int k=j+1; k<stra.size(); k++)
                        {
                            if(stra[j]-'0'>stra[k]-'0' && stra[k]-'0'>0)
                            {
                                swap(stra[j],stra[k]);
                            }
                        }
                    }
                }
            }
            else
            {
                sort(stra.begin(),stra.end());
            }
            long long fact=1;
            long long num=0;
            for(int j=stra.size()-1; j>=0; j--)
            {
                num+=(stra[j]-'0')*fact;
                //cout<<num<<" "<<fact<<" "<<stra[j]-'0'<<endl;
                fact*=10;
            }
            //cout<<num<<endl;
            //return 0;
            for(long long j=num; j<=b; j+=9)
            {
                temp=j;
                int c=0;
                //cout<<j<<endl;
                for(int i=0; i<10; i++)
                {
                    tmp[i]=arr[i];
                    //cout<<i<<" "<<tmp[i]<<endl;
                }
                while(temp)
                {

                    if(flag[temp%10] && tmp[temp%10])
                    {
                        c++;
                        //cout<<temp<<endl;
                        //cout<<flag[temp%10]<<" "<<arr[temp%10]<<" "<<temp<<endl;
                        tmp[temp%10]--;
                    }
                    else
                    {
                        break;
                    }
                    //cout<<temp%10<<" "<<arr[temp%10]<<endl;
                    temp/=10;
                }
                //cout<<c<<endl;
                if(stra.size()==c)
                {
                    //printf("%lld\n",j);
                    //break;
                    if(j<=b)
                        w=j;
                }
            }
            printf("%lld\n",w);
        }
    }
    return 0;
}
/*long long tempa=a;
    while(temp)
    {
        dig[i++]=temp%10;
        temp/=10;
    }*/
