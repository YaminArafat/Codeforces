#include<iostream>
#include<string>
#include<sstream>
#include<iomanip>
#include<cstdio>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    while(1==scanf("%d",&t)){
    while(t--)
    {
        string str;

        cin>>str;
        bool  b = 0;
        int z = str.size();

            if(str[0]=='R')
            {
                for(int i = 1 ;i<z;i++){
                         if(str[i]>=48 && str[i]<=57) b=0;
                         else if(str[i]=='C'){b=1;break;}

                }
            }

        if(b){

        str.erase(str.begin()+0);
        stringstream ss(str);
        int r ;
        ss>>r;
        int i;
        for(i=0;i<str.size();i++)
        {
            if(str[i]=='C')break;
        }
        str.erase(str.begin(),str.begin()+i+1);
        stringstream sss(str);
        ///cout<<str<<endl;
        int c;
        sss>>c;

       vector<char>vc;
        while(c)
        {
            int rem = c%26;
            if(rem)
            rem+=64;
            else
                rem=65;
            vc.push_back(rem);
            c/=26;



        }

        for(i=vc.size()-1;i>-1;i--)
        {
            cout<<vc[i];
        }
        cout<<r<<endl;

        }

       else{


            z= str.size();
            int i;
           for( i =0;i<z;i++)
           {
               if(str[i]>=48 && str[i]<=57)break;
               else ;
           }
           string st;
           st = str.substr(0,i);
           z=st.size();
           str.erase(str.begin(),str.begin()+i);
           stringstream s_(str);
           int r;
           s_>>r;
           i=0;
           int sum = 0;
           while(z!=0)
           {
               int temp = st[i]-64;
               //cout<<temp<<endl;
               z--;
               sum+=temp*powl(26,z);
               i++;


           }
           cout<<"R"<<r<<"C"<<sum<<endl;
        }


    }
}
}
