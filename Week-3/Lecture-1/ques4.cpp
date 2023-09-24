// ques4. printing array using functions
#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={2, 4 ,3, 5 ,3};
    int size=5;

    printArray(arr,size);
}