//https://www.interviewbit.com/problems/intersection-of-sorted-arrays/
int* intersect(const int* A, int n1, const int* B, int n2, int *len1) {
    int i=0,j=0,k=0;
    int* c=(int*)malloc(sizeof(int)*n1);
    while(i<n1 &&j<n2)
    {
        if(A[i]==B[j])
        {
            c[k]=A[i];
            i++;
            j++;
            k++;
            continue;
        }
        if(A[i]<B[j])
        {
            i++;
            continue;
        }
        if(A[i]>B[j])
        {
            j++;
            continue;
        }
    }
    *len1=k;
    return c;
    
}
