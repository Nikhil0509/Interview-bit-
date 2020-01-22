//https://www.interviewbit.com/problems/array-3-pointers/
 int abs(int a)
 {
     if(a<0)
     return -a;
     else
     return a;
}

 int max(int a,int b,int c)
 {
    if(a>=b && a>=c)
        return a;
    if(b>=a && b>=c)
        return b;
    if(c>=a && c>=b)
        return c;
 }
int minimize(const int* a, int n1, const int* b, int n2, const int* c, int n3) {
    int i=0,j=0,k=0,imax=0,imin=INT_MAX,x=0,y=0,z=0;
    while(i<n1 && j<n2 && k<n3)
    {
        x=abs(a[i]-b[j]);
        y=abs(b[j]-c[k]);
        z=abs(c[k]-a[i]);
        imax=max(x,y,z);
        if(imax<imin)
        {
            imin=imax;
        }
        if(a[i]<=b[j] && a[i]<=c[k])
            i++;
            else
        if(b[j]<=a[i] && b[j]<=c[k])
            j++;
            else
        if(c[k]<=b[j] && c[k]<=a[i])
            k++;
    }
    return imin;
}
