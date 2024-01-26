//
// Created by mor on 1/23/24.
//
#include <stdio.h>
#include "MyMathFun.h"
#include "basicClassification.h"
#include "NumClass.h"
    int isPrime(int num){
        if (num<2){
            return 0;
        }
        for (int i=2;i<=num/2;i++){
            if(num%i==0)
                return 0;
        }
        return 1;
    }

int isStrong(int num){
    int originalnum=num;
    int sum=0;
    int digits=numDIg(num);
    for (int i=0;i<digits;i++){
       sum += factorial(num%10);
        num=num/10;
    }
    return (originalnum==sum);
}



