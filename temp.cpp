// arr - input array
// n - size of array
int helper(int arr[],int n, int k){
  if(arr[0]<arr[1]){
    return k;
  }
  else
    helper(arr+1,n-1,k++);
}
int FindSortedArrayRotation(int arr[], int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
    */
  helper(arr,n , 0);
}



    min = arr[0];

    for ( c = 1 ; c < size ; c++ )
    {
        if ( arr[c] < minimum )
        {
           minimum = array[c];
           location = c+1;
        }
    }

