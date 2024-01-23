#include <stdio.h>
#include "MyMathFun.h"
#include "advencedClassificatinRecursion.h"
#include "advencedClassificationLoop.h"
#include "basicClassification.h"

int main() {
   // printf() displays the string inside quotation
   printf("Please insert two native numbers");
   int x,y;
   scanf("%d %d",&x,&y);
   int big=max(x,y);
   int small=min(x,y);
   printf("The Armstrong numbers are: ");
   for (int i=small;i<=big;i++){
   printf(isArmstrong(i)+" ");
   }
   printf("The Palindromes are: ");
for (int i=small;i<=big;i++){
      printf(isPalindrom(i)+" ");
   }
   printf("The Prime numbers are: ");
   for (int i=small;i<=big;i++){
      printf(isPrime(i)+" ");
   }
   printf("The Strong numbers are: ");
   for (int i=small;i<=big;i++){
      printf(isStrong(i)+" ");
   }


   return 0;
}
