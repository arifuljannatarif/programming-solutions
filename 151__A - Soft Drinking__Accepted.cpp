#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main(){
	int n,l,k,c,d,p,nl,np;
	scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
	 int n1=(k*l)/nl,n2=(c*d),n3=p/np;
	 cout<<(min(n1,min(n2,n3)))/n<<endl;
}