#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    int arr[500]={0};
    for(int i=0;i<s.size();i++)
    {
        arr[s[i]]=i;
        if(i==0)
            arr[s[i]]=-1;
    }
    char ch;
    string s1;
    cin>>ch>>s1;

    if(ch=='R')
    {
        for(int i=0;i<s1.size();i++)
    {

        if(arr[s1[i]]!=0)
        {
            int p=s[arr[s1[i]]];
            if(p==-1)p=0;
            s1[i]=s[arr[p]-1];

        }

    }
    }
    else if(ch=='L')
    {
        for(int i=0;i<s1.size();i++)
    {

        if(arr[s1[i]]!=0)
        {
            int p=s[arr[s1[i]]];
            if(p==-1)p=0;
            s1[i]=s[arr[p]+1];

        }

    }
    }
    cout<<s1;
}#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    int arr[500]={0};
    for(int i=0;i<s.size();i++)
    {
        arr[s[i]]=i;
        if(i==0)
            arr[s[i]]=-1;
    }
    char ch;
    string s1;
    cin>>ch>>s1;

    if(ch=='R')
    {
        for(int i=0;i<s1.size();i++)
    {

        if(arr[s1[i]]!=0)
        {
            int p=s[arr[s1[i]]];
            if(p==-1)p=0;
            s1[i]=s[arr[p]-1];

        }

    }
    }
    else if(ch=='L')
    {
        for(int i=0;i<s1.size();i++)
    {

        if(arr[s1[i]]!=0)
        {
            int p=s[arr[s1[i]]];
            if(p==-1)p=0;
            s1[i]=s[arr[p]+1];

        }

    }
    }
    cout<<s1;
}#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    int arr[500]={0};
    for(int i=0;i<s.size();i++)
    {
        arr[s[i]]=i;
        if(i==0)
            arr[s[i]]=-1;
    }
    char ch;
    string s1;
    cin>>ch>>s1;

    if(ch=='R')
    {
        for(int i=0;i<s1.size();i++)
    {

        if(arr[s1[i]]!=0)
        {
            int p=s[arr[s1[i]]];
            if(p==-1)p=0;
            s1[i]=s[arr[p]-1];

        }

    }
    }
    else if(ch=='L')
    {
        for(int i=0;i<s1.size();i++)
    {

        if(arr[s1[i]]!=0)
        {
            int p=s[arr[s1[i]]];
            if(p==-1)p=0;
            s1[i]=s[arr[p]+1];

        }

    }
    }
    cout<<s1;
}