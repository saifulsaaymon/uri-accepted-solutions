#include<stdio.h>

int main()
{
    int a,b,p,s=0;
    scanf("%d%d",&a,&b);

    if (a<b)
    {
        for (p=a; p<=b; p++)
        {
            if (p%13==0) continue;
            s+=p;
        }
    }
    else if (a>b)
    {
        for (p=b; p<=a; p++)
        {
            if (p%13==0) continue;
            s+=p;
        }
    }
    printf("%d\n",s);
    return 0;
}
