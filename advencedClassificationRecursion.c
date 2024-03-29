//
// Created by mor on 1/23/24.
//
#include <stdio.h>
#include "MyMathFun.h"
#include "advencedClassificationRecursion.h"
#include "basicClassification.h"
#include "NumClass.h"
    int isPalindrome(int num){
        int digits=numDig(num);
        return isPalindromeHelp(num,0,digits-1);
    }
    int isPalindromeHelp(int num,int i,int j){
        if (i==j || j < i)
            return 1;

        if (getDigit(num,i)!=getDigit(num,j))
            return 0;
        return isPalindromeHelp( num, i+1, j-1);
    }
    int isArmstrong(int num){
        int digits=numDig(num);
        int result= (isArmStrongHelp(num,digits,0));
        return result==num;
    }
    int isArmStrongHelp(int num,int dig,int sum){
        if (numDig(num)==1)
            return sum+(int)pow(num,dig);
        sum=sum+(int)pow(num%10,dig);
        return isArmStrongHelp(num/10,dig,sum);
    }
   