// ques 3. search an element from an array;

#include<iostream>
using namespace std;
int main(){
   int arr[5] = {1,2,10,3,6};
   int n=5;
   int target=5;
   bool flag=0;
   for(int i=0;i<5;i++)
   {
    if(arr[i]==target){
        flag=1;
        break;
    }
   }

   if(flag==1) 
   cout<<"found";
   else 
   cout<<"not found";
   
}