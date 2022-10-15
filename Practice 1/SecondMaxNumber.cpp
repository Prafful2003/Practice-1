#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        if(a>b && a>c)     // yaha mistake thi space ki
        {
            if(b>c)
            {
            cout<<b<<endl;
            }
            else 
            
            {
                cout<<c<<endl;
            }
        }
            else if(b>a && b>c)    //yaha mistake thi space ki 
            {
            if(a>c)
            {
                cout<<a<<endl;
            }
            else 
            {
                cout<<c<<endl;
            }
            }
            else 
            {
              if (a>b)          //yaha dekh kuch change hai
            {
            cout<<a<<endl;
            }
            else
            {
            cout<<b<<endl;
            }
            }

    }
        
    
	// your code goes here
	return 0;
}