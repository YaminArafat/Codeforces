#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <strings.h>
using namespace std;
int main()
{
    int a1,a2,a3,b1,b2,b3,n,sumA,sumB,mod,mod2;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    cin>>n;
    sumA=a1+a2+a3;
    sumB=b1+b2+b3;
    if ((sumA<5 || sumA==5) && (sumB<10 || sumB==10))
    {
        if (n>1)
        {
            cout<<"YES"<<endl;
        }
        else if (sumA==0 && sumB==0)
        {
            cout<<"YES"<<endl;
        }
        else if (sumA==0||sumB==0)
        {
            if (n>0)
            {
                cout<<"YES"<<endl;
            }
            else if (n<1)
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else if ((sumA>5 && sumB>10))
    {
        if (sumA%5==0 && sumB%10==0)
        {
            if (((sumA/5)+(sumB/10))<n||((sumA/5)+(sumB/10))==n)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if (sumA%5!=0 && sumB%10==0)
        {
            mod=sumA%10;
            if (mod<6)
            {
                if ((((sumA-mod)/5)+1+(sumB/10))<n||(((sumA-mod)/5)+1+(sumB/10))==n)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
            else if (mod>5)
            {
                if ((((sumA-mod)/5)+2+(sumB/10))<n||(((sumA-mod)/5)+2+(sumB/10))==n)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
        else if (sumA%5==0 && sumB%10!=0)
        {
            mod=sumB%10;
            if (((sumA/5)+1+((sumB-mod)/10))<n||((sumA/5)+1+((sumB-mod)/10))==n)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if (sumA%5!=0 && sumB%10!=0)
        {
            mod=sumA%10;
            mod2=sumB%10;
            if (mod<6)
            {
                if ((((sumA-mod)/5)+1+1+((sumB-mod2)/10))<n||(((sumA-mod)/5)+1+1+((sumB-mod2)/10))==n)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
            else if (mod>5)
            {
                if ((((sumA-mod)/5)+2+1+((sumB-mod2)/10))<n||(((sumA-mod)/5)+2+1+((sumB-mod2)/10))==n)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    else if ((sumA<6 && sumB>10))
    {
        if (sumB%10==0)
        {
            if ((1+(sumB/10))<n||(1+(sumB/10))==n)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if (sumB%10!=0)
        {
            mod=sumB%10;
            if ((1+1+((sumB-mod)/10))<n||(1+1+((sumB-mod)/10))==n)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    else if ((sumA>5 && sumB<11))
    {
        if (sumA%5==0)
        {
            if ((1+(sumA/5))<n||(1+(sumA/5))==n)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if (sumA%5!=0)
        {
            mod=sumA%5;
            if (mod<6)
            {
                if ((((sumA-mod)/5)+1+1)<n||(((sumA-mod)/5)+1+1)==n)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
            else if (mod>5)
            {
                if ((((sumA-mod)/5)+2+1)<n||(((sumA-mod)/5)+2+1)==n)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}
