#include<iostream>

using namespace std;

int exponent(int x, int n);
int f_exponent(int x, int n);

int main(){
    int x,n;
    cout<<"Enter the base number: ";
    cin>>x;
    cout<<"Enter the power number: ";
    cin>>n;
    cout<<exponent(x,n)<<'\n';

    return 0;
}

int f_exponent(int x, int n){       
    if(n==0) return 1;              //base condition
    
    int part = f_exponent(x, n/2);
    if(n&1){                        //if n is odd
        return x*part*part;
    } 
    else{                           //if n is even
        return part*part;
    }
}


int exponent(int x, int n){
    if(n==0) return 1;
    int ans = x*exponent(x, n-1);
    return ans;
}