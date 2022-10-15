#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z;
	cin>>t;
	while (t--)
	{
	    cin>>x>>y>>z;
	    if (x<=y)
	    {
	        cout<<z<<endl;
	    }
	  else if (x==y)
	        {
	       x=(x/y);
	       cout<<(x*z)<<endl;
	        }
	        else 
	        {
	          for (int i=1; i<=x; i++)
	          {
	             y=(x/y);
	             if (x==y)
	             {
	                 cout<<(y*x)<<endl;
	                 break i;
	             }
	             else {
	                 x=(x-y);
	                 x=(x+y);
	                 cout<<(x*z)<<endl;
	                 break i;
	             }
	          }
	        }
	}
	return 0;
}
