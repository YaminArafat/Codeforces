#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define RECORDS 10
int search(char[], char[]);
int delete_word(char[], char[], int);
int main()
{
    int index;
    char str[100];
    //int flag=0;
    char str1[10]= {'a','e','i','o','u','A','E','I','O','U'};

    scanf("%s", str);

    index=search(str,str1);

    if (index!=-1)
    {
        delete_word(str,str1,index);
        printf("%s",str);
    }
    return 0;
}
int search(char str[], char str1[])
{
    int l, i, j;

    /* finding length of word */
    for (l = 0; str1[l] != '\0'; l++);

    for (i = 0, j = 0; str[i] != '\0' && str1[j] != '\0'; i++)
    {
        if (str[i] == str1[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if (j == l)
    {
        /* substring found */
        return (i - j);
    }
    else
    {
        return  - 1;
    }
}

int delete_word(char str[], char str1[], int index)
{
    int i, l;

    /* finding length of word */
    for (l = 0; str[l] != '\0'; l++);

    for (i = index; str[i] != '\0'; i++)
    {
        str[i] = str[i + l + 1];
    }
}
