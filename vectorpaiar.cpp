#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <pair<int,int>> vec={
        {1,2},{3,4},{5,6}
    };//Initializing a vector of pairs
    
    vec.push_back(make_pair(7,8));//Adding a pair to the vector
    //make_pair makes 7,8 a pair
    cout<<"Vector contains pairs: ";
    for(int i =0;i<vec.size();i++)
    {
        cout<<"("<<vec[i].first<<","<<vec[i].second<<")"<<" ";
    }
    cout<<endl;
    vec.erase(vec.begin()+1);//Deleting vector at position i
    cout<<"Vector after deletion: ";
    for(int i =0;i<vec.size();i++)
    {
        cout<<"("<<vec[i].first<<","<<vec[i].second<<")"<<" ";
    }
    return 0;
}