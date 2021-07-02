#include <stdio.h>
int main()
{
    char str1[3];
    int n,i,j,k,one=0,two=0,f=0;
    scanf(" %[^\n]",str1);
    getch();
    scanf("%d",&n);

    char str2[(n*2)];
    //for (i=0;i<(n*2);i++)
    //{

        gets(str2);

        //scanf("%c",&str2[i]);
    //}
    for (i=1,j=2;i<(n*2),j<(n*2);i=i+2,j=j+2)
    {
        printf("%c ",str2[i]);
        if (str2[i]==str1[0])
        {
            one++;
        }
        if(one>0)
        {
            if(str2[j]==str1[1])
            {
                one++;
            }
        }
        if (str2[i]==str1[1])
        {
            one++;
        }
        if(one>0)
        {
            if(str2[j]==str1[0])
            {
                one++;
            }
        }
        if (str2[j]==str1[0])
        {
            two++;
        }
        if(two>0)
        {
            if(str2[i]==str1[1])
            {
                two++;
            }
        }
        if (str2[j]==str1[1])
        {
            two++;
        }
        if(two>0)
        {
            if(str2[i]==str1[0])
            {
                two++;
            }
        }
        if ((one==2)||(two==2))
        {
            f=1;
            break;
        }
    }
    if (f==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    //printf("%c",str2[1]);

}
