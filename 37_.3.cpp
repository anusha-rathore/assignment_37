#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    cout<<"enter size of vector";
    cin>>size;
    int a;
    vector<int> v;
   cout<<"enter vector elements";
   for(int i=0; i<size; i++)
   {
       cin>>a;
       v.push_back(a);
   }
   cout<<"vector elements : \n {";
   for(int i=0; i<v.size(); i++)
   {
       cout<<" ";
       cout<< v[i];
   }
   cout<<"}";
    return 0;
}
