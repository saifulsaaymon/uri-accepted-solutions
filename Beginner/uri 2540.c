#include<stdio.h>

int main()
{
    int n,i,a,m=0,k=0,s;
    while(scanf("%d",&n) !=EOF)
    {
        for (i=0;i<n;i++)
        {
            scanf("%d",&a);
            if (a==0) m++;
            else if (a==1) k++;
        }
       float p = 0.666*k;
       s = (int) p;
       if (s>=m) printf("impeachment\n");
       else printf("acusacao arquivada\n");
       m=0;
       k=0;
    }
    return 0;
}
