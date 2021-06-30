#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int a;
    while (1)
    {
        cin>>a;
        if (a == -1) break;
        if (a == 0) printf("0\n");
        else printf("%llu\n",a-1);
    }
    return 0;
}
