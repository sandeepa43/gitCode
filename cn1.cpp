#include<bits/stdc++.h>
using namespace std;
int intersection(int in1[],int in2[],int n,int m){
int i=0,j=0;

    while (i < n && j < m)
    {

        if (in1[i] > in2[j])
        {
            j++;
        }

        else
        if (in2[j] > in1[i])
        {
            i++;
        }
        else
        {
            // when both are equal
            cout << in1[i] << " ";
            i++;
            j++;
        }
    }
}
int main(){
   int n,m;
   cin>>n>>m;
   int *in1 = new int[n];
   int *in2 = new int[m];
   cout<<"enter the values of element of 1 array"<<endl;
   for(int i=0;i<n;i++){
      cin>>in1[i];
   }
   cout<<"enter the values of 2nd array"<<endl;
   for(int i=0;i<m;i++){
      cin>>in2[i];
   }
intersection(in1,in2,n,m);
return 0;
}
