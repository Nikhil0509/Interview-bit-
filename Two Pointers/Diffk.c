//https://www.interviewbit.com/problems/diffk/
int diffPossible(int* a, int n1, int b) {
    int i=0,j=1;
    if(n1==1) 
    return 0;
    while(i<n1)
    {
        if((a[j]-a[i])==b)
        {
            return 1;
        }
        else if((a[j]-a[i])<b)
        {
            if(j<n1)
                j++;
        }
        else if((a[j]-a[i])>b)
        {
            i++;
            j++;
        }
        else
        {
            return 0;
        }
    }
}
