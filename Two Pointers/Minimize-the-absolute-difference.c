//https://www.interviewbit.com/problems/minimize-the-absolute-difference/
int max(int a,int b,int c)
{
         if(a>=b && a>=c)
        {
            return a;
        }
        if(b>=a && b>=c)
        {
            return b;
        }
        if(c>=b && c>=a)
        {
            return c;
        }
}
int min(int a,int b,int c)
{
      if(a<=b && a<=c)
        {
            return a;
        }
        if(b<=a && b<=c)
        {
            return b;
        }
        if(c<=b && c<=a)
        {
            return c;
        }
}
int solve(int* a, int n1, int* b, int n2, int* c, int n3) {
    int i=n1-1,j=n2-1,k=n3-1,diff=INT_MAX,imax=0,imin=0;
    while(i!=-1 && j!=-1 && k!=-1)
    {
        imax=max(a[i],b[j],c[k]);
        imin=min(a[i],b[j],c[k]);
        if((imax-imin)<diff)
        {
            diff=imax-imin;
        }
        if(imax==a[i])
            i--;
        if(imax==b[j])
            j--;
        if(imax==c[k])
            k--;
    }
    return diff;
    
}
