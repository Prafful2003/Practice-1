#include<bits/stdc++.h>
using namespace std;
int main ( )
{
    string s;
    int k;
    cin>>s;
    
    for (int i=0; s.length(); i++)
    {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            k++;
        }
    }

    if (k==5)
    {
        cout<<"Happy"<<endl;
    }
    else {
        cout<<"Sad"<<endl;
    }

}