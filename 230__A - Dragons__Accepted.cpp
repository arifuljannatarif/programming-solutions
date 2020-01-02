//#include<bits/stdc++.h>
//#define p printf(
//#define s scanf(
//using namespace std;
//int main()
//{
//    int n,t,i=0,pwr,str,x,y,flag=0;
//    map<int,int>m;
//    vector< int >v;
//    s"%d %d",&str,&t);
//    for(i=0; i<t; i++)
//{
//    s"%d %d",&x,&y);
//    m[x]=y;
//    v.push_back(x);
//
//}
//sort(v.begin(),v.end());
//    for(i=0; i<t; i++)cout<<v[i]<<endl;
//for(i=0; i<t; i++)
//{
//    if(v[i]<str)
//        {
//            str+=m[v[i]];
//        }
//        else
//        {
//            p"NO\n");
//            return 0;
//        }
//    }
//    p"YES\n");
//
//}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,s;
    pair<int,int> x[1000]; /// way to declare a pair array opf 1000 index
    cin >> s>>n;
    for(int i=0; i<n; i++)
    {
        cin >> x[i].first >> x[i].second;
    }
    sort(x,x+n);
    for(int i=0; i<n; i++)
    {
        if(x[i].first < s)
        {
            s+= x[i].second;
        }
        else
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}