#include<stdio.h>

int main()
{
    int a,count=0,i;

    for (i=1; i<=5; i+=1)
    {
        scanf("%d",&a);

        if (a%2==0 || (a*-1)==0)
            count++;


    }
     printf("%d valores pares\n",count);

    return 0;
}

