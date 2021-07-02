#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i , j;
    string str , rep = "WUB";
    cin>>str;

        for(i=0;i<str.size();i++)
        {
            if(str.substr(i,3)==rep && i==0){str.erase(i,3);i--;}
            else if(str.substr(i,3)==rep && i!=0)
                {
                    str.erase(i,3);
                    str.insert(i," ");
            }


        }

    cout<<str<<endl;
    return 0;
}
