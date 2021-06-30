#include <stdio.h>

int main()
{
    int t, k;
    char name[10000];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", name);
        k = strlen(name);
        printf("%.2lf\n", k*.01);
    }
    return 0;
}
