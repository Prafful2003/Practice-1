#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    int k;
    for (int i=0; s.length(); i++)
    {
        if (s[i]=='a')
        {
            k=(k+1);
        }
        else if (s[i]=='e')
        {
             k=(k+2);
        }
        else if (s[i]=='i')
        {
            k=(k+3);
        }
        else if (s[i]=='o')
        {
            k=(k+4);
        }
        else if (s[i]=='u')
        {
            k=(k+5);
        }
    }

    if (k==15)
    {
        cout<<"Happy\n";
    }
    else {
        cout<<"Sad\n";
    }
}