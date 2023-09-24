// ques. Count 0's and 1's in an array 
#include<iostream>
using namespace std;
void countZeroOne(int arr[],int size){
    int zeroCount=0;
    int OneCount=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==1)
        OneCount++;
        else
        zeroCount++;
    }
    cout<<"Zero Count: "<<zeroCount<<endl;
    cout<<"One Count: "<<OneCount;
}
int main(){
    int arr[] = {0,0,0,1,1,0,1,0,1,0};
    int size = 10;

    countZeroOne(arr,size);
}