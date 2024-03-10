#include<iostream>
#include<queue>

using namespace std;


int main(){
    queue<string> q;
    q.push("Pavan");
    q.push("Arun");
    q.push("Mark");
    cout<<"First: "<<q.front()<<endl;
    q.pop();
    cout<<"First: "<<q.front()<<endl;
    cout<<"Size "<<q.size()<<endl;
    return 0;
}