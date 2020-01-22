//https://www.interviewbit.com/problems/add-one-to-number/
int* plusOne(int* A, int n1, int *len1) {
    int* arr=(int*)malloc(sizeof(int*)*(n1+1));
    int i=0;
    int carry=1;
    for(i=n1-1;i>=0;i--)
    {
        arr[i+1]=A[i]+carry;
        carry=0;
        if(arr[i+1]>=10)
        {
            arr[i+1]=arr[i+1]%10;
            carry=1;
        }
    }
    i=0;
    if(carry>0)
    {
        arr[0]=1;
        *len1=n1+1;
    }
    else
    {
        for(i=0;i<n1;i++)
        {
            arr[i]=arr[i+1];
        }
        *len1=n1;
    }
    i=0;
    if(arr[0]==0)
    {
        for(i=0;i<n1-1;i++)
        {
            arr[i]=arr[i+1];
        }
        *len1=n1-1;
    }
    
    return arr;
}
