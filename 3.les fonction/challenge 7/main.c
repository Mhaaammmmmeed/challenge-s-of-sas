#include <stdio.h>
#include <stdlib.h>


int fobinacci(int n ){

int i, f_n, f_0 = 0, f_1 = 1;

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

 }for (i = 0; i <= n; i++){

return f_n;}

}

int main()
{
    int n ,fn ;

  printf("Entrez le nombre de termes:");
  scanf("%d", &n);
  fn=fobinacci(n);

  printf("U%d=%d \n ",n,fn);


    return 0;
}
