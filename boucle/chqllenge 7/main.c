#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i, f_n, f_0 = 0, f_1 = 1 ;

  printf("Entrez le nombre de termes:");
  scanf("%d", &n);


  for (i = 0; i <= n; i++)
  {
    if (i <= 1)
     f_n=i;
    else
    {
      f_n = f_0 + f_1;
      f_0 = f_1;
     f_1 = f_n;
    }
    printf("les premiers termes de la suite de Fibonacci est %d\n",f_n);
 }

    return 0;
}
