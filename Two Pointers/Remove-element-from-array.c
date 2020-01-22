//https://www.interviewbit.com/problems/remove-element-from-array/
int removeElement(int* a, int n1, int b) {
    int i=0,count=0;
    for(i=0;i<n1;i++)
    {
        if(a[i]==b)
        {
            a[i]=-999;    
        }
    }
    for(i=0;i<n1;i++)
    {
        if(a[i]!=-999)
        {
           printf("%d ",a[i]);
        }
    }
    return count;
}
