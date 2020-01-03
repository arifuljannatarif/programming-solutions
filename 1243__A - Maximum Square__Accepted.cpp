using namespace std;
#include<bits/stdc++.h>
const int mx=1e6;
#define ll long long int
int main()
{
    int t,n,mx;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        mx=1;
        int arr[n+5];
        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);
            int x=n+1;
        while(x--)
        {
            int c=0;
            for(int j=0; j<n; j++)
            {

                if(arr[j]>=x)
                    c++;
            }
              //printf(" x = %d c=%d\n",x,c);
            if(c>=x)
            mx=max(x,mx);
        }
        printf("%d\n",mx);
    }
}