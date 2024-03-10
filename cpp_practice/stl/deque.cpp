#include<iostream>
#include<deque>


using namespace std;

int main(){

    deque<int> d {1,2,3,4,5};
    
    d.push_back(1);
    d.push_front(2);
    deque<int>::iterator it = d.begin();
    d.insert(it,0);

    for(int i:d){
        cout<<i<<' ';
    }
    cout<<'\n';
    d.pop_front();
    for(int i:d){
        cout<<i<<' ';
    }

    return 0;
}