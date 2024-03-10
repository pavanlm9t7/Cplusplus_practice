#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l;

    l.push_back(1);
    l.push_front(2);
    list<int> n(l);
    list<int> p(5,100);
    for(int i:l){
        cout<<i<<' ';
    }
    l.erase(l.begin());
    cout<<'\n';

    for(int i:l){
        cout<<i<<' ';
    }
    cout<<'\n';
    cout<<"Size"<<l.size();
    return 0;
}
