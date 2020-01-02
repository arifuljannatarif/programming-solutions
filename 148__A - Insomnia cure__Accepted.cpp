#include<bits/stdc++.h>
using namespace std;
	int a, b, c, d, e,x[100005],f = 0;
int main(){
	cin >> a >> b >> c >> d >> e;
	for(int i=a;i<=e; i+=a){
		x[i] = 1;
	}
	for(int i=b;i<=e; i+=b){
		x[i] = 1;
	}

	for(int i=c;i<=e; i+=c){
		x[i] = 1;
	}

	for(int i=d;i<=e; i+=d){
		x[i] = 1;
	}

	for(int i=1;i<=e; i++){
		if(x[i]==1){f++;
		}
	}

	cout << f<< endl;
}