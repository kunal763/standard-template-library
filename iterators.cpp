//iterators behave like pointers
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,5,6,9};
    auto it=v.begin(); //auto keyword is used to deduce datatype automatically. use this line
    //or use this vector<int>::iterator it=v.begin();
    // vector<int>::iterator it=v.begin();
    //v.end() is a iterator to the element after the last element (the non - existent element)
    cout<<*it<<endl;//1
    it++;
    cout<<*it<<endl;//2
    it--;
    cout<<*it<<endl;//1
    cout<<*(it+3)<<endl;//6
    return 0;
}