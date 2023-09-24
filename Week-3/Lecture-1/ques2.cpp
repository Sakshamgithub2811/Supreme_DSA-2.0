// ques2. sum of 5 size array
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int n=5;
    int sum=0;
    cout<<"enter the inputs";
    for(int i=0;i<5;i++)
    cin>>arr[i];

    for(int i=0;i<5;i++)
    sum = sum +arr[i];
    
    cout<<"printing the sum ";
    cout<<sum;
}