#include<stdio.h>
#include<string.h>
int main()
{
    char str[400];
    scanf("%s",str);
    int i=0, j=0, k=0;
    for( k=0;k<strlen(str);k++)
    {
        if(str[k]=='4')
        i++;
        else if(str[k]=='7')
        j++;
    }
    if((strlen(str)==(i+j)&&strlen(str)!=1)||(i+j)==4||(i+j)==7)
    {
        if(i)
        printf("YES");
    }
    else if(strlen(str)==1)
    printf("NO");
    else 
    printf("NO");
}