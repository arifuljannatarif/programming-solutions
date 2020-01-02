#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sieve[2000] = {0};
    int i, j;
    for(i=2; i<2000; i++)
    {
        if(sieve[i] == 0)
        {
            for(j=i*i; j<2000; j+=i) sieve[j] = 1;
        }
    }
    int k,l;
    cin>>k>>l;
    int cnt=0;
    for(int x=2; x<=k; x++)
    {
l:
        if(sieve[x]==0)
        {
            for(int i=2; i<x; i++)
            {


                int sum=0,c=0;
                for(j=i; c<2; j++)
                {
                    if(sum>x)
                    {
                        x++;
                        goto l;
                    }
                    if(sieve[j]==0)
                    {
                        sum+=j;
                        c++;
                    }

                }

                if(sum+1==x)
                {
                    cnt++;

                    x++;
                    goto l;

                }


            }
        }

    }
    if(cnt>=l)
        printf("YES");
    else
        printf("NO");
    return 0;
}