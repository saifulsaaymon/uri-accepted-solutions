#include<stdio.h>

int main()
{
    int a,b,c,d,e,f;
    while (1)
    {
       scanf("%d",&a);
       if (a==0) break;
       else
       {
           scanf("%d%d",&b,&c);
           d=a*b;
           e = d*100/c;
           f = sqrt(e);
       }
       printf("%d\n",f);
    }
    return 0;
}
