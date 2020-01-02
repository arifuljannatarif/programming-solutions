#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    long int i,g,t;

    char a[120],b[120];
    scanf("%s",a);
    g=strlen(a);
    sort(a,a+g);
    unique(a,a+(g+15));
    g=strlen(a);
    if(g%2==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
        return 0;

    }