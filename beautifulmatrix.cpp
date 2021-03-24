#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <strings.h>
using namespace std;
int main()
{
    int i,j,a,b,ROWdiff,COLdiff;
    int array[5][5];
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            cin>>array[i][j];
        }
    }
    for (a=0;a<5;a++)
    {
        for (b=0;b<5;b++)
        {
            if (array[a][b] == 1)
            {
                ROWdiff=abs(2-a);
                COLdiff=abs(2-b);
                cout<<ROWdiff+COLdiff<<endl;
                break;
            }
        }
    }
    return 0;
}
