//https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array-ii/
int removeDuplicates(int* a, int n1) {
    int i=0,j=0,count=0,t=1;
    for(j=0;j<n1;j++)
    {
        t = 1;
        while(j+1<n1 && a[j+1]==a[j])
        {
            t++;
            j++;
        }
        if(t>=2)
        {
            a[i++]=a[j];
            count++;
        }
        a[i++]=a[j];
        count++;
    }
    return count;
}
