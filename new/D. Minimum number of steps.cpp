#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int count=0;
    string str,temp,str2;
    cin>>str;
    for(int i=0; i<str.length()-1; i++)
    {
        if(str[i]=='a' && str[i+1]=='b')
        {
            count++;
            count=count%1000000007;
            temp=str.substr(0,i);
            str2=str.substr(i+2,str.length());
            temp.append("bba");
            temp.append(str2,0,str2.length());
            str2.clear();
            str.clear();
            str=temp;
            if(temp[i-1]=='a')
            {
                i-=2;
            }
            else
            {
                if(temp[i+3]=='b')
                {
                    i++;
                }
                else
                {
                    i+=2;
                }
            }
           // printf("%d\n",count);
        }
        else if(str[i]=='a'&&str[i+1]=='a' && str[i+2]=='a')
        {
            i++;
        }
        else if (str[i]=='b'&&str[i+1]=='b')
        {
            i++;
        }
    }
    temp.clear();
    printf("%d\n",count);
    return 0;
}

