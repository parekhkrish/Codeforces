#include<stdio.h>
int main()
{
    int a[5][5],p;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
        scanf("%d", &a[i][j]);
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i][j]==1)
            {
                if(i>=2 && j<2)
                    p = (i-2)+(2-j);  
                else if(i<2 && j>=2)
                    p = (j-2)+(2-i);
                else if(i>=2 && j>=2)
                    p = (i-2)+(j-2);
                else if (i<2 && j<2)
                p = (2-i)+(2-j);
            }
        }
    }
    printf("%d",p);

}