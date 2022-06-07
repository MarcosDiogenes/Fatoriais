#include<stdio.h>  
int main()    
{    
 int i,fatorial=1,numero;    
 printf("Insira um número: ");    
  scanf("%d",&numero);    
    for(i=1;i<=numero;i++){    
      fatorial=fatorial*i;    
  }    
  printf("Fatorial de %d é: %d",numero,fatorial);    
return 0;  
}