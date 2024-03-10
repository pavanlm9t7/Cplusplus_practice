#include<iostream>

int fib(int n);
int print_fibseries(int n);

int main(){
    int n;
    std::cout<<"Enter the number: ";
    std::cin>>n;
    //cout<<"Value of " <<n<< "th Fibonacci is " <<fib(n)<<endl;
    print_fibseries(n);
    return 0;
}

int fib(int n){
    if(n==0 || n==1){
        return n; 
    }  
    return fib(n-1)+fib(n-2);
}

int print_fibseries(int n){
    if(n==0 || n==1){
        return n;
    }
    int fibnm1 = print_fibseries(n-1);
    int fibnm2 = print_fibseries(n-2);
    int fibn = fibnm1+fibnm2;
    std::cout<<"The"<<n<<" term is "<<fibn<<'\n'; // the terms print more times as each term calls function twice.
    return fibn;

}