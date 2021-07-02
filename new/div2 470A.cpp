#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,j,f=1,count=0,s=0;
    char ch;
    scanf("%d %d",&r,&c);
    char arr[r+1][c+1];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(arr[i][j]=='S')
            {
                if(!i && !j)
                {
                    if(arr[i][j+1]=='W'||arr[i+1][j]=='W')
                    {
                        printf("No\n");
                        f=0;
                        return 0;
                    }
                }
                else if (!j)
                {
                    if(arr[i][j+1]=='W'||arr[i-1][j]=='W'||arr[i+1][j]=='W')
                    {
                        printf("No\n");
                        f=0;
                        return 0;
                    }
                }
                else if (!i)
                {
                    if(arr[i][j+1]=='W'||arr[i][j-1]=='W'||arr[i+1][j]=='W')
                    {
                        printf("No\n");
                        f=0;
                        return 0;
                    }
                }
                else if (i==r-1)
                {
                    if(arr[i][j+1]=='W'||arr[i][j-1]=='W'||arr[i-1][j]=='W')
                    {
                        printf("No\n");
                        f=0;
                        return 0;
                    }
                }
                else if (j==c-1)
                {
                    if(arr[i-1][j]=='W'||arr[i+1][j]=='W'||arr[i][j-1]=='W')
                    {
                        printf("No\n");
                        f=0;
                        return 0;
                    }
                }
                else if (i==r-1 && j==c-1)
                {
                    if(arr[i-1][j]=='W'||arr[i][j-1]=='W')
                    {
                        printf("No\n");
                        f=0;
                        return 0;
                    }
                }
                else if(arr[i][j+1]=='W'||arr[i][j-1]=='W'||arr[i-1][j]=='W'||arr[i+1][j]=='W')
                {
                    printf("No\n");
                    f=0;
                    return 0;
                }
            }
            else if(arr[i][j]=='.')
            {
                arr[i][j]='D';
            }
        }
    }
    if(f)
    {
        printf("Yes\n");
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                printf("%c",arr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
/*/*
if(!s)
    {
        printf("No\n");
        return 0;
    }
    if(count==r*c)
    {
        printf("No\n");
        return 0;
    }


if(arr[i][j]=='W')
            {
                count++;
            }
            else if (arr[i][j]=='S')
            {
                s++;
            }



else
                        {
                            if(arr[i][j+1]=='.')
                            {
                                arr[i][j+1]='D';
                            }
                            if(arr[i][j-1]=='.')
                            {
                                arr[i][j-1]='D';
                            }
                            if(arr[i-1][j]=='.')
                            {
                                arr[i-1][j]='D';
                            }
                            if (arr[i+1][j]=='.')
                            {
                                arr[i+1][j]='D';
                            }
                        }

 else if (arr[i][j]=='.')
                {
                    arr[i][j]='D';
                }

else if (arr[i][j]=='W')
                {
                    if(!i && !j)
                    {
                        if(arr[i][j+1]=='S'||arr[i+1][j]=='S')
                        {
                            printf("No\n");
                            f=0;
                            break;
                        }
                        else
                        {
                            if(arr[i][j+1]=='.')
                            {
                                arr[i][j+1]='D';
                            }
                            if (arr[i+1][j]=='.')
                            {
                                arr[i+1][j]='D';
                            }
                        }
                    }
                    else if (!i)
                    {
                        if(arr[i][j+1]=='S'||arr[i][j-1]=='S'||arr[i+1][j]=='S')
                        {
                            printf("No\n");
                            f=0;
                            break;
                        }
                        else
                        {
                            if(arr[i][j+1]=='.')
                            {
                                arr[i][j+1]='D';
                            }
                            if(arr[i][j-1]=='.')
                            {
                                arr[i][j-1]='D';
                            }
                            if (arr[i+1][j]=='.')
                            {
                                arr[i+1][j]='D';
                            }
                        }
                    }
                    else if (!j)
                    {
                        if(arr[i][j+1]=='S'||arr[i-1][j]=='S'||arr[i+1][j]=='S')
                        {
                            printf("No\n");
                            f=0;
                            break;
                        }
                        else
                        {
                            if(arr[i][j+1]=='.')
                            {
                                arr[i][j+1]='D';
                            }
                            if(arr[i-1][j]=='.')
                            {
                                arr[i-1][j]='D';
                            }
                            if (arr[i+1][j]=='.')
                            {
                                arr[i+1][j]='D';
                            }
                        }
                    }
                    else
                    {
                        if(arr[i][j+1]=='S'||arr[i][j-1]=='S'||arr[i-1][j]=='S'||arr[i+1][j]=='S')
                        {
                            printf("No\n");
                            f=0;
                            break;
                        }
                        else
                        {
                            if(arr[i][j+1]=='.')
                            {
                                arr[i][j+1]='D';
                            }
                            if(arr[i][j-1]=='.')
                            {
                                arr[i][j-1]='D';
                            }
                            if(arr[i-1][j]=='.')
                            {
                                arr[i-1][j]='D';
                            }
                            if (arr[i+1][j]=='.')
                            {
                                arr[i+1][j]='D';
                            }
                        }
                    }
                }*/
