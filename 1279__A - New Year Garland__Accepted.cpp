#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,ar[5];
    cin>>t;
    while(t--){
        cin>>ar[0]>>ar[1]>>ar[2];
        sort(ar,ar+3);
        if(ar[0]+ar[1]>=ar[2]-1)puts("Yes");
        else puts("No");
    }
}