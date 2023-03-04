#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
 
   vector<int> v={1,4,7,8,9};
vector <int> v2={ 1,2,3,4,5};


sort(v.begin() , v.end());
sort(v2.begin(), v2.end());

vector <int> v3 ( v.size () + v2.size());
vector<int> :: iterator it, end ;

end = set_intersection(v.begin(), v.end(), v2.begin() , v2.end(),v3.begin());
    cout<<"common elemtes  v3 :";
    for(it=v3.begin() ; it !=end; it++)
    {
        cout <<*it<<" ";
    }
    return 0;
}