#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    string s1;
    cin>>n>>k;
    cin>>s1;
    int arr[26+5];
    memset(arr,0,sizeof(arr));
    for(int i=0; i<s1.size(); i++)
    {
        arr[(int)(s1[i]-65)]++;
    }
    set<int>s;
    int c=0;
    for(int i=0; i<k; i++)
        s.insert(arr[i]);
    for(int i=0; i<26; i++)
        if(arr[i]!=0 )
            c++;
    set<int>::iterator it;
    it=s.begin();
    if(c!=k)
        printf("0\n");
    else
        cout<<*it*k<<endl;
}