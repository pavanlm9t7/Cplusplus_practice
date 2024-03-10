#include<bits/stdc++.h>

using namespace std;

void substring(string str, int index, string output);

int main(){
    cout<<"Enter the string: ";
    string str;
    cin>>str;
    cout<<"Printing all subsequences: "<<endl;
    string output="";
    substring(str, 0, output);
    return 0;
}

void substring(string str, int index, string output){
    if(index ==str.length()){
        cout<<output<<endl;
        return;
    }
    substring(str, index+1, output);

    output.push_back(str[index]);
    substring(str, index+1, output);
}