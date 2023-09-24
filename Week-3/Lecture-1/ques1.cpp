/* ques1. 
1. 10 size array
2. take input in that array
3. double up value of the array  
*/
#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int n = 10;
    cout<<"enter the input";
    for(int i=0;i<n;i++)
    cin >> arr[i];

    for(int i=0;i<n;i++)
    arr[i] = 2*arr[i];
    
    // Printing the output:
    for(int i=0;i<n;i++)
    cout<<arr[i];
    
    
}