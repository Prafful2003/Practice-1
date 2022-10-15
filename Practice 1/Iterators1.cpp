#include<bits/stdc++.h>
using namespace std;
int main ( )
{
    vector<int>   v={12,23,34,45,67};
    for (int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<"  ";
    }
    
    cout<<endl;
    vector<int> ::iterator it=v.begin();
    cout<<(*it)<<endl;
    for (it=v.begin(); it !=v.end(); ++it)
    {
     cout<<*it<<endl;
    }

    vector<pair<int,int> >  p={{10,20},{30,40},{50,60}};
    vector<pair<int,int> >  ::iterator it;
    for (it=p.begin(); it !=p.end(); ++it)
    {
        cout<< (*it).first<<"  "<<(*it).second<<endl;
    }
}