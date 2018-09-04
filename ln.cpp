void helper(char *input,int size,int i){
  if(size==0){
    return ;
    input[i] = '\0';
  }
  if(input[0] == input[1]){
    for(int i=0;i<size;i++){
        input[i] =input[i+1];
    }
  return helper(input,size-1,i+1);
 }
 else
  return helper(input+1,size-1,i+1);
}
void removeConsecutiveDuplicates(char *input) {
  int i=0;
  while(input[i] != '\0' ){
    i++;
  }
  int a = 0;
  helper(input,i,a);

}
