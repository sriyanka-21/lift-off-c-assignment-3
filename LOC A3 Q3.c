#include <stdio.h>
int n(int);
int main()
{
    int k;
    printf("Enter a number to check whether it is odd or even\n");
    scanf("%d",&k);
    n(k);
    return 0;
}

int n(int l)
{
if(l%2==0)
{
    printf("\n%d is an even number",l);
}
else
{
    printf("\n%d is an odd number",l);
}
}
