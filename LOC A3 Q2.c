#include <stdio.h> 
int pr(int, int); 
int main()
{
    int n, c;
    printf("Enter a number=");
    scanf("%d",&n);
    c=pr(n,n/ 2);
    if (c==1)
    {
        printf("%d is a prime number\n",n);
    }
    else
    {
        printf("%d is not a prime number\n",n);
    }
    return 0;
}
 
int pr(int n, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (n%i == 0)
       {
         return 0;
       }
       else
       {
         return pr(n, i - 1);
       }       
    }
}
