#include<stdio.h>
int main()
{

    int x,y,repeat;
    int match=0;
    int gremio=0,inter=0,draw=0;

    while(1)
    {
        scanf("%d %d",&x,&y);
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&repeat);
        match++;
        if(x>y)
        {
            inter++;
        }
        if(y>x)
        {
            gremio++;
        }
        if(x==y)
        {
            draw++;
        }
        if(repeat==1)
            continue;
        if(repeat==2)
            break;

    }
    printf("%d grenais\n",match);
    printf("Inter:%d\n",inter);
    printf("Gremio:%d\n",gremio);
    printf("Empates:%d\n",draw);

    if(inter>gremio)
    {
        printf("Inter venceu mais\n");
    }
    else
    {
        printf("Gremio venceu mais\n");
    }
    return 0;
}
