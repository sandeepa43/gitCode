#include<bits/stdc++.h>
using namespace std;

void FindTriplet(int arr[], int size, int x) {
   sort(arr,arr+size);
  for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
      for(int k=j+1;k<size;k++){
        if(arr[i]+arr[j]+arr[k] == x){
          cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
        }
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
  FindTriplet(input,size,x);
  return 0;
}
