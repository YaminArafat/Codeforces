/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=-1,cnt=0;
    cin>>n;
    int arr[n+10],baar[n+10];
    set<int>s;
    vector<int>vec;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(n==1)
    {
        cout<<"0"<<endl;
        return 0;
    }
    if(n==2)
    {
        int f=0;
        for(int i=0; i<=arr[1]-arr[0]; i++)
        {
            if(arr[0]+i==arr[1]-i)
            {
                cout<<i<<endl;
                f=1;
                break;
            }
        }
        if(!f)
        {
            if(arr[1]<=2*arr[0] || (arr[1]+arr[0])%2)
            {
                cout<<(arr[1]-arr[0])<<endl;
            }
            else if((arr[1]+arr[0])%2==0)
            {
                cout<<(arr[1]+arr[0])/2<<endl;
            }
            else
            {
                cout<<"-1"<<endl;
            }

        }
        //cout<<(arr[1]+arr[0])/2<<endl;
        return 0;
    }
    for(int i=0; i<n; i++)
    {
            s.insert(arr[i]);
    }
    vector<int>carr;
        set<int>:: iterator it;
        for( it = s.begin(); it!=s.end(); ++it)
        {
            //vec.push_back(*it);
            //cout << *it << endl;
            carr.push_back(*it);
        }
    if(s.size()==1)
    {
                cout << "0" << endl;
    }

    else if(s.size()==2)
    {
        int f=0;
        for(int i=0; i<=carr[1]; i++)
        {
            if(carr[0]+i==carr[1]-i)
            {
                cout<<i<<endl;
                f=1;
                break;
            }
        }
        if(!f)
        {
            if(carr[1]<=2*carr[0] || (carr[1]+carr[0])%2)
            {
                cout<<(carr[1]-carr[0])<<endl;
            }
            else if((carr[1]+carr[0])%2==0)
            {
                cout<<(carr[1]-carr[0])/2<<endl;
            }
            else
            {
                cout<<"-1"<<endl;
            }

        }
    }
    else if(s.size()==3)
    {
        if(carr[1]-carr[0]==carr[2]-carr[1])
            cout<<carr[1]-carr[0]<<endl;
        else
            cout<<"-1"<<endl;
    }
    else
        cout<<"-1"<<endl;

    return 0;
}

*/


