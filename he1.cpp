#include <iostream>
using namespace std;

int main() {
   int input[2][2];
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           cin>>input[i][j];
       }
   }
   // Writing output to STDOUT
   int output1,output2;
   output1 = input[0][0] + input[0][2] + input[1][1] + input[2][0] + input[2][2];
   output2 = input[0][1] + input[1][0] +input[1][2] + input[2][1];
   cout<<"input[0][0]"<<input[0][0]<<endl;
   cout<<"input[0][2]"<<input[0][2]<<endl;
   cout<<"input[1][1]"<<input[1][1]<<endl;
   cout<<"input[2][0]"<<input[2][0]<<endl;
   cout<<"input[2][2]"<<input[2][2]<<endl;
   cout<<" space  **********"<<endl;
   cout<<"input[0][1]"<<input[0][1]<<endl;
   cout<<"input[1][0]"<<input[1][0]<<endl;
   cout<<"input[1][2]"<<input[1][2]<<endl;
   cout<<"input[2][1]"<<input[2][1]<<endl;
   cout<<output1<<endl;
   cout<<output2<<endl;
   return 0;
}
