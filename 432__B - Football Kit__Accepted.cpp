#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
int main()
{
	int n;
	cin >> n;
	map < int, int >hm, aw;
	int arr[n + 5], arr2[n + 5];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i] >> arr2[i];
		hm[arr[i]]++;
		aw[arr2[i]]++;
	}
	for(int i=0;i<n;i++){
		int h=n-1,a=n-1;
		h+=(hm[arr2[i]]);
		a-=hm[arr2[i]];
		cout<<h<<" "<<a<<endl;
	}
}