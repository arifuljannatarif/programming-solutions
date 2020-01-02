/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-11-20.28                 #
              #  Code submitted  :  2019-11-11-21.55                 #
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
const int mx=4*1e4+5;
int m,k,t,n,a,b,c=0,i,j;
vector<pii>waste;
bool comp(pii x,pii y)
{
    if(x.first<y.first || (x.first==y.first && x.second<y.second))
        return false;
    else
        return true;
}
int main()
{
    scanf("%d %d %d %d",&n,&m,&k,&t);
    for(i=0; i<k; i++)
    {
        scanf("%d %d",&a,&b);
        waste.pb({a,b});
    }
    sort(waste.rbegin(),waste.rend(),comp);
    for(j=0; j<t; j++)
    {
        bool state=false;
        scanf("%d %d",&a,&b);
        for(i=0; i<k &&( waste[i].first<a ||  (waste[i].first<=a && waste[i].second<=b)); i++)
            if(waste[i].first==a && waste[i].second==b)
                state=true;
            else
                state=false;
        ll ans=((a-1)*m)+b-i;
        if(state)
            puts("Waste\n");
        else
        {
            switch(ans%3)
            {
            case 0:
                puts("Grapes");
                break;
            case 1:
                puts("Carrots");
                break;
            case 2:
                puts("Kiwis");
                break;
            }
        }
    }
}