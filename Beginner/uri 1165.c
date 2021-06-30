#include<stdio.h>

int main()
{
    int a,b,n,i,count=0;
    scanf("%d",&n);

    for (a=1;a<=n;a++)
    {
        scanf("%d",&b);
        for (i=2;i<b;i++)
        {
            if (b%i==0) count++;
        }
        if (count==0) printf("%d eh primo\n",b);
        else printf("%d nao eh primo\n",b);
        count=0;
    }
    return 0;
}
