#include<iostream>
using namespace std;
int main()
{
	long long int a, b, i,c = 0;
	cin >> a >> b;
	for (i = 1; i <= a; i++)
		if ((i * a-1) + i >= b && b % i == 0)
			c++;

	cout << c << endl;

}