#include<iostream>
#include<queue>


using namespace std;

int main(){
    priority_queue<int> maxi;                                  // making max heap
    priority_queue<int, vector<int>, greater<int>> mini;    //min-heap
    
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"Size: "<<maxi.size()<<'\n';
    int n = maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);
    cout<<endl;
    
    int m = mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }


    return 0;
}