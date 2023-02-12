//we use pairs to return more than one values from a function
#include <bits/stdc++.h>
using namespace std;
pair<int,int> func(){
    return {4,3};
}
int main(){
    // pair<int,int> p;
    // p.first=4;
    // p.second=5;
    // cout<<p.first<<" "<<p.second;
    //we can even create a array of pairs
    pair<int,int> arr[5];//this creates an array of 5 pairs
    vector<pair<int,string>> v={{1,"kunal"},{5,"himanshu"},{6,"parth"}};//this creates a vector of pair
    // this is used for sorting the score of the student with the name
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());//for reversing the array
    
    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i].first<<" "<<v[i].second<<endl;
       
       
    }
    
 /*  {{1,0},{1,2},{3,4},{5,2},{8,1}}
    sorting is done in such a way that ordering is done on the basis of the first element but if the first elements ar equal then they are sorted according to the second element*/ 
    return 0;
}