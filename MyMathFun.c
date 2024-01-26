//
// Created by mor on 1/23/24.
//
#include <stdio.h>
#include "MyMathFun.h"
#include "NumClass.h"
int numDig(int num) {
    int digits=0;
    while (num > 0) {
        digits++;
        num = num / 10;
    }
    return digits;
}
    int factorial(int num){
    for (int i=num-1;1>0;i--){
        num*=i;
    }
    return num;
}
  int getDigit(int num, int i) {
    int length = numDig(num);
    for (int j = length - 1; j >= 0; j--) {
        if (j == i)
            return num % 10;
        num /= 10;
    }
    return -1; 
    }

    double pow(double num,double pow){
    double mult=1;
    for(int i=1;i<=pow;i++){
        mult=mult*num;
    }
    return mult;
}
 int max(int x, int y){
    if (x>y){
    return x;
    }
    return y;
 }
  int min(int x, int y){
    if (x<y){
    return x;
    }
    return y;
 }