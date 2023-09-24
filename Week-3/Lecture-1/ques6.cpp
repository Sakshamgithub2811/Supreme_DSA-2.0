// ques.find minimum number in an array 

/*
 we use INT_MAX here cause it is best practise 
for min no INT_MAX for max no INT_MIN
*/
#include<iostream>
#include<limits.h>
using namespace std;
int minNo(int arr[],int size){
    int minAns = INT_MAX;
    for(int i=0;i<size;i++)
    {
       if(arr[i]<minAns)
       minAns=arr[i];
    }
    return minAns;
}
int main(){
    int arr[]={2, 4, 3 , 55};
    int size =4;

    int minimum = minNo(arr,size);
    cout<<minimum;
}