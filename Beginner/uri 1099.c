#include<stdio.h>

int main()
{
    int a,b,i,n,s=0,p;
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);

        if (a==b)
        {
            s=0;
            printf("%d\n",s);
        }
        else if (a<b)
        {
            for (p=a+1,s=0;p<b;p++)
            {
                if (p%2==1)
                s+=p;
            }
            printf("%d\n",s);
        }
        else
        {
            for (p=b+1,s=0;p<a;p++)
            {
                if (p%2==1)
                s+=p;
            }
            printf("%d\n",s);
        }
    }
    return 0;
}
