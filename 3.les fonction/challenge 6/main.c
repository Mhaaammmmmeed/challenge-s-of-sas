#include <stdio.h>
#include <stdlib.h>
int Fibonacci(int terme )
{   int terme_0=0, terme_1=1,i ;
    if (terme <2 )
        return terme;
    else
    for(i=2;i<terme;i++){
        terme = terme_0+ terme_1;
        terme=terme_1;
        terme_0=terme_1;
        return terme;
}



}
int main()
{
    int term,i, fn,f0,f1;
    printf("Veuillez sasir le terms ");
    scanf("%d",&term);

    fn = Fibonacci(term);
    for(i=2;i<term;i++)
    printf("U%d : %d \n",term,fn);
    return 0;
}
