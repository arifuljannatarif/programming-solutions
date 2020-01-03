#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, a, b, p, q, flag=0;
    scanf("%d %d %d %d %d %d", &x, &y, &a, &b, &p, &q);
    if(a+p<=x && b<=y && q<=y || a+q<=x && b<=y && p<=y || b+p<=x && a<=y && q<=y || b+q<=x && a<=y && p<=y || a+p<=y && b<=x && q<=x || a+q<=y && b<=x && p<=x || b+p<=y && a<=x && q<=x || b+q<=y && a<=x && p<=x)
        printf("YES");
    else
        printf("NO");
    return 0;
}