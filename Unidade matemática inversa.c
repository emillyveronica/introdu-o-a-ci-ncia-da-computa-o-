#include<stdio.h>

int main()
{
      int num, m,c,d,u;
       scanf("%d", &num);
        
       m = (num / 1000);
       c = (num % 1000) / 100;
       d = (num % 100) / 10;
       u = (num % 10) / 1;
    
       printf("Numero original: %d\n", num);
       printf("Milhar: %d\n", m);
       printf("Centena: %d\n", c);
       printf("Dezena: %d\n", d);
       printf("Unidade: %d \n", u);
       printf("Numero invertido: %d%d%d%d", u,d,c,m);
    
    return 0;
}
