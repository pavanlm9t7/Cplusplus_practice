#include<iostream>

using namespace std;

bool checkEqual(int a[26], int b[26]){
    for(int i =0;i<26;i++){
        if(a[i] != b[i]);
        return 0;
    }
    return 1;
}

bool checkINCLUSION(string s1, string s2){
    int count1[26] = {0};

    for(int i =0;i<s1.length();i++){
        int index = s1[i] - 'a';
        count1[index]++;
    }

    int i =0;
    int windowSize = s1.length();
    int count2[26] = {0};
    while(i<windowSize){
        int index = s2[i]-'a';
        count2[index]++;
        i++;
    }
    if(checkEqual(count1, count2)){
        return 1;
    } else{
        return 0;
    }
    
}

int main(){
    string s1,s2;

    cout<<"Enter the string1: ";
    cin>>s1;
    cout<<"Enter the part: ";
    cin>>s2;

    cout<<"The permutation possible is: "<<checkINCLUSION(s1, s2)<<endl;

    return 0;
}

