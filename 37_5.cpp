#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   vector<int> v={11,22,33,44};
   for(int i=0; i<v.size(); i++)
   {
       cout<<v[i]<<endl;
   }
  cout << "Min Element = ";
    cout<< *min_element(v.begin(), v.end());
 

  cout << "\nMax Element = ";
    cout<< *max_element(v.begin(), v.end());
   
    

    return 0;
}