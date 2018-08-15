int getMedian(int ar1[], int ar2[], int n)
{
  if (n==0)
    return -1;
  else if (n==1)
    return (ar1[0]+ar2[0])/2;
  else if(n==2)
    return  (max(ar1[1],ar2[1])+ min(ar1[0],ar1[0]))/2;
   else {
    m1 = median(ar1);
    m2 = meidan(ar2);
    
    /* if m1 < m2 then median must exist in ar1[m1....] and
        ar2[....m2] */
    if (m1 < m2)
    {
        if (n % 2 == 0)
            return getMedian(ar1 + n/2 - 1, ar2, n - n/2 +1);
        return getMedian(ar1 + n/2, ar2, n - n/2);
    }
 
    /* if m1 > m2 then median must exist in ar1[....m1] and
        ar2[m2...] */
    if (n % 2 == 0)
        return getMedian(ar2 + n/2 - 1, ar1, n - n/2 + 1);
    return getMedian(ar2 + n/2, ar1, n - n/2);
    
    }
    
    }
