#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool flag[1000],ase[10000];
int main()
{
    int tmp[]= {4,8,15,16,23,42};
    ase[4]=1;
    ase[8]=1;
    ase[15]=1;
    ase[16]=1;
    ase[23]=1;
    ase[42]=1;
    int vec[7];
    vector<int>v;

    printf("? 1 2\n");
    fflush(stdout);
    int x;
    scanf("%d",&x);
    for(int i=0; i<6; i++)
    {
        if(x%tmp[i]==0 && ase[x/tmp[i]])
        {
            vec[0]=tmp[i];
            vec[1]=x/tmp[i];
            break;
        }
    }

    printf("? 2 3\n");
    fflush(stdout);
    int y;
    scanf("%d",&y);
    for(int i=0; i<6; i++)
    {
        if(y%tmp[i]==0 && ase[y/tmp[i]])
        {
            if(vec[1]!=tmp[i] && vec[1]!=(y/tmp[i]))
                swap(vec[0],vec[1]);
            if(vec[1]==tmp[i])
                vec[2]=y/tmp[i];
            else
                vec[2]=tmp[i];
            break;
        }
    }

    printf("? 4 5\n");
    fflush(stdout);
    int z;
    scanf("%d",&z);
    for(int i=0; i<6; i++)
    {
        if(z%tmp[i]==0 && ase[z/tmp[i]])
        {
            vec[3]=tmp[i];
            vec[4]=z/tmp[i];
            break;
        }
    }

    printf("? 5 6\n");
    fflush(stdout);
    int w;
    scanf("%d",&w);
    for(int i=0; i<6; i++)
    {
        if(w%tmp[i]==0 && ase[w/tmp[i]])
        {
            if(vec[4]!=tmp[i] && vec[4]!=(w/tmp[i]))
                swap(vec[3],vec[4]);
            if(vec[4]==tmp[i])
                vec[5]=w/tmp[i];
            else
                vec[5]=tmp[i];
            break;
        }
    }

    printf("!");
    for(int i=0; i<6; i++)
    {
        printf(" %d",vec[i]);
    }
    printf("\n");
    fflush(stdout);
}

