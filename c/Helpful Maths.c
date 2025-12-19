#include<stdio.h>
#include<string.h>
int main()
{
    char str[150];
    scanf("%s",str);
    int temp = 0;
    for(int i=0;i<strlen(str);i++)
    {
         for(int j=i+1;j<strlen(str);j++)
        {
            if(i%2==0 && j%2==0)
            {
                if(str[i]>str[j])
                {
                    temp  = str[j];
                    str[j] = str[i];
                    str[i] = temp;
                }
            }
        }
    }
    printf("%s",str);

}