#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{

    int t1,t2,i,flag=0;
    scanf("%d%d",&t1,&t2);
    int k=t2-1;
    int a[t1+2],b[t2+2];
    for(i=0;i<t1;i++)
            scanf("%d",&a[i]);

            for(i=0;i<t2;i++)
                scanf("%d",&b[i]);
               // sort(b, b+t2, greater<int>());
               sort(b, b+t2);
                 //for(i=0;i<t2;i++)
                   // printf("%d",b[i]);
            for(i=0;i<t1;i++)
            {
                if(a[i]==0)
                {
                    a[i]=b[k];
                    k--;
                }
            }
             for(i=0;i<t1-1;i++)
            {
                if(a[i]>a[i+1])
                {
                    flag++;
                //printf("paise\n");
                    break;

                }

            }
            if(flag==0)
                printf("NO\n");
            else
                printf("YES\n");
            return 0;


}