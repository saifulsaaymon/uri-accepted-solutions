#include<stdio.h>

int main()
{
    int s_hour,e_hour,s_min,e_min,duration_hour,duration_min;
    scanf("%d%d%d%d",&s_hour,&s_min,&e_hour,&e_min);

    duration_hour = e_hour - s_hour;

    if (duration_hour < 0)
    {
        duration_hour = 24 + (e_hour - s_hour);
    }

    duration_min = e_min - s_min;
    if (duration_min < 0)
    {
        duration_min = 60 + (e_min - s_min);
        duration_hour--;
    }
    if(s_hour == e_hour && s_min == e_min)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",duration_hour,duration_min);
    return 0;

}
