//https://www.interviewbit.com/problems/find-permutation/

int* findPerm(const char* a, int b, int *len1) {
    int *arr=(int*)malloc(sizeof(int)*b);
    *len1=b;
    int i;
    int j=b;
    i=1;
    int m=0;
    while(m<b-1)
    {
        if(a[m]=='I')
        {
            arr[m]=i;
            i++;
            m++;
        }
        else
        {
            arr[m]=j;
            j--;
            m++;
        }
    }
    arr[m]=i;
    return arr;
}