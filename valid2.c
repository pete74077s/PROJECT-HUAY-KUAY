#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//check menu input

int check(char a[])
{
    if ((isdigit(a[0])!=0||a[0]=='q')&&a[1]=='\0')
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
    printf("%c",input[0]);
}