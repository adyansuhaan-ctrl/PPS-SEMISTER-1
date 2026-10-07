#include<stdio.h>
int main()
{
    int n, i, j, isprime;
    printf("Enter the value of n:");
    scanf("%d" , &n);
    printf("prime number between 1 and %d are:\n" ,n);
    for (i=2; i<=n; i++)
   {

   isprime =1;
  for (j=2; j*j<=i; j++)
   {

     if (i % j==0)
     {
         isprime=0;
         break;
     }

  }
  if (isprime) {
    printf("%d " ,i);
  }
   }
 return 0;
}
