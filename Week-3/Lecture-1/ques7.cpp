// ques.Reverse of an array
/* if we declare both left and right variable it might or not be work acc to versions.*/
#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    // swapping the first n last values 
    int left = 0;
    int right = size - 1;
    for (; left <= right; left++, right--) {
        swap(arr[left],arr[right]);

    }

    for(int i=0;i<size;i++)
    cout<<arr[i];
}

int main(){
    int arr[]={10,20,30,40,50,60,70,80};
    int size = 6;
    reverseArray(arr,size);
}