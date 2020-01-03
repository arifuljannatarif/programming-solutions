#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,c=0;
    char x[200];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        if(strcmp(x,"Tetrahedron")==0)c+=4;
        else if(strcmp(x,"Cube")==0)c+=6;
        else if(strcmp(x,"Octahedron")==0)c+=8;
        else if(strcmp(x,"Dodecahedron")==0)c+=12;
        else if(strcmp(x,"Icosahedron")==0)c+=20;
    }
    cout<<c<<endl;
    return 0;
}