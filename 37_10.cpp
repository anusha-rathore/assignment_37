#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   vector<float> v;
   
    v.push_back(2.1);
    v.push_back(4.5);
    v.push_back(6.8); 
    v.push_back(8.5); 
    v.push_back(10.0);

   for(int i=0; i<v.size(); i++)
   {
       cout<<v[i]<<endl;
   }
    return 0;
}
