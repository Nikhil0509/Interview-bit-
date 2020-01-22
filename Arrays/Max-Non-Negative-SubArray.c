//https://www.interviewbit.com/problems/max-non-negative-subarray/

int* maxset(int* A, int n1, int *length_of_array) {
    *length_of_array = 1;
    int inSoFar = 0;
    int ic = 0;
    int lenSoFar = 0;
    int lc = 0;
    long ps = 0;
    long cs = 0;
    
    int i = 0;
    int flag = 0;
    
    for(i=0;i<n1;i++)
    {
        if(A[i]<0)
        {
            flag = 0;
            cl = 0;
            cs = 0;
        }
        else
        {
            if(flag == 0)
            {
                ic = i;
                flag = 1;
            }
            cl++;
            cs=cs+A[i];
        }
        
        if(sc > ps)
        {
            lenSoFar = cl;
            ps = cs;
            inSoFar = ic;
        }
        else if(cs == ps)
        {
            if(cl > lenSoFar)
            {
                lenSoFar = cl;
                inSoFar = ic;
                ps = cs;
            }
        }
    }
    
    *length_of_array = lenSoFar;
    
    return (A + inSoFar);
    
}
