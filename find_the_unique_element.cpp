# lang-tools-time-compl.
#include<bits/stdc++.h>
int FindUnique(int arr[], int size){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    
    //sort(arr,arr+size);
    int res=0;
    for(int i=0;i<size;i++)
    {
        res=res^arr[i];
    }
    return res;
}
