#include<bits/stdc++.h>
using namespace std;
int helper(int arr[],int size,int i,int j){
     while(size!=0){
   if(arr[i] > arr[j]){
     i++;
     j++;
   }
   else {
     return i;
   }
 }
}
int check(int arr[], int size) {
 // int i=0,j=i+1;
  helper(arr,size,0,1);


}
int main(){
int size;
cin>>size;
  int *arr = new int[size];
  for(int i=0;i<size;i++){
     cin>>arr[i];
  }
   cout<< check(arr,size);
  return 0;
}
