#include<iostream>

int _factorial(int num);
int factorial(int num);

//using namespace std;

int main(void){
    std::cout<<_factorial(3)<<'\n';
    
    return 0;
}
int _factorial(int num){
    int result = 1;
    for(int i =1; i<=num;i++){
        result = result*i;
    }
    return result;
}

int factorial(int num){
    if(num==1){
        return num;
    }else{
        return num * factorial(num-1);
    }
}