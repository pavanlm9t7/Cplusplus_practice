#include <bits/stdc++.h>

using namespace std;
int totalsubset = 0;

void printSubset(vector<int> input, vector<int> output, int index);

int main(){

    cout<<"Enter size"<<endl;
    int size;
    cin>>size;
    vector<int> vec(size);
    vector<int> subset; //to store subset, 2^n
    cout<<"Enter elements: "<<endl;
    for(int i=0; i<size; i++) {
    cin>>vec[i];
    }
    cout<<"Power set is as follows:"<<endl;
    printSubset(vec, subset, 0);
    cout<<"Total Number of Subset "<<totalsubset<<endl;

    return 0;
}

void printSubset(vector<int> input, vector<int> output, int index){
    if(index >= input.size()){
        for(auto i : output){
            cout<<i<<" ";
        }cout<<endl;
        totalsubset++;
        return ;
    }

    //excluding
    printSubset(input, output, index+1);

    //including
    output.push_back(input[index]);
    printSubset(input, output, index+1);
}