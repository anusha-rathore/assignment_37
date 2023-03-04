#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
 
   vector<int> v={11,22,33,44};
   cout<<"vector elements : ";
   for(int i=0; i<v.size(); i++)
   {
       cout<<v[i]<<" ";
   }
   
   int size=v.size();
   cout<<"\n reverse vector elements : ";
   
   for(int i=size-1; i>=0;i--)
   {
       cout<<v[i]<<" ";
   }
   cout<<endl;
vector <int> v2={ 1,2,3,4,5};
cout<<" vector 2 elements : ";
vector <int> :: iterator x;
for (x=v2.begin() ; x!= v2.end(); x++){
    cout<<*x;
}

cout<<"\n reverse vector 2 elements : ";
reverse(v2.begin(), v2.end());

for( int x : v2)
{
    cout<<x;
}
    return 0;
}