#include<iostream>

using namespace std;
int factorial(int n);

int main(){
    int n;
    cout<<"Enter the numer: ";
    cin>>n;
    cout<<factorial(n)<<'\n';
    return 0;
}

int factorial(int n){
    if(n==1) return 1;
    return n*factorial(n-1);
}