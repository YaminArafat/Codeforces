#include <stdio.h>
int main()
{
    int i,t=0;
    char string[101];
    scanf(" %[^\n]",string);
    for (i=0; string[i]!='\0'; i++)
    {
        if(string[i]=='D')
        {
            if (string[i+1]=='a')
            {
                if (string[i+2]=='n')
                {
                    if (string[i+3]=='i')
                    {
                        if (string[i+4]=='l')
                        {
                            t++;
                        }
                    }
                }
            }
        }
        if(string[i]=='O')
        {
            if (string[i+1]=='l')
            {
                if (string[i+2]=='y')
                {
                    if (string[i+3]=='a')
                    {
                        t++;
                    }
                }
            }
        }
        if(string[i]=='S')
        {
            if (string[i+1]=='l')
            {
                if (string[i+2]=='a')
                {
                    if (string[i+3]=='v')
                    {
                        if (string[i+4]=='a')
                        {
                            t++;
                        }
                    }
                }
            }
        }
        if(string[i]=='A')
        {
            if (string[i+1]=='n')
            {
                if (string[i+2]=='n')
                {
                    t++;
                }
            }
        }
        if(string[i]=='N')
        {
            if (string[i+1]=='i')
            {
                if (string[i+2]=='k')
                {
                    if (string[i+3]=='i')
                    {
                        if (string[i+4]=='t')
                        {
                            if (string[i+5]=='a')
                            {
                                t++;
                            }
                        }
                    }
                }
            }
        }
    }
    if (t==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
