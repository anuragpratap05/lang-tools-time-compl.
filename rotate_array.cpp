# lang-tools-time-compl.
void rotate(int *input, int d, int n)
{
    //Write your code here
    int a[d];
  for(int i=0;i<d;i++)
  {
      a[i]=input[i];
  }
  for(int i=0;i<n-d;i++)
  {
      input[i]=input[i+d];
  }
    
    for(int i=0;i<d;i++)
    {
        input[i+(n-d)]=a[i];
    }
}
