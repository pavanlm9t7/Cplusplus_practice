#include<bits/stdc++.h>

using namespace std;
void getPerm(string str, int index);

int main(){
    cout<<"Enter the string"<<endl;
    string str;
    cin>>str;
    cout<<"Printing all the swapped elements:"<<endl;
    getPerm(str,0);

    return 0;
}

void getPerm(string str, int index){
    if(index>=str.length()){
        cout<<str<<endl;
        return;
    }
    for(int i =index;i<str.length();i++){
        swap(str[index], str[i]);
        getPerm(str, index+1);
        swap(str[index], str[i]);
    }
}