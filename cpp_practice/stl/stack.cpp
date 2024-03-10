#include<iostream>
#include<stack>


using namespace std;

int main(){
    stack<string> s;
    s.push("Arun");
    s.push("Pavan");
    s.push("LM");
    cout<<"Top Elements-> "<<s.top()<<'\n';
    cout<<"Size -> "<<s.size()<<'\n';
    cout<<"empty? -> "<<s.empty()<<'\n';
    cout<<"Emplace-> "<<s.emplace()<<'\n';
    



    return 0;
}