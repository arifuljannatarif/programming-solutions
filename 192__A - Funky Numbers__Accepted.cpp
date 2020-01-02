#include <stdio.h>
#include <math.h>
int main()
{
	int a,n,i,j;
	scanf("%d",&n);
	n*=2;
	a=sqrt(n);
	if (a*(a+1)>n) a--;
	int arr[a+1];
	n/=2;
	/*printf("%d\n",a);*/
	for (i=1; i<=a; i++)
		arr[i]=(i*(i+1))/2;
	//for (i=1; i<=a; i++)
		//printf("%d\n",arr[i]);
	for (i=1; i<=a; i++)
		for (j=i; j<=a  ; j++)
			if (arr[i]+arr[j]==n)
			{
				printf("YES\n");
				return 0;
			}
	printf("NO\n");
	return 0;
}#include<iostream>
using namespace std;
int n,i,j,x=1,y=1,a;
main()
{
    cin>>n;
    for(i=2; x<n; x+=i,i++,y=1){
        for(j=2; y<=n-x; y+=j,j++)
        {
        if(x+y==n)a=1;

        }
    }
    cout<<(a?"YES":"NO");
}