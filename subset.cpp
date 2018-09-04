#include<bits/stdc++.h>
using namespace std;
int subset(int arr[],int size,int output[][20]){
int sub;
   if(size == 1){
   return sub;
   }
}
int main(){
  int size;
  cout<<"enter the value of size"<<endl;
  cin>>size;
  int arr[size];
  cout<<"enter the elements of array"<<endl;
  for(int i=0;i<size;i++){
   cin>>arr[i];
  }
  int output[20][20];
  cout<<subset(arr,size,output)<<endl;
  return 0;
}

