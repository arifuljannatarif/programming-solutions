#include<ctime>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int main()
{



    int i,j,x1,a,b;
    scanf("%d %d",&a,&b);
    vector<int >v;
    if(b==1)
    {
        printf("%d\n",a);
        return 0;
    }
    for(i=2;; i++)
    {
        if(a%i==0)
        {
            a=a/i;
            v.push_back(i);
            i--;
        }
        if(v.size()==b-1 && a>1)
        {
            v.push_back(a);
        }
        if(v.size()==b)break;

        if(a<=1 && v.size()<b)
        {
            printf("-1\n");
            return 0;
        }
    }
    sort(v.begin(),v.end());

    for(i=0; i<=v.size()-1; i++)
        printf("%d ",v[i]);







}