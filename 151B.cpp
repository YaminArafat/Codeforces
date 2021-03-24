#include <bits/stdc++.h>
using namespace std;
vector<string>taxi_nm,pizza_nm,girls_nm,mp;
int arr[110][5];
int main()
{
    int n,phonebook,cnt=0,taxi,pizza,girls,mx_taxi=0,mx_pizza=0,mx_girls=0;
    string name,number,tmp;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>phonebook>>name;
        mp.push_back(name);
        taxi=0;
        pizza=0;
        girls=0;
        for(int j=0; j<phonebook; j++)
        {
            cin>>tmp;
            number="";
            cnt=0;
            for(int k=0; k<8; k++)
            {
                if(tmp[k]!='-')
                    number+=tmp[k];
                if(tmp[k]==tmp[0])
                    cnt++;
            }
            if(cnt==6)
            {
                taxi++;
            }
            else
            {
                int k;
                for(k=1;k<6;k++)
                {
                    if(number[k]>=number[k-1])
                        break;
                }
                if(k==6)
                {
                    pizza++;
                }
                else
                    girls++;
            }
        }
        mx_taxi=max(mx_taxi,taxi);
        mx_pizza=max(mx_pizza,pizza);
        mx_girls=max(mx_girls,girls);
        arr[i][0]=(taxi);
        arr[i][1]=(pizza);
        arr[i][2]=(girls);
    }
    /*for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }*/
    for(int i=0; i<n; i++)
    {
        if(arr[i][0]==mx_taxi)
        {
            taxi_nm.push_back(mp[i]);
        }
        if(arr[i][1]==mx_pizza)
        {
            pizza_nm.push_back(mp[i]);
        }
        if(arr[i][2]==mx_girls)
        {
            girls_nm.push_back(mp[i]);
        }
    }
    cout<<"If you want to call a taxi, you should call: ";
    for(int i=0; i<taxi_nm.size(); i++)
    {
        cout<<taxi_nm[i];
        if(i+2 <=taxi_nm.size())
            cout<<", ";
    }
    cout<<"."<<endl;
    cout<<"If you want to order a pizza, you should call: ";
    for(int i=0; i<pizza_nm.size(); i++)
    {
        cout<<pizza_nm[i];
        if(i+2<=pizza_nm.size())
            cout<<", ";
    }
    cout<<"."<<endl;
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
    for(int i=0; i<girls_nm.size(); i++)
    {
        cout<<girls_nm[i];
        if(i+2<=girls_nm.size())
            cout<<", ";
    }
    cout<<"."<<endl;
    return 0;
}
