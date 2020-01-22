//https://www.interviewbit.com/problems/arraybug/
int* rotateArray(int* A, int n1, int B, int *len) {
    int* ret=(int*)malloc(sizeof(int)*n1);
    *len = n1;
    int i=0,j=0;
    int temp=0;
    printf("%d",n1);
        printf("%d",B);

    printf("%d",n1%B);
    for(i=0;i<(n1%B);i++)
    {   temp=A[0];
        for(j=0;j<n1;j++)
        {
            A[j]=A[j+1];
        }
        A[n1-1]=temp;
    }
    for(i=0;i<n1;i++)
    {
        ret[i]=A[i];
    }
    return ret;
}
