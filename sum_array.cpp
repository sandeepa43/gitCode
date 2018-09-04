#include<bits/stdc++.h>
using namespace std;
void pairSum(int input[], int size, int x) {
   sort(input,input+size);
   for(int i=0;i<size;i++){
     for(int j=i+1;j<size;j++){
       if(input[i]+input[j] == x){
         cout<< input[i]<<" "<<input[j]<<endl;
       }
     }
   }
}
int main(){
int size;
cin>>size;
int x;
cin>>x;
  int *input = new int[size];
  for(int i=0;i<size;i++){
     cin>>input[i];
  }
  pairSum(input,size,x);
  return 0;
}
