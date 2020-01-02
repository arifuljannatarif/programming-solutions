#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int i=0,j=n-1,sum1=0,sum2=0,c=1;
    while(i<=j)
    {
        if(c%2==0)
        {
            if(arr[i]>arr[j])
                sum1+=arr[i],i++;
            else
                sum1+=arr[j],j--;
        }
        else
        {
            if(arr[i]>arr[j])
                sum2+=arr[i],i++;
            else
                sum2+=arr[j],j--;
        }
        c++;
    }
    cout<< sum2 << " " << sum1 <<endl;
}