#include<iostream>


using namespace std;

void reverseString(string str){
    string temp = "";
    for(int i = (str.length()-1); str[i]!='\0'; i--){
        temp +=str[i];
    }
    cout<<" The reverse string is "<<temp<<endl;
}

int main(){
    string str ="";
    cout<<"Enter the string: ";
    getline(cin, str);
    reverseString(str);
    return 0;
}