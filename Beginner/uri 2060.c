#include<stdio.h>

int main()
{
    int a,i,b,count2=0,count3=0,count4=0,count5=0;
    scanf("%d",&a);

    for(i=0;i<a;i++)
    {
        scanf("%d",&b);

        if(b%2==0) count2++;
        if (b%3==0) count3++;
        if (b%4==0) count4++;
        if (b%5==0) count5++;
    }
    printf("%d Multiplo(s) de 2\n",count2);
    printf("%d Multiplo(s) de 3\n",count3);
    printf("%d Multiplo(s) de 4\n",count4);
    printf("%d Multiplo(s) de 5\n",count5);

    return 0;
}
