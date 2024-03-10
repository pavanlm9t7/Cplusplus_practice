#include<iostream>

using namespace std;

bool sorted(int arr[], int index);

int main(){

    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter Elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool a = sorted(arr, 1);
    if(a){
        cout<<"Its sorted";
    }else{
        cout<<"Its not sorted";
    }
    return 0;
}
bool sorted(int arr[], int index){
    if(index >= sizeof(arr)/sizeof(arr[0])){
        return true;
    }
    if(arr[index]<arr[index-1]){
        return false;
    }
    return sorted(arr, index+1);
}