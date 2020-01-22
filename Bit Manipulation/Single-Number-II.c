//https://www.interviewbit.com/problems/single-number-ii/
int singleNumber(const int* A, int n1) {
    int i=0,j=0;
    int sum=0,sol=0;
    for(i=0;i<32;i++)
    {
        sum=0;
        for(j=0;j<n1;j++)
        {
            if(((A[j]>>i)&1)==1)
            {
                sum=sum+1;
            }
            
        }
        if(sum%3!=0)
            {
                sol=(1<<i)|sol;
            }
    }
    return sol;
}
