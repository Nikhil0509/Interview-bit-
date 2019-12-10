//https://www.interviewbit.com/problems/wave-array/

int comparator(const void *p, const void *q) 
{
    int l = *(const int *)p; 
    int r = *(const int *)q; 
   return l-r;
} 
int* wave(int* A, int n1, int *len1) {
    
    qsort(A, n1, sizeof(A[0]), comparator);
    int i=0,j=0,temp=0;
    for(i=0;i<n1-1;)
    {
        temp=A[i];
        A[i]=A[i+1];
        A[i+1]=temp;
        i=i+2;
    }
    *len1=n1;
    return A;
}
