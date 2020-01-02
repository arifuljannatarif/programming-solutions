/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-07-02.49                 #
              #  Code submitted  :                   #
              #                                                      #
              ########################################################
*/
using namespace std;
#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define pii pair<char,int>
#define vi vector< int >
#define vl vector< ll >
const int mx=1e6;
int t,n,c=0,i=-1,j,a,b;
bool comp(pii x,pii y)
{
    return x.second<y.second;
}
int main()
{
    a=b=c=0;
    vector < pii >ans(3);
    ans[0].first='A',ans[1].first='B',ans[2].first='C';
    ans[0].second=0;
    ans[1].second=0;
    ans[2].second=0;
    char left,right,mid;
    while(++i<3)
    {
        scanf(" %c%c%c",&left,&mid,&right);
        switch(mid)
        {
        case '>':
            ans[left-'A'].second++;
            ans[right-'A'].second--;
            break;
        case '<':
            ans[right-'A'].second++;
            ans[left-'A'].second--;
            break;
        }
    }
    sort(ans.begin(),ans.end(),comp);
    //printf("%d %d %d\n",ans[0].second,ans[1].second,ans[2].second);
    if(
       ans[0].second==ans[1].second || ans[0].second==ans[2].second ||
       ans[1].second==ans[2].second)
        printf("Impossible\n");
    else
    printf("%c%c%c\n",ans[0].first,ans[1].first,ans[2].first);




}