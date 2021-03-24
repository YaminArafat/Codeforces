#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,temp,f=1,c=0,w=1,p=0;
    char sa[20],sb[20];
    scanf("%lld %lld",&a,&b);
    if(a==b)
    {
        printf("%lld\n",a);
    }
    else
    {
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
            string stra=sa,strb=sb;
            if(strlen(sb)<strlen(sa))
            {
                int x=strlen(sa)-strlen(sb);
                sort(stra.begin(),stra.end());
                stra.erase(stra.begin(),stra.begin()+x);
                while(x--)
                {
                    printf("0");
                }
            }
            else
            {
                string tempa=stra;
                string tempb=strb;
                sort(tempa.begin(),tempa.end());
                sort(tempb.begin(),tempb.end());
                if(!strcmp(tempa.c_str(),tempb.c_str()))
                {
                    cout<<strb<<endl;
                    return 0;
                }
            }
            for(int j=0; j<stra.size(); j++)
            {
                if(stra[j]-'0'>=sb[0]-'0')
                {
                    f=0;
                }
                if(stra[j]-'0'==sb[0]-'0')
                {
                    w=0;
                }
            }
            sort(stra.begin(),stra.end(),greater<long long>());
            if(w && !f)
            {
                for(int j=0; j<stra.size(); j++)
                {
                    if(stra[j]-'0'<sb[0]-'0')
                    {
                        swap(stra[0],stra[j]);
                        break;
                    }
                }
                sort(stra.begin()+1,stra.end(),greater<long long>());
                cout<<stra<<endl;
            }
            else if(f)
            {
                cout<<stra<<endl;
            }
            else
            {
                for(int j=0; j<strb.size(); j++)
                {
                    if(!c)
                    {
                        f=0;
                        for(int k=j; k<stra.size(); k++)
                        {
                            if(strb[j]-'0'==stra[k]-'0' && !c)
                            {
                                swap(stra[j],stra[k]);
                                f=1;
                                break;
                            }
                        }
                    }
                    if(!f)
                    {
                        if(c)
                        {
                            sort(stra.begin()+j+1,stra.end(),greater<long long>());
                        }
                        else
                        {
                            sort(stra.begin()+j,stra.end(),greater<long long>());
                        }
                        for(int k=j; k<stra.size(); k++)
                        {
                            if(strb[j]-'0'>stra[k]-'0')
                            {
                                swap(stra[j],stra[k]);
                                f=1;
                                p=1;
                                break;
                            }
                        }
                        if(!p&&!f)
                        {
                            goto A;
                        }
                    }
                    if(c||p)
                    {
                        temp=j+1;
                        break;
                    }
                    if(!f)
                    {
A:
                        c=1;
                        j-=2;
                    }
                }
                sort(stra.begin()+temp,stra.end(),greater<long long>());
                cout<<stra<<endl;
            }
        }
    }
    return 0;
}
