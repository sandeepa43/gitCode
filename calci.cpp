#include<bits/stdc++.h>
using namespace std;
int addition(int size,int sum){
//int sum=0;
  int *arr = new int[size];
  for(int i=0;i<size;i++){
       cin>>arr[i];
  }
  for(int i=0;i<size;i++){
       sum += arr[i];
  }
  return sum;
}
int main(){
  int size;

  cout<<"enter the number of operations to be perfomed"<<endl;
  cin>>size;
  int x;
  cout<<"enter accordingly "<<endl;
  cout<<"for addition 1"<<endl;
  cout<<"for addition 2"<<endl;
  cout<<"for addition 3"<<endl;
  cout<<"for addition 4"<<endl;
  cin>>x;
  if(x == 1){
     cout<<addition(size,0);
   }
   /*else if(x == 2){
  cout<<  sub(size);
   }
   else if(x==3){
    cout<<mul(size);
   }
   else if(x==4){
      cout<<div(size);
   }*/
   else{
    cout<<"wrong entry --- choose wisely"<<endl;
   }
   return 0;
}
