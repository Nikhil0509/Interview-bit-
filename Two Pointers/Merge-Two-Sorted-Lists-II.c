//https://www.interviewbit.com/problems/merge-two-sorted-lists-ii/
int* merge(int* A, int n1, int* B, int n2) {
    int  C=(int*)malloc(sizeof(int*)*(n1+n2));
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(A[i]<=B[j])
        {
            C[k]=A[i];
            i++;
            k++;
        }
        else if(A[i]>B[j])
        {
            C[k]=B[j];
            j++;
            k++;
        }
    }
    while(i<n1)
    {
        C[k]=A[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        C[k]=B[j];
        j++;
        k++;
    }
    return C;
}
