#include<bits/stdc++.h>
using namespace std;
int main(){
int n,mx=-1,mn=INT_MAX,mx2=-1;
   scanf("%d",&n);int arr[n+5];
   for(int i=0;i<n;i++)
   scanf("%d",&arr[i]);
   sort(arr,arr+n);

   cout<<min((arr[n-2]-arr[0]),(arr[n-1]-arr[1]))<<endl;
}