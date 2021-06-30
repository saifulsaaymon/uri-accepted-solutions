#include<stdio.h>

int main()
{
    int a,b,c;
    char p[1000];
    scanf("%d",&a);

    for (b=1;b<=a;b++)
    {
        scanf("%s",p);
        scanf("%d",&c);

        if (p[0]=='T' && p[1]=='h' && p[2]=='o' && p[3]=='r')
            printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
