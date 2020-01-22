//https://www.interviewbit.com/problems/length-of-last-word/
int lengthOfLastWord(const char* A) {
    int count=0,prev=0,i=0;
    for(i=0;A[i];i++)
        if(A[i]!=' ')count++;
        else if(A[i]==' '&& count!=0){prev=count;count=0;}
    if(count>=1)prev=count;
    return prev;
}
