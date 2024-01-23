//
// Created by mor on 1/23/24.
//
#include "MyMathFun.h"
#include "advencedClassificationLoop.h"
    int isPalindrom(int number) {
        int startnum = number;
        int reversnum = 0;
        while (number > 0) {
            int digit = number % 10;
            reversnum = reversnum * 10 + digit;
            number / 10;
        }
        if (reversnum == startnum)
            return 1;
        return 0;
    }

    int isArmstrong(int num){
        int sum=0;
        int digits=numDIg(num);
        for(int i=0;i<digits;i++){
            int dig = getDigit(num,i);
            sum = sum+pow(dig,digits);
        }
        return(sum==num);
    }

