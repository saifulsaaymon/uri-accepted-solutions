#include<stdio.h>

int main()
{
    int a,b,i,j=0,k=0;
    scanf("%d",&a);
    for (i=0; i<a; i++)
   {
       scanf("%d",&b);

       if (10<=b && b<=20) j++;
       else k++;
   }
   printf("%d in\n",j);
   printf("%d out\n",k);


    return 0;
}
