#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   vector<int> v2{ 11,12,13,14,14};
   int element;
   cout<<"enter any element: ";
   cin>>element;
   vector <int>::iterator it =find(v2.begin(),v2.end(),element);
   if(it!=v2.end()){
       cout<<" element found";
       
   }
   else
   {
       cout<<"not found";
   }
   
    return 0;
}
