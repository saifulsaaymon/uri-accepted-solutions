#include<stdio.h>

int main()
{
    char p[100],q[100],r[100];
    scanf("%s%s%s",&p,&q,&r);

    if (p[0]=='v')
    {
        if (q[0]=='a')
        {
            if (r[0]=='c') printf("aguia\n");
            else if (r[0]=='o') printf("pomba\n");
        }
        else if (q[0]=='m')
        {
            if (r[0]=='o') printf("homem\n");
            else if (r[0]=='h') printf("vaca\n");
        }
    }
    else if (p[0]=='i')
    {
       if (q[0]=='i')
       {
           if (r[2]=='m') printf("pulga\n");
           else if (r[2]=='r') printf("lagarta\n");
       }
       else if (q[0]=='a')
       {
           if (r[0]=='h') printf("sanguessuga\n");
           else if (r[0]=='o') printf("minhoca\n");
       }
    }
    return 0;
}
