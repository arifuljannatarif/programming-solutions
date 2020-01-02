#include<iostream>
using namespace std;
int main(){
	int sq,x,y;
	cin>>sq>>x>>y;
	if(sq<4)
	printf("NO\n");
	else
	{
		sq/=2;
		if((x==sq && (y==sq || y==sq+1) ) || (y==sq && x==sq+1) || (x==sq+1 && y== sq+1))
		printf("NO\n");
		else
		printf("YES\n");
	}
}