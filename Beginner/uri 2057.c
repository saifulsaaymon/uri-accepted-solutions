#include<stdio.h>

int main()
{
    int a,b,c,p;
    scanf("%d%d%d",&a,&b,&c);

    p=a+b+c;

    if(p<0) p=24+p;
    printf("%d\n",p%24);
    return 0;
}
