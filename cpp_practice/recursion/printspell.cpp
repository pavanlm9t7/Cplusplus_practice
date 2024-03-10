#include<iostream>

using namespace std;

void printspell(int n, string str[]);

int main(){
    int n;
    cout<<"Enter the input here: ";
    cin>>n;
    string str[10]  =  {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    printspell(n, str);

    return 0;
}

void printspell(int n, string str[]){
    if(n==0){
        return;
    }
    printspell(n/10,str);
    cout<<str[n%10]<<" ";
}