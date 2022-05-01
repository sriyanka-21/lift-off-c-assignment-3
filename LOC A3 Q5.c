#include <stdio.h>
int Largest(int[],int);
int main()
{
   int a[100],l,large,i;
   printf("Enter size of array:");
   scanf("%d",&l);
   printf("Enter the elements into array:\n");
   for(i=0;i<l;i++)
   scanf("%d",&a[i]);
   large=Largest(a,l);
   printf("Largest number is: %d\n",large);
   return 0;
}
int Largest(int ar[],int L)
{
    int i,Lar;
    Lar=ar[0];
    for(i=1;i<L;i++)
    {
        if(Lar<ar[i])
            Lar=ar[i];
    }
    return Lar;
}
