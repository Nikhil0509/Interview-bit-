//https://www.interviewbit.com/problems/single-number/
int singleNumber(const int* A, int n1) {
    int i=0,x=A[0];
    for(i=1;i<n1;i++)
    {
        x=x^A[i];
    }
    return x;
}
