//https://www.interviewbit.com/problems/reverse-bits/
unsigned int reverse(unsigned int a) {
    unsigned int n=0;
    int i=0;
    for(i=0;i<32;i++)
    {
        if((a&1)==1)
        {
            n=n<<1;
            n=n+1;
            a=a>>1;
        }
        else
        {
           n= n<<1;
            a=a>>1;
        }
    }
    return n;
}
