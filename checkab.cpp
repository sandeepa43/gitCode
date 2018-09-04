#include<bits/stdc++.h>
using namespace std;
bool helper(char input[]){
   if(input[0]=='\0'){
    return 1;
   }
   if(input[0] == 'a'){
     if(input[1] == 'a'){
     return 1;
   }
   else if(input[1] == 'b' && input[2] == 'b'){
    return 1;
   }
   else if(input[1] == '\0'){
     return 1;
   }
    else{
      return 0;
    }
}
   if(input[0] == 'b' && input[1] == 'b'){
      if(input[2] == '\0'){

      return 1;}
      else if(input[2]== 'a'){
       return 1;
      }
   }
   else{
   return 0;
   }
}

bool checkab(char input[]){
   if(input[0] == 'a'){
      return helper(input);
   }
   else{
      return 0;
    }
}
int main(){
     int size;
     cin>>size;
     char *input = new char[size];
     for(int i=0;i<size;i++){
       cin>> input[i];
     }
     cout<<checkab(input);
     return 0;
}
