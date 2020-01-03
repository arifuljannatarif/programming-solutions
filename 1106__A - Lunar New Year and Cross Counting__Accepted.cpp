#include<bits/stdc++.h>
using namespace std;
int d[]= {-1,-1,-1,1,1,-1,1,1},n,cnt,c=0;
bool isvalid(int x,int y)
{
    if(x<0 || y<0 || x>=n || y>=n )return false;
    return true;
}
int main()
{

    scanf("%d",&n);
    char xx[n+5][n+5];
    for(int i=0; i<n; i++)scanf(" %s",xx[i]);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {

            if(xx[i][j]=='X')
            {
                cnt=0;
                for(int k=0; k<8; k+=2)
                {
                    int x=i+d[k],y=j+d[k+1];
                    if( isvalid(x,y) && xx[x][y]=='X' )cnt++;

                }
                if(cnt>=4)c++;
            }
        }
    }
    printf("%d\n",c);

}