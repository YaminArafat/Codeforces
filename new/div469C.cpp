#include <bits/stdc++.h>
using namespace std;
bool flag[200005];
int main()
{
    int f=0,i,j,k,count=0,zero=0,tempz;
    string str;
    cin>>str;
    for(i=0; i<str.length()-1; i++)
    {
        if(str[i]=='0' && !flag[i])
        {
            for (j=i+1; j<str.length(); j++)
            {
                if(str[j]=='1' && !flag[j])
                {
                    f=1;
                    break;
                }
            }
            if(f)
            {
                for(k=j+1; k<str.length(); k++)
                {
                    if(str[k]=='0' && !flag[k])
                    {
                        flag[i]=1;
                        flag[j]=1;
                        flag[k]=1;
                        f=0;
                        count++;
                        break;
                    }
                }
            }
        }
    }
    for(i=0; i<str.length(); i++)
    {
        if(str[i]=='0'&&!flag[i])
        {
            zero++;
            //cout<<i+1<<endl;
            //return 0;
        }
    }
    if(count+zero)
    {
        printf("%d\n",count+zero);
        if(zero)
        {
            for(i=0; i<str.length(); i++)
            {
                if(str[i]=='0' && !flag[i])
                {
                    printf("%d %d\n",1,i+1);
                }
            }
        }
        if(count)
        {
            int l=0,i=0;
            while(count--)
            {
                printf("%d ",3);
                for(; i<str.length()-1; i++)
                {
                    if(str[i]=='0' && flag[i])
                    {
                        printf("%d ",i+1);
                        for (j=i+1; j<str.length(); j++)
                        {
                            if(str[j]=='1' && flag[j])
                            {
                                printf("%d ",j+1);
                                f=1;
                                break;
                            }
                        }
                        if(f)
                        {
                            for(k=j+1; k<str.length(); k++)
                            {
                                if(str[k]=='0' && flag[k])
                                {
                                    printf("%d \n",k+1);
                                    flag[i]=0;
                                    flag[j]=0;
                                    flag[k]=0;
                                    i++;
                                    f=0;
                                    l=1;
                                    break;
                                }
                            }
                        }
                    }
                    if(l)
                    {
                        l=0;
                        break;
                    }
                }
            }
        }
    }
    else
    {
            printf("-1\n");
    }
    return 0;
}
