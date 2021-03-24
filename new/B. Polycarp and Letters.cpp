#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
bool flag[2005];
int main()
{
    int n,i,j,count=0,ans=0,f=0;
    scanf("%d",&n);
    string str;
    cin>>str;
    for(i=0; i<str.length(); i++)
    {
        if(str[i]>='a' && str[i]<='z' && !flag[str[i]])
        {
            f=1;
            for(j=i+1; j<str.length(); j++)
            {
                if(str[i]!=str[j] && !flag[str[j]] && (str[j]>='a' && str[j]<='z'))
                {
                    ans++;
                    //cout<<i<<" "<<str[i]<<" "<<j<<" "<<str[j]<<endl;
                    flag[str[j]]=1;
                    flag[str[i]]=1;
                    break;
                }
                else if (str[j]>='A' && str[j]<='Z')
                {
                    i=j;
                    break;
                }
            }
        }
    }
    if(f)
        printf("%d\n",ans+1);
    else
        printf("%d\n",ans);
    return 0;
}
