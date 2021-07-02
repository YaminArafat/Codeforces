#include <bits/stdc++.h>
using namespace std;
bool st[101];
int main()
{
    char str1[101];
    char str2[101];
    char str3[101];
    gets(str1);
    gets(str2);
    gets(str3);
    int i,j,k=0,count=0;
    for (i=0; i<strlen(str1); i++)
    {
        for(j=0; j<strlen(str3); j++)
        {
            if(st[j]==0)
            {
                if (str1[i]==str3[j])
                {
                    st[j]=1;
                    count++;
                    break;
                }
            }
        }
    }
    if (count==strlen(str1))
    {
        for (i=0; i<strlen(str2); i++)
        {
            for(j=0; j<strlen(str3); j++)
            {
                if(st[j]==0)
                {
                    if (str2[i]==str3[j])
                    {
                        st[j]=1;
                        k++;
                        break;
                    }
                }
            }
        }
        if (k==strlen(str2))
        {
            if((k+count)==strlen(str3))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
