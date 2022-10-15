#include<iostream>
using namespace std;

void reverse(string s)
{
   if (s.length()==0)
   {
    return ;
   }

   string ope=s.substr(1);
   reverse(ope);
   cout<<s[0];
}

int main ( )
{
    string s;
    cin>>s;
    reverse(s);
}