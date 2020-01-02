#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i;
    vector<string>v;
    v.push_back("Sheldon");
    v.push_back("Leonard");
    v.push_back("Penny");
    v.push_back("Rajesh");
    v.push_back("Howard");
    scanf("%I64d",&n);
    for(i=0; n>5; i++)
    {
        n=n/2-2;

    }

    cout<<v[n-1]<<endl;
}#include<stdio.h>

int main()
{
    int n,a=5,b=1,c,d=0,i,j=5,who;

    char name[5][20]= {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

    scanf("%d",&n);

    while(1)
    {
        if(a>=n)
        {
            n-=d, c=n/b;
            //printf("a2=%d  n=%d   b=%d  c=%d\n",a,n,b,c);

            if(n%b==0)
                printf("%s\n",name[c-1]);
            else
                printf("%s\n",name[c]);
            break;
        }
        else
        {
            d=a,  j*=2,  a+=j,  b*=2;
            //printf("d=%d  a=%d  b=%d\n",d,a,b);
        }

    }

    return 0;
}