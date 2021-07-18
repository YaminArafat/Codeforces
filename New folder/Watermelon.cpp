#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int x;

    scanf("%d", &x);

    if (x>=1 && x<=100)
    {
    if (x%2==0)
    {
        printf("YES",x);
    }
    else
        printf("NO",x);
    }
    return 0;
}
