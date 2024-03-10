#include<iostream>
#include<string>

using namespace std;

#define max_size 10

char toLowerCase(char ch){
    if(ch>='a' && ch <='z') return ch;
    else{
        char temp = ch - 'A'+'a';
        return temp;
    }
}

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

void reverse(char name[], int n){
    int s = 0;
    int e = n-1;
    while (s<e){
        swap(name[s++], name[e--]);
    }
}

bool isPalindrome(char name[], int n){
    for(int i = 0;i<=n/2;i++){
        if(toLowerCase(name[i]) != toLowerCase(name[n-1-i])){
            return false;
        }  
    }
    return true;
    
}

int main(){

    char name[max_size];
    cout<<"Enter your name\n";
    cin.getline(name, max_size);
    cout<<"Your name is " <<name<<endl;
    int charLength = getLength(name);
    cout<<"The length of the character Array is "<<charLength<<endl;
    if(isPalindrome(name, charLength)){
        cout<<"The name is palandrome"<<endl;
    }
    reverse(name, charLength);
    cout<<"Your reverse name is " <<name<<endl;

    cout<<"CHARACTER is "<< toLowerCase('b')<<endl;
    cout<<"CHARACTER is "<< toLowerCase('B')<<endl;

    return 0;
}