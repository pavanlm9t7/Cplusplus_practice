#include<iostream>

using namespace std;
void print(int n);
void rev_print(int n);

int main(){
    int n; 
    cout<<"Enter the number: ";
    cin>>n;
    print(n);
    cout<<'\n';
    rev_print(n);

    return 0;
}

void print(int n){
    if(n==0){
        return;
    }
    print(n-1);
    cout<<n;

}

void rev_print(int n){
    if(n==0){
        return;
    }
    cout<<n;
    rev_print(n-1);

}