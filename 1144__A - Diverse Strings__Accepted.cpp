#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
	int n,f=0;string s;
	scanf("%d",&n);
	while(n--){
		cin>>s;
		sort(s.begin(),s.end());
		f=1;
		for(int i=1;i<s.size();i++){
			if(s[i-1]!=s[i]-1){
				printf("No\n");
				f=!f;
				break;
			}
		}
		if(f)printf("Yes\n");
	}
}