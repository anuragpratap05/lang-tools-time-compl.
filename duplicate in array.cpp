// arr - input array
// size - size of array
#include<bits/stdc++.h>
int DuplicateNumber(int arr[], int size){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    
    sort(arr,arr+size);
    
    for(int i=0;i<size-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            return arr[i];
        }
    }
    

}
