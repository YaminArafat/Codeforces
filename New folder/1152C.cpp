#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
 {
    if (a == 0 || b == 0)
        return 0;
    if (a == b)
        return a;

    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
 }
int main()
{
    long long a,b,dif,mn=LONG_LONG_MAX,mn2=LONG_LONG_MAX, lcm,tmp,f=1;
    cin>>a>>b;
    if(a==b)
    {
        cout<<"0"<<endl;
        return 0;
    }

    tmp=a;
    dif=abs(a-b);
    cout<<dif<<endl;
    tmp=a/dif;
    cout<<tmp<<endl;
    tmp=dif*tmp;
    cout<<tmp<<endl;
    tmp=a-tmp;
    cout<<tmp<<endl;
    tmp=dif-tmp;
    cout<<tmp<<endl;
    for(long long  i=0;; i+=tmp)
    {
        lcm=((a+i)/gcd(a+i,b+i))*(b+i);
        if(lcm<=mn)
        {
            mn2=(mn2,i);
            mn=(mn,lcm);
        }
        if(f==0)
        {
            tmp=dif;
        }
        f--;
        if((a+i)%dif==0 && (b+i)%dif==0)
            break;
    }
    cout<<mn2<<endl;
    return 0;
}




































/*#include<bits/stdc++.h>
using namespace std;
/*long long gcd(long long a, long long b)
 {
    if (a == 0 || b == 0)
        return 0;
    if (a == b)
        return a;

    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
 }*/
/*int main()
{
    long long a,b,dif,mn=LONG_LONG_MAX,mn2=LONG_LONG_MAX, lcm,tmp;
    cin>>a>>b;
    tmp=a;
    dif=abs(a-b);
    //cout<<dif<<endl;
    tmp=a/dif;
    //cout<<tmp<<endl;
    tmp=dif*tmp;
    //cout<<tmp<<endl;
    tmp=a-tmp;
    //cout<<tmp<<endl;
    if(tmp!=0)
    tmp=dif-tmp;
    //cout<<tmp<<endl;
    /*for(int i=0;; i++)
    {
        lcm=((a+i)/gcd(a+i,b+i))*(b+i);
        if(lcm<=mn)
        {
            mn2=(mn2,i);
            mn=(mn,lcm);
        }
        if((a+i)%dif==0 && (b+i)%dif==0)
            break;
    }*/
    /*cout<<tmp<<endl;
    return 0;
}*/
