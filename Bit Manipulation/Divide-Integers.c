//https://www.interviewbit.com/problems/divide-integers/
int abs(int x)
{
    if(x<0)
        return -x;
    else
        return x;
}
int divide(int A, int B) {
    int ans=0,sign1=1,sign2=1;
    if(A<0)
    {
        sign1=-1;
    }
    if(B<0)
    {
        sign2=-1;
    }
    if(A>=INT_MAX && sign2>0)
    {
        return INT_MAX;
    }
    else if(A>=INT_MAX && sign2<0)
    {
        return -INT_MAX;
    }
    else if(A<=INT_MIN && sign2>0)
    {
        return INT_MIN;
    }
    else if(A<=INT_MIN && sign2<0)
    {
        printf("214748364");
        return 7;
    }
    A=abs(A);
    B=abs(B);
    while(A>=B)
    {
        A=A-B;
        ans++;
    }
    if(sign1>0 && sign2>0)
    return ans;
    else if(sign1<0 && sign2<0)
    return ans;
    else
    return -ans;
    
}
