#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;//this creates a vector of 0 size
    vector<int> v(50); //this creates a vector of {0,0,0,0,0,0.........} 50 elements with all zero
    vector<int> v[50];//this creates an array with 50 vectors
    cout<<v.size()<<endl;
    v.push_back(5);//this is for pushing elements in to the backof the vector
    cout<<v.size()<<endl;//this is for printing the size of the vectors
    v.pop_back();//this is for deletingthe last element from the vector
    cout<<v.size();
    v.clear();//erases all the elements in the array
} 
