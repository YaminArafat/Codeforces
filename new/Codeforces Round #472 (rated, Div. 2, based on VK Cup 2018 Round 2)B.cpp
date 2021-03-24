#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,f=1;//,q=0;
    scanf("%d",&n);
    string s;//,tmp1,tmp2;
    cin>>s;
    vector<int>v(1,0);
   // tmp1=tmp2=s;
    /*for(i=0; i<s.size(); i++)
    {
        if(s[i]=='?')
        {
            j=i+1;
            //cout<<i<<endl;
            while(s[j]=='?')
            {
                j++;
                c++;
            }
            if(c>=2)
            {
                if(s[i-1]!=s[j])
                {
                    f=0;
                    //cout<<i-1<<" "<<j<<endl;
                    printf("No\n");
                    return 0;
                }
            }
            c=0;
            i=j-1;
        }
    }*/
    for(i=1; i<s.size()-1; i++)
    {
        if(s[i]==s[i+1] && s[i]!='?')
        {
            f=0;
        }
        /*if(s[i]=='?')
        {
            q++;
        }*/
    }
    /*if(s[i]=='?')
    {
        q++;
    }*/
    for(i=0; i<s.size()-1; i++)
    {
        if(s[i]=='?')
        {
            if(s[i-1]+s[i+1]=='C'+'M')
            {
                s[i]='Y';
            }
            else if(s[i-1]+s[i+1]=='C'+'Y')
            {
                s[i]='M';
            }
            else if(s[i-1]+s[i+1]=='Y'+'M')
            {
                s[i]='C';
            }
            else
            {
                v[i]=1;
            }
        }

    }
    if(s[0]=='?')v[0]=1;
    if(s[l-1]=='?')v[l-1]
    if(f)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}

