//https://www.interviewbit.com/problems/min-xor-value/
int compare(const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int findMinXor(int* A, int n1) {
    qsort(A, n1, sizeof(int), compare);
    int ans = A[0] ^ A[1]; 
    int i;
    for(i = 2; i < n1; i ++)
    {
        if((A[i-1] ^ A[i]) < ans)
            ans = (A[i-1] ^ A[i]);
    }
    return ans;
}
