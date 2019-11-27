#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//check notes in change section

int check(char a[])
{
    int cnt = 0;
    int i;
    if (a[0]=='q'&&strlen(a)==1)
    {
        return 1;
    }
    for (i=0;i<strlen(a);i++)
    {
        if (isdigit(a[i])!=0)
        {
            cnt++;
        }
    }
    if (cnt == strlen(a))
    {
        return 1;
    }
    return 0;
}

int main()
{
    char input[100];
    do
    {
        gets(input);
    }while(check(input)!=1);

    if (input[0]=='q')
        goto x;
    
    int a = atoi(input);
    printf("%d",a);
    x:
    return 0;
}