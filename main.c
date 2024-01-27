#include <stdio.h>
#include "MyMathFun.h"
#include "advencedClassificationRecursion.h"
#include "advencedClassificationLoop.h"
#include "basicClassification.h"
#include "NumClass.h"

int main() {
    printf("Please insert two native numbers:");
    int x, y;
    scanf("%d %d", &x, &y);
    int big = max(x, y);
    int small = min(x, y);
    
    printf("\nThe Armstrong numbers are:");
    for (int i = small; i <= big; i++) {
        if (isArmstrong(i))
            printf(" %d", i); 
    }
    
    printf("\nThe Palindromes are:");
    for (int i = small; i <= big; i++) {
        if (isPalindrome(i))
            printf(" %d", i); 
    }
    
    printf("\nThe Prime numbers are:");
    for (int i = small; i <= big; i++) {
        if (isPrime(i))
            printf(" %d", i); 
    }
    
    printf("\nThe Strong numbers are:");
    for (int i = small; i <= big; i++) {
        if (isStrong(i))
            printf(" %d", i);
    }
    
    printf("\n");
    return 0;
}