/* else if(s.size()==2)
    {
        vector<int>carr;
        set<int>:: iterator it;
        for( it = s.begin(); it!=s.end(); ++it)
        {
            //vec.push_back(*it);
            //cout << *it << endl;
            carr.push_back(*it);
        }
        int f=0;
        for(int i=0; i<=carr[1]-carr[0]; i++)
        {
            if(carr[0]+i==carr[1]-i)
            {
                cout<<i<<endl<<"1"<<endl;
                f=1;
                break;
            }
        }
        if(!f)
        {
            if(carr[1]<=2*carr[0] || (carr[1]+carr[0])%2)
            {
                cout<<(arr[1]-arr[0])<<endl<<"1"<<endl;;
            }
            else if((carr[1]+carr[0])%2==0)
            {
                cout<<(carr[1]-carr[0])/2<<endl<<"1"<<endl;;
            }
            else
            {
                cout<<"-1"<<endl;
            }

        }
    }*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,mx=0,days=0,rest;
    char arr[8]= {'b','a','a','b','c','a','c'},ch;
    char barr[20];
    cin>>a>>b>>c;
    for(int i=0; i<7; i++)
    {
        barr[i]=arr[i];
        barr[7+i]=arr[i];
    }
    long long mn=min(min(a,b),c);
    if(mn==a)
    {
        rest=a%3;
        days=(a/3)*7;
        ch='a';
    }
    else if(mn==b)
    {
        rest=b%2;
        days=(b/2)*7;
        ch='b';
    }
    else if(mn==c)
    {
        rest=c%2;
        days=(c/2)*7;
        ch='c';
    }
    for(int i=0; i<7; i++)
    {
        if(ch!=arr[i])
        {
            for(int j=i; j<7+i; j++)
            {
                if(arr[j]==ch)
                {
                    cnt++;
                }
                else
                    break;
            }
        }
    }
    for(int i=0; i<7; i++)
    {
        long long tmpa=a;
        long long tmpb=b;
        long long tmpc=c,cnt=0,x=0,y=0,z=0;
        while((tmpa)||(tmpb)||(tmpc))
        {
            //cout<<1<<endl;
            for(int j=i; j<7+i; j++)
            {
                if(barr[j]=='a')
                {
                    if(tmpa)
                    {
                        tmpa--;
                        cnt++;
                    }
                    else
                    {
                        x=1;
                        break;
                    }
                }
                else if(barr[j]=='b')
                {
                    if(tmpb)
                    {
                        tmpb--;
                        cnt++;
                    }
                    else
                    {
                        y=1;
                        break;
                    }
                }
                else
                {
                    if(tmpc)
                    {
                        tmpc--;
                        cnt++;
                    }
                    else
                    {
                        z=1;
                        break;
                    }
                }

                //if(i==3)
                //cout<<barr[j]<<" ";
            }
            if(x ||y||z)
                break;

        }
        //cout<<cnt<<endl;
        mx=max(mx,cnt);
    }
    cout<<mx<<endl;
}
/*int main()
{
    int n,ans=-1,cnt=0;
    cin>>n;
    int arr[n+10],baar[n+10];
    set<int>s;
    vector<int>vec;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(n==1)
    {
        cout<<"0"<<endl;
           return 0;
    }
    if(n==2)
    {
         int f=0;
        for(int i=0;i<=arr[1]-arr[0];i++)
        {
            if(arr[0]+i==arr[1]-i){
                cout<<i<<endl;
                f=1;
                break;
            }
        }
        if(!f)
           cout<<"-1"<<endl;
           return 0;
    }
    for(int i=0; i<n-1; i++)
    {
        baar[i]=arr[i+1]-arr[i];
        if(baar[i])
        s.insert(baar[i]);
    }
    if(s.size()==1)
    {
        set<int>:: iterator it;
        for( it = s.begin(); it!=s.end(); ++it)
        {
            //vec.push_back(*it);
            cout << *it << endl;
        }
    }
    else if(s.size()==0)
    {
        cout<<"0"<<endl;
    }
    else
        cout<<"-1"<<endl;

    return 0;
}
*/


/*
if(n==1)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        s.insert(arr[i]);
    }
    set<int>:: iterator it;
    for( it = s.begin(); it!=s.end(); ++it)
    {
        vec.push_back(*it);
        //cout << ans << endl;
    }
    sort(vec.begin(),vec.end());
    if(vec.size()==2)
    {
        int f=0;
        for(int i=1;i<=vec[1]-vec[0];i++)
        {
            if(vec[0]+i==vec[1]-i){
                cout<<i<<endl;
                f=1;
            }
        }
        if(!f)
           cout<<"-1"<<endl;
    }
    else if(vec.size()==1)
    {
        cout<<"-1"<<endl;
    }
    else{
    for(int i=0;i<vec.size()-1;i++)
    {

        if(abs(vec[i+1]-vec[i])==abs(vec[1]-vec[0]))
        {
            cnt++;
        }
    }
    if(cnt==vec.size()-1)
    {
        cout<<abs(vec[1]-vec[0])<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    }
*/
/*int main()
{
    long long w,x,y,z,cnt=0;
    cin>>w>>x>>y>>z;
    long long mx=max(max(w,x),max(y,z));
    if(mx-w){
        cout<<mx-w<<" ";
        cnt++;

    }
    if(mx-x){
        cout<<mx-x<<" ";
        cnt++;
    }
    if(mx-y){
        cout<<mx-y;
        if(cnt<2)
            cout<<" ";
    }
    if(mx-z){
        cout<<mx-z;
        if(cnt<2)
            cout<<" ";
    }
    return 0;
}*/
