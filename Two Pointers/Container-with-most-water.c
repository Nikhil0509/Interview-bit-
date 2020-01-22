//https://www.interviewbit.com/problems/container-with-most-water/
int maxArea(int* A, int n1) {
    int i=0,j=n1-1,max=0;
    while(i<j)
    {
        if(A[i]>A[j])
        {
            if(max<(j-i)*A[j])
            max=(j-i)*A[j];
            j--;
        }
        else if(A[i]<=A[j])
        {
            if(max<(j-i)*A[i])
            max=(j-i)*A[i];
            i++;
        }
        else
        {
            
        }
    }
    return max;
}
