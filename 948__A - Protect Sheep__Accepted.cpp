#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,df=0;
    cin>>r>>c;
    char arr[r+1][c+1];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='.')arr[i][j]='D';
        }
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(arr[i][j]=='S' )
            {
                if((arr[i][j+1]=='W' && j<c-1) || (arr[i+1][j]== 'W' && i<r-1) || (arr[i][j-1]=='W' && j>0) || (arr[i-1][j]=='W' && i>0))
                {
                    printf("No\n");
                    return 0;
                }
            }
        }
    }
    printf("Yes\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
}