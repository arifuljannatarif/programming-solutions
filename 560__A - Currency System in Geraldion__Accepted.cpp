#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x1,flg=0;
    cin>>t;
    for(int i=0; i<t; i++)
    {

        cin>>x1;
        if(x1==1)flg=1;
    }
        if(flg==1)
            printf("-1\n");
        else
        printf("1\n");

    }#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x1,flg=0,x[11]= {0};
    cin>>t;
    for(int i=0; i<t; i++)
    {

        cin>>x1;
        if(x1==1)flg=1;
        switch(x1)
        {
        case 2:
            x[2]=1;
            x[4]=1;
            x[6]=0;
            x[8]=0;
            x[10]=0;
            break;
        case 3:
            x[3]=0;
            x[6]=0;
            x[9]=0;
            break;
        case 4:
            x[4]=0;
            x[8]=0;
            break;
        case 5:
            x[5]=0;
            x[10]=0;
            break;
        case 6:
            x[6]=0;
            break;
        case 7:
            x[7]=0;

        case 8:
            x[8]=0;
            break;
        case 9:
            x[9]=0;
            break;
        case 10:
            x[10]=0;
            break;
        }
    }

        if(flg==1)
            printf("-1\n");
        else
        {
            for(int i=1;i<11;i++)
            {
                if(x[i]==0)
                    {
                        printf("%d\n",i);
                        break;
                    }
            }
        }
    }