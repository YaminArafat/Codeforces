#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{

    string str;
    cin>>str;
    string ss = "abcdefghijklmnopqrstuvwxyz";
    int z =str.size();
    if(z<26)printf("-1\n");
    else if(z==26)
    {
        if(str[0]!='a')printf("-1\n");
        else{

        while(ss!=str.substr(0,26))
        {
           for(int i = 1 ;i<z;i++)
           {

               if(str[i]<97+i)str[i]++;
               else if(str[i]>97+i){printf("-1\n");return 0;}


           }
           ///cout<<str<<endl;

        }
        cout<<ss<<endl;
        }
    }
    else{
        int s = 97 , initial=0 , last;
        bool b = 1,c=1;

                //s=97;
                c=1;
            for(int i = 0 ;i<z;i++)
           {
               if(s==122){ str[i]=s;b=0;break;}
               if(str[i]==97 && c){c=0;s++;}
               else if(str[i]<=s){str[i]=s++;}
               ///else if (str[i]==s)s++;
           }




           if(b==0)cout<<str<<endl;
           else cout<<-1<<endl;

    }



}
