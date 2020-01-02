#include<bits/stdc++.h>
using namespace std;
int main()
{
   string a1,a2;
   cin>>a1>>a2;
    int i,g=a1.size();
    ///printf("%d\n",g);
    for(i=0;i<g;i++)
    {
        if(a1[i]==a2[i])
        {
            printf("0");
        }
        else
            printf("1");
    }
    printf("\n");
    return 0;
}