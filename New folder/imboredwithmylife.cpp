#include<iostream>
#include<cstdio>
#include <cstdlib>
using namespace std;
int facto(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
        return n*facto(n-1);
}
int main()
{
    int a,b,i,j;
    scanf("%d %d",&a,&b);
    printf("%d\n",facto(min(a,b)));
    return 0;
}
