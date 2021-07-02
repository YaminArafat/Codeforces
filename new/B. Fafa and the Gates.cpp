#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,count=0,u=0,r=0,j,x=0,y=0;
    string str;
    scanf("%d",&n);
    cin>>str;
    for(i=0; i<n; i++)
    {
        if(str[i]=='R')
        {
            r++;
        }
        else if(str[i]=='U')
        {
            u++;
        }
        if(abs(u-r)==1)
        {
            count++;
        }
    }
    cout<<count<<endl;
    //cout<<u<<" "<<r<<endl;
    return 0;
}
/*u++;
            for(j=i+1; j<i+4; j++)
            {
                if(str[j]=='R')
                {
                    r++;
                }
            }
            if(r>u)
            {
                count++;
                i++;
            }
            else if(r==1)
            {
                u=0;
            }
            r=0;

            r++;
            for(j=i+1; j<i+4; j++)
            {
                if(str[j]=='U')
                {
                    u++;
                }
            }
            if(u>r)
            {
                count++;
                i++;
            }
            else if(u==1)
            {
                r=0;
            }
            u=0;

            for(j=i;j<n;j++)
            {
                if(str[j]!='R')
                {
                    u++;
                }
                else
                {
                    break;
                }
            }
            //i=j-1;
            x=1;
            if(y)
            {
                if(u>r)
                {
                    count++;
                }
                y=0;
                r=0;
            }

            for(j=i;j<n;j++)
            {
                if(str[j]!='U')
                {
                    r++;
                }
                else
                {
                    break;
                }
            }
            //i=j-1;
            y=1;
            if(x)
            {
                if(u<r)
                {
                    count++;
                }
                x=0;
                u=0;
            }






            if(j==n)
        {
            break;
        }
        j=i;
        if(str[i]=='U')
        {
            r=0;
            u=0;
            for(; j<n; j++)
            {
                if(str[j]=='U')
                {
                    u++;
                }
                else
                {
                    break;
                }
            }
            for(; j<n; j++)
            {
                if(str[j]=='R')
                {
                    r++;
                    if(r>u && u)
                    {
                        count++;
                        i=j;
                        break;
                    }
                }
                else
                {
                    break;
                }
            }

            //cout<<u<<" "<<r<<endl;
        }
        else if(str[i]=='R')
        {
            r=0;
            u=0;
            for(; j<n; j++)
            {
                if(str[j]=='R')
                {
                    r++;
                }
                else
                {
                    break;
                }
            }
            for(; j<n; j++)
            {
                if(str[j]=='U')
                {
                    u++;
                    if(r<u && r)
                    {
                        count++;
                        i=j;
                        break;
                    }
                }
                else
                {
                    break;
                }
            }
            //cout<<u<<" "<<r<<endl;
        }
            */
