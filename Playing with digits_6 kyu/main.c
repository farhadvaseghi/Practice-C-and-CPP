#include <stdio.h>
#include <math.h>

int digPow(int n, int p);
int main()
{   
    printf("%d",digPow(695, 2));
    return 0;
}

int digPow(int n, int p) 
{   
    int s=0, n1=n;
    int length=0;
    if (n == 0) 
        length=1;
    else 
        length = floor(log10(abs(n))) + 1;
    for(int i=p+length-1; i>=p; i--)
    {
        s+=pow((n%10), i);
        n/=10;
    }
    if(s%n1==0)
        return s/n1;
    return -1;
}