#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	int c = 0;
	int x;
	for(int i=0; i<n; i++){
		cin >> x;
		if((5-x)>=k){
			c++;
		}
	}

	cout << c/3;
	return 0;
}