#include<iostream>
#include<set>

using namespace std;

int main(){

    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for(int i:s){
        cout<<i<<endl;
    }
    cout<<endl;
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for(int i:s){
        cout<<i<<endl;
    }
    cout<<"Count: "<<s.count(5)<<endl; //gives 1 if 5 is present or 0 

    set<int>::iterator itr = s.find(5); //assigning iterator from element 5 
    for(auto it=itr; itr!=s.end();itr++){
        cout<<*itr<<" ";
    }cout<<endl;
    
    return 0;
}