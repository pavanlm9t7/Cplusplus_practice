#include<iostream>

using namespace std;

char getMaxCharacter(string s){

    //Creating array of 26 int size and incrementing the number corresponding to the character then finding the max of the increments. 
    int arr[26] = {0};
    for(int i =0 ;i<s.length();i++){

        char ch = s[i];
        int number = 0;
        if(ch >='a' && ch<='z'){
            number = ch-'a'; // for lowercase character
        }else{
            number = ch-'A'; // for uppercase character
        }
        arr[number]++;
    }
    int maxi = -1, ans = 0;
    for(int i =0; i<26;i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a'+ans;
}


//Function replacing the space characters in the input sentence with the user defined character
string replaceSpaces(string &s, char *r){
    string temp = "";
    for(int i =0;i<s.length();i++){
        if(s[i] == ' '){
            temp.push_back(*r);
        }
        else{
            temp.push_back(s[i]);
        }
    }return temp;
}

int main(){
    string s;
    char r;
    cout<<"Enter the string: ";
    getline(cin, s);
    cout<< getMaxCharacter(s)<<"   "<<s<<endl;
    cout<<"Enter the character to add in spaces"<<endl;
    cin>>r;

    s = replaceSpaces(s, &r);
    cout<< s<<endl;
    return 0;
}