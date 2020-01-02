#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	long long int i,n, m, e = 0, c = 0,pos=1;
	cin >> n >> m;
	long long int x[m];
	for ( i = 0; i < m; i++)
		cin >> x[i];


	for ( i = 0;i<m; i++)
	{

	    if(x[i]>pos)
        {
            c+=(x[i]-pos);
            pos=x[i];

        }
        else if(x[i]<pos)
        {
            c+=((n-pos)+x[i]);
            pos=x[i];
        }


	}
	cout<<c<<endl;
	return 0;
}#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	long long int i,n, m, e = 0, c = 0,pos=1;
	cin >> n >> m;
	long long int x[m];
	for ( i = 0; i < m; i++)
		cin >> x[i];


	for ( i = 0;i<m; i++)
	{

	    if(x[i]>pos)
        {
            c+=(x[i]-pos);
            pos=x[i];

        }
        else if(x[i]<pos)
        {
            c+=((n-pos)+x[i]);
            pos=x[i];
        }


	}
	cout<<c<<endl;
	return 0;
}#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	long long int i,n, m, e = 0, c = 0,pos=1;
	cin >> n >> m;
	long long int x[m];
	for ( i = 0; i < m; i++)
		cin >> x[i];


	for ( i = 0;i<m; i++)
	{

	    if(x[i]>pos)
        {
            c+=(x[i]-pos);
            pos=x[i];

        }
        else if(x[i]<pos)
        {
            c+=((n-pos)+x[i]);
            pos=x[i];
        }


	}
	cout<<c<<endl;
	return 0;
}