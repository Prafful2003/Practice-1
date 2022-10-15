#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
     
     for(int i=2; i<n; i++)
     {
         if (n%i!=0)
         {
            if (i<n)
            {
                cout<<"Prime Number !\n";
                break;
            }
            continue;
         }
         else {
            cout<<"NOt Prime Number !\n";
            break;
         }
     }
     cout<<(34/3);
}