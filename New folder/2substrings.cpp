#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int count_A=0,count_B=0,f=0,a=1,b=1,z=0;
    cin>>str;
    if(str.length()<4)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        for(int i=0; i<str.length()-1; i++)
        {
            if(str[i]=='A' && str[i+1]=='B' && str[i+2]=='A' && !z)
            {
                //count_A++;
                //count_B++;
                z=1;
                i+=2;
            }
            else if(str[i]=='B' && str[i+1]=='A' && str[i+2]=='B' && !z)
            {
                //count_A++;
                //count_B++;
                z=1;
                i+=2;
            }
            else if(str[i]=='A' && str[i+1]=='B')
            {
                if(z)
                {
                    f=1;
                    break;
                }
                else
                    count_A++;
            }
            else if(str[i]=='B' && str[i+1]=='A')
            {
                if(z)
                {
                    f=1;
                    break;
                }
                else
                    count_B++;
            }
            if(count_A>=1&&count_B>=1 && !z)
            {
                f=1;
                break;
            }
        }
        //cout<<count_A<<" "<<count_B<<endl;
        if(f)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}











/*#include <stdio.h>
#include <strings.h>
int main()
{
    char str[100001];
    int i,a=0,b=0,f=0;
    scanf(" %[^\n]",&str);
    for (i=0; i<strlen(str); i++)
    {
        if (strlen(str) > 3)
        {
            if (str[i] == 'A' && str[i+1] == 'B')
            {
                a++;
            }
            else if (str[i] == 'B' && str[i+1] == 'A')
            {
                b++;
            }
        }
        else
        {
            printf("NO\n");
            f=1;
            break;
        }
    }
    if (f != 1)
    {
        if (a >= 1 && b >= 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}*/
