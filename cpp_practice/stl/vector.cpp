#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>v;
    vector<int> a(5,1);
    for(int i:a){
        std::cout<<i<<' ';
    }
    vector<int> last(a);
    cout<<'\n';
    cout<<"cap: "<<v.capacity()<<'\n';
    v.push_back(1);
    cout<<"cap: "<<v.capacity()<<'\n';
    v.push_back(2);
    cout<<"cap: "<<v.capacity()<<'\n';
    v.push_back(3);
    cout<<"Cap: "<<v.capacity()<<'\n';
    cout<<"Size: "<<v.size()<<'\n';
    cout<<"Element at second index: "<<v.at(1)<<'\n';
    cout<<"Element at first index: "<<v.front()<<'\n';
    cout<<"Element at last index: "<<v.back()<<'\n';
    cout<<"Before pop "<<'\n';
    for(int i:v){
        cout<<i<<'\t';
    }
    cout<<'\n';
    v.pop_back();

    cout<<"After pop "<<'\n';
    for(int i:v){
        cout<<i<<'\t';
    }
    cout<<'\n';
    cout<<v.size()<<'\n';
    v.clear(); //to clear the elements in the vector.
    cout<<v.size()<<'\n';





    return 0;
}