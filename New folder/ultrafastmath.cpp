#include <bits/stdc++.h>
#include <cstdio>
#include <cstdlib>
#include <string.h>
using namespace std;
int main()
{
    int num1,num2,digit1,digit2,num,i,j,k,rev=0;
    cin>>num1;
    cin>>num2;
    while (num1 !=0 && num2 !=0)
    {
        digit1=num1%10;
        digit2=num2%10;
        num=abs(digit1-digit2);
        rev=(rev*0)+num;
        num1=num1/10;
        num2=num2/10;
        cout<<num;
    }

    cout<<endl;
    return 0;
}
