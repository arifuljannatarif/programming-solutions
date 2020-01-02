#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;cin>>n;
	int arr[n+5];
	for(int i=0;i<n;i++)cin>>arr[i];
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	if(i)
	printf(" %d",arr[i]);
	else
	printf("%d",arr[i]);
	
	printf("\n");
}#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,x;
    vector<int>vec;
    cin>>a;
    while(a--)
    {
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++)
        {
            cout<<vec[i]<<" ";
        }

    cout<<endl;
    return 0;

}#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,x;
    vector<int>vec;
    cin>>a;
    while(a--)
    {
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++)
        {
            cout<<vec[i]<<" ";
        }

    cout<<endl;
    return 0;

}