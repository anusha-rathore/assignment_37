#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int sum=0;
   vector<int> v={11,22,33,44};
   cout<<"vector elements : ";
   for(int i=0; i<v.size(); i++)
   {
       cout<<v[i]<<" ";
   }
for(int i=0; i<v.size(); i++)
   {
       sum=sum+v[i];
   }
cout<<"\n sum of vector elements : "<<sum;

    return 0;
}