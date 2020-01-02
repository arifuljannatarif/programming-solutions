#include<bits/stdc++.h>
bool prime[50+1];
void Ss()
{


    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=55; p++)
    {
        if (prime[p] == true)
        {

            for (int i=p*2; i<=55; i += p)
                prime[i] = false;
        }
    }



}
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    Ss();
    for(int i=x+1; i<=y; i++)
    {
        if(i<y && prime[i])
        {
            cout<<"NO\n";
            break;

        }
        else if(i==y )
            {
                if(prime[i])
                    cout<<"YES\n";
                else
                    cout<<"NO\n";

            }

    }
}#include<bits/stdc++.h>
bool prime[50+1];
void Ss()
{


    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=55; p++)
    {
        if (prime[p] == true)
        {

            for (int i=p*2; i<=55; i += p)
                prime[i] = false;
        }
    }



}
using namespace std;
int main()
{
    Ss();
    int x,y;
    cin>>x>>y;
    for(int i=x+1; i<=y; i++)
    {
        if(i<y && prime[i])
        {
            cout<<"NO\n";
            break;

        }
        else if(i==y )
            {
                if(prime[i])
                    cout<<"YES\n";
                else
                    cout<<"NO\n";

            }

    }
}