#include <bits/stdc++.h>
using namespace std;
int main()
 {
     string s;
     cin >>s;
     int i, c=0;
     for(i=0; i<s.size(); i++){
        if(s[i]>96)
            c++;
     }
     if(c==0){
        for(i=0; i<s.size(); i++)
            s[i]=tolower(s[i]);
        cout<< s <<endl;
    }
     else if(c==1 && s[0]>96){
        s[0]=toupper(s[0]);
        for(i=1; i<s.size(); i++)
            s[i]=tolower(s[i]);
        cout<< s <<endl;
     }
     else
        cout<< s <<endl;

     return 0;
 }