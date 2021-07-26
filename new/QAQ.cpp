#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    int l,i,j,k,count=0;
    char str[101];
    gets(str);
    l=strlen(str);
    for(i=0; i<l; i++)
    {
        if (str[i]=='Q')
        {
            for (j=i+1; j<l; j++)
            {
                if (str[j]=='A')
                {
                    for (k=j+1;k<l;k++)
                    {
                        if (str[k]=='Q')
                        {
                            count++;
                        }
                    }
                }
            }
        }
    }
    cout<<count<<endl;
}
