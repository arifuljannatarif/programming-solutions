#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,m1,h2,m2;
    scanf("%d:%d",&h1,&m1);
    scanf("%d:%d",&h2,&m2);
    h1=(h1*60*60)+(m1*60);
    h2=(h2*60*60)+(m2*60);
    int ans=(h2+h1)/2;
    h1=ans/3600;
    m1=(ans%3600)/60;
    if(h1<10)
        printf("0%d:",h1);
    else
        printf("%d:",h1);
    if(m1<10)
        printf("0%d\n",m1);
    else
        printf("%d\n",m1);

}