/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-10-12.03                 #
              #  Code submitted  :                   #
              #                                                      #
              ########################################################
*/
using namespace std;
#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define pii pair<int,int>
#define vi vector< int >
#define vl vector< ll >
const int mx=1e6;
int dx[]={0,1,0,-1,-1,0,1,0};
int t,n,c=0,i,j,m,k,ans=0;
char ch,M[200][200],s[200];
set<char>st;
int main()
{
    scanf("%d %d %c",&n,&m,&ch);
    for(i=0; i<n; i++)
    {
        scanf("%s",s);
        for(j=0; j<m; j++)
            M[i][j]=s[j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(M[i][j]==ch){
                if(j>0 && M[i][j-1]!=ch && M[i][j-1]!='.')
                    st.insert(M[i][j-1]);
                if(j<m-1 && M[i][j+1]!=ch && M[i][j+1]!='.')
                    st.insert(M[i][j+1]);
                if(i>0 && M[i-1][j]!=ch && M[i-1][j]!='.')
                    st.insert(M[i-1][j]);
                if(i<n-1 && M[i+1][j]!=ch && M[i+1][j]!='.')
                    st.insert(M[i+1][j]);
            }
        }
    }
    printf("%d\n",st.size());
}