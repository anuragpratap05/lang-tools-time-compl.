# lang-tools-time-compl.
void pairSum(int *input, int n) 
{
    sort(input,input+n);
   /* for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }*/
    //cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(input[i]>0)
        {
            break;
        }
        for(int j=i+1;j<n;j++)
        {
            if(input[i]+input[j]>0)
            {
                break;
            }
            else if(input[i]+input[j]==0)
            {
                cout<<input[i]<<" "<<input[j]<<endl;
            }
        }
    } 
}
