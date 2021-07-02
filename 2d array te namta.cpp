#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
using namespace std;
int main()
{
    int i,j,k,l;
    int ar[20][20];
    for (i=0;i<10;i++)
    {
        printf("%d --> \n\n",i+1);
        for (j=0;j<20;j++)
        {
            printf("%d x %d =%d\n",i+1,j+1,(i+1)*(j+1));
        }
        printf("\n");
    }
    return 0;
}
