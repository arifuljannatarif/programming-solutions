#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n+2];
    long long int ans=0;
    string s;
    for(int i=0; i<n; i++)scanf("%d",&arr[i]);
    arr[n]=0;
    cin>>s;
    s+="0";
    vector<int>med;
    char ch='9';
    for(int i=0; i<=n; i++)
    {
        if(ch!=s[i])
        {
            sort(med.begin(),med.end(),greater<int>());
            for(int j=0; j<med.size() && j<k; j++)ans+=med[j];//cout<<med[j]<<endl;;
            med.clear();
            med.push_back(arr[i]);
            ch=s[i];
        }
        else med.push_back(arr[i]);
    }
    cout<<ans<<endl;


}