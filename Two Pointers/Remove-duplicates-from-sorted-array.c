//https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array/
int removeDuplicates(int* a, int n1) {
    int i=0,j=0,count=1;
    for(j=0;j<n1;j++)
    {
        if(a[i]==a[j])
        {
            
        }
        else
        {
            
            a[++i]=a[j];
            count++;
        }
    }
    return count;
}
