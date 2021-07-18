#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int a,b,i=1;
    scanf("%d %d",&a,&b);
    while(1)
    {
        if(i%2)
        {
            if(a>=i)
            {
                a-=i;
            }
            else
            {
                printf("Vladik\n");
                break;
            }
        }
        else
        {
            if(b>=i)
            {
                b-=i;
            }
            else
            {
                printf("Valera\n");
                break;
            }
        }
        i++;
    }
    return 0;
}
