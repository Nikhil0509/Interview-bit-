//https://www.interviewbit.com/problems/amazing-subarrays/
int solve(char* A) {
    int count=strlen(A);
    int str=0,i=0;
    for(i=0;i<count;i++)
    {
        if(A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U'||A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u')
        {
            str=str+(count-i);
        }
    }
    return (str%10003);
    
}
