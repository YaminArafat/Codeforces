#include <stdio.h>
int main()
{
    char str[7][10];
    int i,j;
    for(i=0; i<6; i++)
    {
        for(j=0; j<9; j++)
        {
            scanf("%c",&str[i][j]);
        }
    }
    if(str[0][3]=='.')
    {
        str[0][3]='P';
    }
    else if(str[0][4]=='.')
    {
        str[0][4]='P';
    }
    else if(str[1][3]=='.')
    {
        str[1][3]='P';
    }
    else if(str[1][4]=='.')
    {
        str[1][4]='P';
    }
    else if(str[0][0]=='.')
    {
        str[0][0]='P';
    }
    else if(str[0][1]=='.')
    {
        str[0][1]='P';
    }
    else if(str[0][6]=='.')
    {
        str[0][6]='P';
    }
    else if(str[0][7]=='.')
    {
        str[0][7]='P';
    }
    else if(str[1][0]=='.')
    {
        str[1][0]='P';
    }
    else if(str[1][1]=='.')
    {
        str[1][1]='P';
    }
    else if(str[1][6]=='.')
    {
        str[1][6]='P';
    }
    else if(str[1][7]=='.')
    {
        str[1][7]='P';
    }
    else if(str[2][3]=='.')
    {
        str[2][3]='P';
    }
    else if(str[2][4]=='.')
    {
        str[2][4]='P';
    }
    else if(str[3][3]=='.')
    {
        str[3][3]='P';
    }
    else if(str[3][4]=='.')
    {
        str[3][4]='P';
    }
    else if(str[2][0]=='.')
    {
        str[2][0]='P';
    }
    else if(str[2][1]=='.')
    {
        str[2][1]='P';
    }
    else if(str[2][6]=='.')
    {
        str[2][6]='P';
    }
    else if(str[2][7]=='.')
    {
        str[2][7]='P';
    }
    else if(str[3][0]=='.')
    {
        str[3][0]='P';
    }
    else if(str[3][1]=='.')
    {
        str[3][1]='P';
    }
    else if(str[3][6]=='.')
    {
        str[3][6]='P';
    }
    else if(str[3][7]=='.')
    {
        str[3][7]='P';
    }
    else if(str[4][3]=='.')
    {
        str[4][3]='P';
    }
    else if(str[4][4]=='.')
    {
        str[4][4]='P';
    }
    else if(str[5][3]=='.')
    {
        str[5][3]='P';
    }
    else if(str[5][4]=='.')
    {
        str[5][4]='P';
    }
    else if(str[4][0]=='.')
    {
        str[4][0]='P';
    }
    else if(str[4][1]=='.')
    {
        str[4][1]='P';
    }
    else if(str[4][6]=='.')
    {
        str[4][6]='P';
    }
    else if(str[4][7]=='.')
    {
        str[4][7]='P';
    }
    else if(str[5][0]=='.')
    {
        str[5][0]='P';
    }
    else if(str[5][1]=='.')
    {
        str[5][1]='P';
    }
    else if(str[5][6]=='.')
    {
        str[5][6]='P';
    }
    else if(str[5][7]=='.')
    {
        str[5][7]='P';
    }
    for(i=0; i<6; i++)
    {
        for(j=0; j<8; j++)
        {
            printf("%c",str[i][j]);
        }
        printf("\n");
    }
    return 0;
}
