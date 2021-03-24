#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,or_toy,cpy_toy;
    scanf("%d %d",&x,&y);
    or_toy=y;
    cpy_toy=or_toy-1;
    if ((cpy_toy%2 && x%2)||(cpy_toy%2==0 && x%2==0))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
