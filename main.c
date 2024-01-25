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
   printf("The Armstrong numbers are:");
   for (int i=small;i<=big;i++){
   printf("/t"+isArmstrong(i));
   }
   printf("/nThe Palindromes are:");
for (int i=small;i<=big;i++){
      printf("/t"+isPalindrom(i));
   }
   printf("/nThe Prime numbers are:");
   for (int i=small;i<=big;i++){
      printf("/t"+isPrime(i));
   }
   printf("/nThe Strong numbers are:");
   for (int i=small;i<=big;i++){
      printf("/t"+isStrong(i));
   }
   
   return 0;
}
