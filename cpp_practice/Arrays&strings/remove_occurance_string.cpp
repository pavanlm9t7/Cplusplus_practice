#include<iostream>
using namespace std;

string removeOccurances(string s, string part){
    while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part), part.length());
    }
    return s;
}


int main(){
    string str, part;
    cout<<"Enter the string: ";
    cin>>str;
    cout<<"Enter the part: ";
    cin>>part;
    cout<<removeOccurances(str, part)<<endl;


    return 0;
}