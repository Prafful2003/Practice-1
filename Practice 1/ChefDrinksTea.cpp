#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z;
	cin>>t;
	while (t--)
	{
	    cin>>x>>y>>z;
	    int mac;
	    if (x>y)
	    {
	        mac=(x/y);
	        if (x%y==0)
	        {
	            x=(mac*z);
	            cout<<x<<endl;
	        }
	        else 
	        {
	            y=(x%y);
	            mac=(mac*z);
	            for (int i=1; i<=y; i++)
	            {
	                x=(mac+z);
	                
	            }
	            cout<<x<<endl;
	        }
	    }
	    else 
	    {
	        cout<<z<<endl;
	    }
	}
	return 0;
}
