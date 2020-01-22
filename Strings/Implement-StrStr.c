//https://www.interviewbit.com/problems/implement-strstr/
int strStr(const char* A, const char* B) {
    int i=0,n=0,z=0;
    for(i=0;A[i]!='\0';i++)
    {
        n++;
    }
    for(i=0;B[i]!='\0';i++)
    {
        z++;
    }
    if(n==0 || z==0)
        return -1;
    int j;
    i=0;
    for(i=0;i<n;i++){
        if(A[i]==B[0]){
            j=0;
            while(j<z && A[j+i]==B[j]) j++;
            if(j==z)
                return i;
        }
    }
    return -1;
}
