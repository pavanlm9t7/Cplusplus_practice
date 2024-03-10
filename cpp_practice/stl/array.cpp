#include<iostream>
#include<array>

using namespace std;

int main(){
    int basic[3]={1,2,3};
    array<int, 4> a = {1,2,3,4};
    int bs = sizeof(basic)/sizeof(basic[0]); // In basic array the .size() cannot be used to know size.
    cout<<&a<<endl; 
    int size = a.size();
    for(int i=0;i<size;i++){

        cout<<a[i]<<endl;
    }
    cout<<"Size: "<<a.size()<<endl;
    cout<<"Element at index 2: "<<a.at(3)<<endl;
    cout<<"To check if array is empty or not: "<<a.empty()<<endl;
    cout<<"First element: "<<a.front()<<endl;
    cout<<"Last element of the array: "<<a.back()<<endl;



    return 0;
}