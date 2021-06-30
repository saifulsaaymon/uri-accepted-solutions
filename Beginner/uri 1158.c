#include<stdio.h>

int main()
{
    long long n,i,t,a,b,count=0,sum=0;
    scanf("%lld",&n);
    for(t=1;t<=n;t++){
        scanf("%lld%lld",&a,&b);
        for(i=a;count<b;i++){
            if(i%2==1 || i%2==-1){
                sum=sum+i;
                count++;

            }
        }
       printf("%lld\n",sum);
        sum=0;
        count=0;
    }
    return 0;
}
