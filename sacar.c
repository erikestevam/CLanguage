#include<stdlib.h>
#include<stdio.h>

int main() {

  int n2,n5,n10,n20,n50,n100,n200;
  int resto, saque;


 printf("Qual valor voce deseja sacar\n");
 scanf("%d",&saque);

 if(saque <=1){  
   printf("Nao e possivel sacar esse valor, tente novamente\n");
   return 0;
 }

 if(saque == 3){
   printf("Nao e possivel sacar esse valor, tente novamente\n");
   return 0;
 }

 if (saque >=2){
   n200= saque / 200;  //quantidade de notas
   resto= saque % 200;  //o valor do saque que ira sobrar pra usar nas proximas notas
   n100= resto / 100;
   resto=resto % 100;
   n50= resto / 50;
   resto= resto % 50;
   n20= resto / 20;
   resto= resto % 20;
   n10= resto / 10;
   resto= resto % 10;
   n5= resto / 5;
   resto= resto % 5;
   n2= resto / 2;
   resto= resto % 2;   
} 

 if(resto == 1){//numeros com finais de 6 e 8
   n5 -= 1;
   n2 += 3;    
 }

 if(n5 == -1){//numeros com finais 1 e 3
   n10=n10-1;
   n5=n5+2;
    
 }

 if(n10 == -1){//numeros com finais 1 e 3
   n20 -= 1;
   n10 += 2;
    
 }

 if(n20 == -1){//numeros com finais 1 e 3
   n50 -= 1;
   n20 += 2;
   n10 += 1;
 }

 printf("%d notas de 200\n",n200);
 printf("%d notas de 100\n",n100);
 printf("%d notas de 50\n",n50);
 printf("%d notas de 20\n",n20);
 printf("%d notas de 10\n",n10);
 printf("%d notas de 5\n",n5);
 printf("%d notas de 2\n",n2);
 
return 0;
}
