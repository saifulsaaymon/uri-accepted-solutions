#include<stdio.h>
#include<string.h>

int main()
{
    int a,b;
    char p[10];
    scanf("%d%d",&a,&b);

    int count=a;
    while(b--)
    {
        scanf("%s",&p);
        if(p[0]=='f') count++;
        else count--;
    }
    printf("%d\n",count);
    return 0;
}
