#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int ans[n+2][n+2],cnt=1;
    for(int i=0; i<n; i+=2)
    {
        for(int j=0; j<n; j++)
            ans[j][i]=cnt++;

        for(int j=n-1;j>=0;j--)
            ans[j][i+1]=cnt++;

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                if(j)
            printf(" %d",ans[i][j]);
        else
            printf("%d",ans[i][j]);
        }
        printf("\n");
    }
}