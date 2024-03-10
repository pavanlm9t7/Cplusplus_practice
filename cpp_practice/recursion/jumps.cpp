#include<bits/stdc++.h>
using namespace std;

int numberOfJumps(int n);

int main(){
    cout<<"Enter the value of n"<<endl;
    int n;
    cin>>n;
    cout<<"Number of jumps ->> "<<numberOfJumps(n)<<endl;

    return 0;
}

int numberOfJumps(int n){
    if(n<0) return 0;
    if(n==0) return 1;

    return numberOfJumps(n-1)+ numberOfJumps(n-2)+ numberOfJumps(n-3);

}