//
// Created by mor on 1/23/24.
//
#include "MyMathFun.h"
#include "advencedClassificatinRecursion.h"
    int isPalindrom(int num){
        int digits=numDIg(num);
        return isPalindromHelp(num,0,digits-1);
    }
    int isPalindromHelp(int num,int i,int j){
        if (i==j || j < i)
            return 1;

        if (getDigit(num,i)!=getDigit(num,j))
            return 0;
        return isPalindromHelp( num, i+1, j-1);
    }
    int isArmstrong(int num){
        int digits=numDIg(num);
        int result= (isArmStrongHelp(num,digits,0)==num);
        return result;
    }
    int isArmstrongHelp(int num,int dig,int sum){
        if (numDIg(num)==1)
            return sum+pow(num,dig);
        sum=sum+pow(num%10,dig);
        return isArmstrongHelp(num/10,dig,sum);
    }
