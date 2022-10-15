#include<bits/stdc++.h>
using namespace std;
int  main ()
{
    int a,b;
    int t;
    cin>>t;
    while (t--)
    {
    cin>>a>>b;                           /*3 
                                           120 140
                                           10213 312
                                           10 30     */
    int gcd,lcm; 
    for (int i=1; i<=a && i<=b; i++)
    {
        if (a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    lcm=((a*b)/gcd);
    cout<<gcd<<endl<<lcm<<endl;
    }
}