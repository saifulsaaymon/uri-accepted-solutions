#include<stdio.h>

int main()
{
    double a,b;
    scanf("%lf%lf",&a,&b);

    if (a==1) printf("Total: R$ %0.2lf\n",4.00*b);
    if (a==2) printf("Total: R$ %0.2lf\n",4.50*b);
    if (a==3) printf("Total: R$ %0.2lf\n",5.00*b);
    if (a==4) printf("Total: R$ %0.2lf\n",2.00*b);
    if (a==5) printf("Total: R$ %0.2lf\n",1.50*b);


    return 0;

}
